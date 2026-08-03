'''
=========================================================================
STEP_RegisterFileControllerRTL_test.py
=========================================================================
Simple test for STEP_RegisterFileControllerRTL.

The harness stands in for the three neighbours the RF controller talks to
inside STEP_CgraRTL: the tokenizer, the tile fabric and the load/store
unit. See STEP_CgraRTL.py for the connections being modelled here.

Author : Cheng Tan
  Date : Dec 15, 2024
'''
from pymtl3.passes.backends.verilog import (VerilogVerilatorImportPass)
from pymtl3.stdlib.test_utils import (run_sim,
                                      config_model_with_cmdline_opts)

from ..STEP_RegisterFileControllerRTL import STEP_RegisterFileControllerRTL
from ...lib.util.bram_translate import translate_design_with_bram
from ...lib.basic.val_rdy.SinkRTL import SinkRTL as TestSinkRTL
from ...lib.basic.val_rdy.SourceRTL import SourceRTL as TestSrcRTL
from ...lib.basic.TimedWriteSource import TimedWriteSource
from ...lib.basic.TriggeredConfigSource import TriggeredConfigSource
from ...lib.messages import *
from ...lib.opt_type import *


#-------------------------------------------------------------------------
# TokenShifterRTL
#-------------------------------------------------------------------------
# Stand-in for one STEP_TokenizerRTL channel. In STEP_CgraRTL the RF
# controller's tile_token_shifter_out comes from the tokenizer, which is
# just tile_token_take pushed through a shift register of depth
# token_route_delay_to_sink. That signal is the write-valid into the
# register file: it says "the fabric result for the thread you dispatched
# `delay` cycles ago is on wr_data now".

class TokenShifterRTL(Component):

    def construct(s, max_delay, delay):
        s.token_take = InPort(Bits1)
        s.token_shifter_out = OutPort(Bits1)
        s.shifter = Wire(mk_bits(max_delay))

        @update
        def comb_shifter_out():
            s.token_shifter_out @= s.shifter[0]

        @update_ff
        def up_shifter():
            if s.reset:
                s.shifter <<= 0
            elif s.token_take:
                s.shifter <<= (s.shifter >> 1) | mk_bits(max_delay)(1 << delay)
            else:
                s.shifter <<= s.shifter >> 1


#-------------------------------------------------------------------------
# MemScoreboardRTL
#-------------------------------------------------------------------------
# Stand-in for STEP_LdStScoreboardRTL inside STEP_LoadStoreRTL. It reports
# a thread's memory operations ready and complete as soon as that thread
# has been dispatched, i.e. a zero-latency memory. The mask is cleared at
# every cfg_done so each configuration starts from an empty scoreboard.

class MemScoreboardRTL(Component):

    def construct(s):
        MaskType = mk_bits(MAX_THREAD_COUNT)
        s.issue_fire = InPort(Bits1)
        s.issue_tid = InPort(mk_bits(clog2(MAX_THREAD_COUNT)))
        s.cfg_done = InPort(Bits1)
        s.mask = OutPort(MaskType)
        s.mask_reg = Wire(MaskType)

        @update
        def comb_mask():
            s.mask @= s.mask_reg

        @update_ff
        def up_mask():
            if s.reset | s.cfg_done:
                s.mask_reg <<= MaskType(0)
            elif s.issue_fire:
                s.mask_reg <<= s.mask_reg | \
                    (MaskType(1) << zext(s.issue_tid, MAX_THREAD_COUNT))
            else:
                s.mask_reg <<= s.mask_reg


#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

class TestHarness(Component):

    def construct(s,
                    num_tiles,
                    RegDataType,
                    RegAddrType,
                    PredAddrType,
                    CfgMetadataType,
                    num_ld_ports,
                    num_st_ports,
                    num_banks,
                    num_rd_ports,
                    num_wr_ports,
                    num_registers,
                    recv_wr_data_msgs,
                    recv_cfg_from_ctrl_msgs,
                    send_rd_data_msgs,
                    recv_ld_data_msgs,
                    recv_ld_data_id_msgs,
                    send_cfg_done_msgs,
                    wr_token_src,
                    fabric_delay
                    ):
        # Configure sources
        ld_data_delay = 3
        s.recv_cfg_from_ctrl = TriggeredConfigSource(CfgMetadataType, recv_cfg_from_ctrl_msgs, False)
        s.recv_wr_data = [TestSrcRTL(RegDataType, recv_wr_data_msgs[i]) for i in range(num_wr_ports)]
        s.recv_ld_data = [TestSrcRTL(RegDataType, recv_ld_data_msgs[i], ld_data_delay) for i in range(num_ld_ports)]
        s.recv_ld_data_id = [TestSrcRTL(mk_bits(clog2(MAX_THREAD_COUNT)), recv_ld_data_id_msgs[i], ld_data_delay) for i in range(num_ld_ports)]

        # Configure sinks
        cmp_fn = lambda a, b : a == b
        s.send_rd_data = [TestSinkRTL(RegDataType, send_rd_data_msgs[i], cmp_fn = cmp_fn) for i in range(num_rd_ports)]
        s.send_cfg_done = TestSinkRTL(Bits1, send_cfg_done_msgs, cmp_fn = cmp_fn)
        s.send_tile_token_take = [TestSinkRTL(Bits1, [1]) for _ in range(num_rd_ports)]
        s.send_tile_token_return = [TestSinkRTL(Bits1, [1]) for _ in range(num_wr_ports)]

        s.dut = STEP_RegisterFileControllerRTL(num_tiles,
                                                RegDataType,
                                                RegAddrType,
                                                PredAddrType,
                                                CfgMetadataType,
                                                num_ld_ports,
                                                num_st_ports,
                                                num_banks,
                                                num_rd_ports,
                                                num_wr_ports,
                                                num_registers,
                                                num_registers,
                                            )

        s.num_wr_ports = num_wr_ports
        s.num_rd_ports = num_rd_ports

        # Tokenizer model: one shifter per write sink, fed by the taker port
        # that token_route_sink_enable routes to that sink.
        s.token_shifter = [TokenShifterRTL(num_tiles, fabric_delay) for _ in range(num_wr_ports)]

        # Load/store scoreboard model.
        s.mem_scoreboard = MemScoreboardRTL()

        # rd_data is only checked from the second configuration onwards: the
        # first configuration runs while the register file is still empty.
        s.sample_en = Wire(Bits1)
        s.rd_data_val = [Wire(Bits1) for _ in range(num_rd_ports)]
        s.ld_req_accepted_r = [Wire(Bits1) for _ in range(num_ld_ports)]
        s.st_req_accepted_r = [Wire(Bits1) for _ in range(num_st_ports)]

        # Connections
        for i in range(num_wr_ports):
            # tile_token_shifter_out is the write-valid, so wr_data only
            # advances to the next thread's result when a write is accepted.
            s.token_shifter[i].token_take //= s.dut.tile_token_take[wr_token_src[i]]
            s.dut.tile_token_shifter_out[i] //= s.token_shifter[i].token_shifter_out
            s.dut.wr_data[i] //= s.recv_wr_data[i].send.msg
            s.recv_wr_data[i].send.rdy //= s.token_shifter[i].token_shifter_out
            s.dut.tile_token_return[i] //= s.send_tile_token_return[i].recv.msg
            s.dut.tile_token_return[i] //= s.send_tile_token_return[i].recv.val

        for i in range(num_rd_ports):
            # tile_token_take is the read handshake: it marks the cycle on
            # which the register file output holds the operand for the
            # thread just dispatched.
            s.dut.rf_rd_data[i] //= s.send_rd_data[i].recv.msg
            s.send_rd_data[i].recv.val //= s.rd_data_val[i]
            s.dut.tile_token_take[i] //= s.send_tile_token_take[i].recv.msg
            s.dut.tile_token_take[i] //= s.send_tile_token_take[i].recv.val
            s.dut.tile_token_avail[i] //= 1

        for i in range(num_ld_ports):
            s.dut.ld_data[i] //= s.recv_ld_data[i].send.msg
            s.dut.ld_data_valid[i] //= s.recv_ld_data[i].send.val
            s.recv_ld_data[i].send.rdy //= 1
            s.dut.ld_data_id[i] //= s.recv_ld_data_id[i].send.msg
            s.recv_ld_data_id[i].send.rdy //= 1
            # Memory always accepts an address while the port is enabled.
            # Registered so the accept does not form a combinational cycle
            # through the DUT once it is imported as a single verilated block.
            s.dut.ld_req_accepted[i] //= s.ld_req_accepted_r[i]
        for i in range(num_st_ports):
            s.dut.st_req_accepted[i] //= s.st_req_accepted_r[i]

        # ld_st_complete is not consumed by the RF controller.
        s.dut.ld_st_complete //= 0

        s.mem_scoreboard.issue_fire //= s.dut.rf_issue_fire
        s.mem_scoreboard.issue_tid //= s.dut.rf_issue_tid
        s.mem_scoreboard.cfg_done //= s.dut.cfg_done
        s.dut.mem_ready_mask_bank0 //= s.mem_scoreboard.mask
        s.dut.mem_ready_mask_bank1 //= s.mem_scoreboard.mask
        s.dut.mem_complete_mask_bank0 //= s.mem_scoreboard.mask
        s.dut.mem_complete_mask_bank1 //= s.mem_scoreboard.mask

        s.dut.recv_cfg_from_ctrl //= s.recv_cfg_from_ctrl.send
        s.dut.cfg_done //= s.send_cfg_done.recv.msg
        s.dut.cfg_done //= s.send_cfg_done.recv.val

        # Logic to trigger next config message when cfg_done is received
        s.recv_cfg_from_ctrl.cfg_done_received //= s.dut.cfg_done

        @update
        def comb_rd_data_val():
            for i in range(num_rd_ports):
                s.rd_data_val[i] @= s.dut.tile_token_take[i] & s.sample_en

        @update_ff
        def up_sample_en():
            if s.reset:
                s.sample_en <<= 0
            elif s.dut.cfg_done:
                s.sample_en <<= 1
            else:
                s.sample_en <<= s.sample_en

        @update_ff
        def up_req_accepted():
            if s.reset:
                for i in range(num_ld_ports):
                    s.ld_req_accepted_r[i] <<= 0
                for i in range(num_st_ports):
                    s.st_req_accepted_r[i] <<= 0
            else:
                for i in range(num_ld_ports):
                    s.ld_req_accepted_r[i] <<= s.dut.ld_enable[i]
                for i in range(num_st_ports):
                    s.st_req_accepted_r[i] <<= s.dut.st_enable[i]

    def done(s):
        for i in range(s.num_wr_ports):
            if not s.recv_wr_data[i].done():
                return False
        for i in range(s.num_rd_ports):
            if not s.send_rd_data[i].done():
                return False
        return s.recv_cfg_from_ctrl.done() & s.send_cfg_done.done()

    def line_trace(s):
        return s.dut.line_trace()

def init_param():
    #-------------------------------------------------------------------------
    # Test cases
    #-------------------------------------------------------------------------

    RegDataType = mk_bits(8)
    num_consts = 1
    num_tile_cols = 4
    num_tile_rows = 4
    num_tiles = num_tile_cols * num_tile_rows
    num_banks = 4
    # Port counts follow STEP_CgraRTL: every tile row exposes four register
    # file read ports (west 0/1, east 0/1) and two write ports (west, east).
    num_rd_ports = num_tile_rows * 4
    num_wr_ports = num_tile_rows * 2
    num_ld_ports = num_tile_cols // 2
    num_st_ports = num_tile_cols // 2
    num_registers = 16
    num_threads = 2
    num_pred_registers = 16
    ThreadIdxType = mk_bits(clog2(MAX_THREAD_COUNT))
    num_taker_ports = num_rd_ports
    num_returner_ports = num_wr_ports + num_ld_ports + num_st_ports

    DataType = mk_bits(8)
    OperationType = mk_bits( clog2(NUM_OPTS) )
    RegAddrType = mk_bits(clog2(num_registers))
    PredAddrType = mk_bits( clog2(num_pred_registers) )

    PortRouteType = mk_bits( num_returner_ports )
    PortDelayType = mk_bits( clog2(num_tiles) )
    CfgTokenizerType = mk_cfg_tokenizer_pkt(num_taker_ports,
                                            num_returner_ports,
                                            num_tiles,
                                            PortRouteType,
                                            PortDelayType
                                            )

    CfgMetadataType = mk_cfg_metadata_pkt(num_tiles,
                                            num_consts,
                                            num_rd_ports,
                                            num_wr_ports,
                                            num_ld_ports,
                                            num_st_ports,
                                            DataType,
                                            RegAddrType,
                                            PredAddrType,
                                            CfgTokenizerType,
                                        )

    # The RF controller swaps the first four write ports into physical sink
    # order, the same 0,2,1,3 permutation the tokenizer uses.
    def mapped_wr_idx(i):
        return ((i & 0x1) << 1) + ((i & 0x2) >> 1) if i < 4 else i

    # Write port 3 (row 1, east) carries the fabric result, read back later
    # through read port 3.
    wr_port = 3
    wr_sink = mapped_wr_idx(wr_port)
    taker_port = 3
    fabric_delay = 3

    # A write port is only armed when the tokenizer routes a taker port to
    # its sink, so the route has to be part of the configuration.
    tokenizer_cfg = CfgTokenizerType()
    tokenizer_cfg.token_route_sink_enable[taker_port] = \
        PortRouteType(1 << (num_returner_ports - wr_sink - 1))

    in_regs_val = [b1(0), b1(1)] * 2 + [b1(0)] * (num_rd_ports - 4)
    out_regs_val = [b1(0)] * wr_port + [b1(1)] + [b1(0)] * (num_wr_ports - wr_port - 1)

    # Inputs into dut
    recv_cfg_from_ctrl_msgs = [
        CfgMetadataType(cmd = CMD_CONFIG,
                        tokenizer_cfg = tokenizer_cfg,
                        in_regs = [RegAddrType(i) for i in range(num_rd_ports)],
                        in_regs_val = in_regs_val,
                        out_regs = [RegAddrType(i) for i in range(num_wr_ports)],
                        out_regs_val = out_regs_val,
                        ld_enable = [b1(0), b1(1)],
                        st_enable = [b1(0), b1(0)],
                        ld_reg_addr = [RegAddrType(0), RegAddrType(1)],
                        cfg_id = 0,
                        br_id = 1,
                        start_cfg = 1,
                        end_cfg = 0,
                        thread_count_min = 0,
                        thread_count_max = num_threads
                        ),
        CfgMetadataType(cmd = CMD_CONFIG,
                        in_regs = [RegAddrType(i) for i in range(num_rd_ports)],
                        in_regs_val = in_regs_val,
                        out_regs = [RegAddrType(i) for i in range(num_wr_ports)],
                        out_regs_val = [b1(0)] * num_wr_ports,
                        ld_enable = [b1(0), b1(0)],
                        st_enable = [b1(0), b1(0)],
                        cfg_id = 1,
                        br_id = 0,
                        start_cfg = 0,
                        end_cfg = 1,
                        thread_count_min = 0,
                        thread_count_max = num_threads
                        )
    ]

    # From Fabric to RF Controller, one result per thread on write port 3.
    recv_wr_data = [[] for _ in range(num_wr_ports)]
    recv_wr_data[wr_sink] = [RegDataType(1), RegDataType(2)]

    # Every write sink is fed by the taker port routed to it.
    wr_token_src = [taker_port] * num_wr_ports

    # Outputs of dut, sampled on tile_token_take from the second config on.
    # Read port 1 reads register 1 (filled by the loads), read port 3 reads
    # register 3 (filled by the fabric writebacks).
    send_rd_data = [[] for _ in range(num_rd_ports)]
    send_rd_data[1] = [RegDataType(5), RegDataType(7)]
    send_rd_data[3] = [RegDataType(1), RegDataType(2)]

    recv_ld_data = [
        [],
        [RegDataType(5), RegDataType(7)],
    ]

    recv_ld_data_id = [
        [],
        [ThreadIdxType(i) for i in range(num_threads)],
    ]

    send_cfg_done = [1] * len(recv_cfg_from_ctrl_msgs)

    th = TestHarness(num_tiles,
                        RegDataType,
                        RegAddrType,
                        PredAddrType,
                        CfgMetadataType,
                        num_ld_ports,
                        num_st_ports,
                        num_banks,
                        num_rd_ports,
                        num_wr_ports,
                        num_registers,
                        recv_wr_data,
                        recv_cfg_from_ctrl_msgs,
                        send_rd_data,
                        recv_ld_data,
                        recv_ld_data_id,
                        send_cfg_done,
                        wr_token_src,
                        fabric_delay
                        )
    return th

def test_simple(cmdline_opts):
    th = init_param()

    th.elaborate()
    # translate_design_with_bram(th.dut, add_bram_attrs=True)
    th.dut.set_metadata(VerilogVerilatorImportPass.vl_Wno_list,
                       ['UNSIGNED', 'UNOPTFLAT', 'WIDTH', 'WIDTHCONCAT',
                        'ALWCOMBORDER'])
    th = config_model_with_cmdline_opts(th, cmdline_opts, duts = ['dut'])
    run_sim(th)
