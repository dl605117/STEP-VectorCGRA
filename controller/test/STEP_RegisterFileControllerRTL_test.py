'''
=========================================================================
STEP_RegisterFileControllerRTL_test.py
=========================================================================
Simple test for STEP_RegisterFileControllerRTL.

The harness instantiates the two design blocks the RF controller closes a
loop with inside STEP_CgraRTL -- the tokenizer and the load/store
scoreboard -- and drives them the same way STEP_CgraRTL does, so the token
and memory handshakes are the real ones rather than a model.

Author : Cheng Tan
  Date : Dec 15, 2024
'''
from pymtl3.passes.backends.verilog import (VerilogVerilatorImportPass)
from pymtl3.stdlib.test_utils import (run_sim,
                                      config_model_with_cmdline_opts)

from ..STEP_RegisterFileControllerRTL import STEP_RegisterFileControllerRTL
from ...mem.STEP_LD_ST.STEP_LdStScoreboardRTL import STEP_LdStScoreboardRTL
from ...tokenizer.STEP_TokenizerControllerRTL import STEP_TokenizerControllerRTL
from ...lib.util.bram_translate import translate_design_with_bram
from ...lib.basic.val_rdy.SinkRTL import SinkRTL as TestSinkRTL
from ...lib.basic.val_rdy.SourceRTL import SourceRTL as TestSrcRTL
from ...lib.basic.TimedWriteSource import TimedWriteSource
from ...lib.basic.TriggeredConfigSource import TriggeredConfigSource
from ...lib.messages import *
from ...lib.opt_type import *


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
                    CfgTokenizerType,
                    num_ld_ports,
                    num_st_ports,
                    num_banks,
                    num_rd_ports,
                    num_wr_ports,
                    num_registers,
                    num_tokens,
                    max_delay,
                    recv_wr_data_msgs,
                    recv_cfg_from_ctrl_msgs,
                    recv_cfg_tokenizer_msgs,
                    send_rd_data_msgs,
                    recv_ld_data_msgs,
                    recv_ld_data_id_msgs,
                    send_cfg_done_msgs
                    ):
        MaskType = mk_bits(MAX_THREAD_COUNT)
        TidType = mk_bits(clog2(MAX_THREAD_COUNT))
        num_returner_ports = num_wr_ports + num_ld_ports + num_st_ports

        # Configure sources
        ld_data_delay = 3
        s.recv_cfg_from_ctrl = TriggeredConfigSource(CfgMetadataType, recv_cfg_from_ctrl_msgs, False)
        s.recv_cfg_tokenizer = TriggeredConfigSource(CfgTokenizerType, recv_cfg_tokenizer_msgs, False)
        s.recv_wr_data = [TestSrcRTL(RegDataType, recv_wr_data_msgs[i]) for i in range(num_wr_ports)]
        s.recv_ld_data = [TestSrcRTL(RegDataType, recv_ld_data_msgs[i], ld_data_delay) for i in range(num_ld_ports)]
        s.recv_ld_data_id = [TestSrcRTL(TidType, recv_ld_data_id_msgs[i], ld_data_delay) for i in range(num_ld_ports)]

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

        # The real tokenizer: it owns the taker/sink routing, the per-sink
        # delay and the token credits, so tile_token_shifter_out is produced
        # exactly as it is in STEP_CgraRTL.
        s.tokenizer = STEP_TokenizerControllerRTL(CfgTokenizerType,
                                                    num_rd_ports,
                                                    num_wr_ports,
                                                    num_ld_ports,
                                                    num_st_ports,
                                                    num_tokens,
                                                    max_delay,
                                                )

        # The real load/store scoreboard, which is what drives the RF
        # controller's mem_ready/mem_complete masks in STEP_LoadStoreRTL.
        s.ld_st_scoreboard = STEP_LdStScoreboardRTL()

        s.num_wr_ports = num_wr_ports
        s.num_rd_ports = num_rd_ports

        # rd_data is only checked from the second configuration onwards: the
        # first configuration runs while the register file is still empty.
        s.sample_en = Wire(Bits1)
        s.rd_data_val = [Wire(Bits1) for _ in range(num_rd_ports)]
        # Registered so the accept/take handshakes do not form combinational
        # cycles through the DUT once it is imported as one verilated block.
        s.ld_req_accepted_r = [Wire(Bits1) for _ in range(num_ld_ports)]
        s.st_req_accepted_r = [Wire(Bits1) for _ in range(num_st_ports)]
        s.token_take_r = [Wire(Bits1) for _ in range(num_rd_ports)]
        s.sb_mem_dispatch_mask = Wire(MaskType)
        s.sb_ld_done_mask = Wire(MaskType)

        # Connections
        for i in range(num_wr_ports):
            # tile_token_shifter_out is the write valid into the register
            # file, so wr_data only steps to the next thread's result when
            # the tokenizer says a write is landing.
            s.dut.tile_token_shifter_out[i] //= s.tokenizer.token_shifter_out[i]
            s.dut.wr_data[i] //= s.recv_wr_data[i].send.msg
            s.recv_wr_data[i].send.rdy //= s.tokenizer.token_shifter_out[i]
            s.dut.tile_token_return[i] //= s.tokenizer.token_return[i]
            s.dut.tile_token_return[i] //= s.send_tile_token_return[i].recv.msg
            s.dut.tile_token_return[i] //= s.send_tile_token_return[i].recv.val
        # Load/store sinks are not exercised here.
        for i in range(num_wr_ports, num_returner_ports):
            s.tokenizer.token_return[i] //= 0

        for i in range(num_rd_ports):
            # tile_token_take is the read handshake: it marks the cycle on
            # which the register file output holds the operand for the
            # thread just dispatched.
            s.dut.rf_rd_data[i] //= s.send_rd_data[i].recv.msg
            s.send_rd_data[i].recv.val //= s.rd_data_val[i]
            s.dut.tile_token_take[i] //= s.send_tile_token_take[i].recv.msg
            s.dut.tile_token_take[i] //= s.send_tile_token_take[i].recv.val
            s.tokenizer.token_take[i] //= s.token_take_r[i]
            s.dut.tile_token_avail[i] //= s.tokenizer.token_avail[i]

        for i in range(num_ld_ports):
            s.dut.ld_data[i] //= s.recv_ld_data[i].send.msg
            s.dut.ld_data_valid[i] //= s.recv_ld_data[i].send.val
            s.recv_ld_data[i].send.rdy //= 1
            s.dut.ld_data_id[i] //= s.recv_ld_data_id[i].send.msg
            s.recv_ld_data_id[i].send.rdy //= 1
            # Memory always accepts an address while the port is enabled.
            s.dut.ld_req_accepted[i] //= s.ld_req_accepted_r[i]
        for i in range(num_st_ports):
            s.dut.st_req_accepted[i] //= s.st_req_accepted_r[i]

        # ld_st_complete is not consumed by the RF controller.
        s.dut.ld_st_complete //= 0

        # Scoreboard, wired the way STEP_LoadStoreRTL wires bank 0.
        s.ld_st_scoreboard.thread_count_min //= s.dut.cfg_thread_min_bank0
        s.ld_st_scoreboard.thread_count_max //= s.dut.cfg_thread_max_bank0
        s.ld_st_scoreboard.thread_mask //= s.dut.cfg_thread_mask_bank0
        s.ld_st_scoreboard.require_load //= s.dut.cfg_bank_has_load0
        s.ld_st_scoreboard.require_store //= s.dut.cfg_bank_has_store0
        s.ld_st_scoreboard.mem_dispatch_event_mask //= s.sb_mem_dispatch_mask
        s.ld_st_scoreboard.ld_done_event_mask //= s.sb_ld_done_mask
        s.ld_st_scoreboard.st_done_event_mask //= 0
        s.ld_st_scoreboard.clear //= s.dut.cfg_done
        # Bank 0 only takes releases while bank 1 is the active config.
        s.ld_st_scoreboard.release_take //= 0
        s.dut.mem_ready_mask_bank0 //= s.ld_st_scoreboard.ready_mask
        s.dut.mem_complete_mask_bank0 //= s.ld_st_scoreboard.complete_mask
        # Double buffering is off, so bank 1 is never the active config and
        # the dependence-release path is unused.
        s.dut.mem_ready_mask_bank1 //= 0
        s.dut.mem_complete_mask_bank1 //= 0
        s.dut.mem_release_valid //= 0
        s.dut.mem_release_tid //= 0

        s.dut.recv_cfg_from_ctrl //= s.recv_cfg_from_ctrl.send
        s.tokenizer.recv_cfg_from_ctrl //= s.recv_cfg_tokenizer.send
        s.dut.cfg_done //= s.send_cfg_done.recv.msg
        s.dut.cfg_done //= s.send_cfg_done.recv.val

        # Logic to trigger next config message when cfg_done is received
        s.recv_cfg_from_ctrl.cfg_done_received //= s.dut.cfg_done
        s.recv_cfg_tokenizer.cfg_done_received //= s.dut.cfg_done

        @update
        def comb_rd_data_val():
            for i in range(num_rd_ports):
                s.rd_data_val[i] @= s.dut.tile_token_take[i] & s.sample_en

        @update
        def comb_scoreboard_events():
            # Same one-hot event collection STEP_LoadStoreRTL performs.
            mem_dispatch_mask = MaskType(0)
            ld_done_mask = MaskType(0)
            for i in range(num_ld_ports):
                ld_issue_onehot = MaskType(0)
                ld_done_onehot = MaskType(0)
                for tid in range(MAX_THREAD_COUNT):
                    one_hot_tid = MaskType(1 << tid)
                    if s.dut.ld_issue_tid[i] == TidType(tid):
                        ld_issue_onehot = one_hot_tid
                    if s.dut.ld_data_id[i] == TidType(tid):
                        ld_done_onehot = one_hot_tid
                if s.ld_req_accepted_r[i]:
                    mem_dispatch_mask = mem_dispatch_mask | ld_issue_onehot
                if s.dut.ld_data_valid[i]:
                    ld_done_mask = ld_done_mask | ld_done_onehot
            s.sb_mem_dispatch_mask @= mem_dispatch_mask
            s.sb_ld_done_mask @= ld_done_mask

        @update_ff
        def up_sample_en():
            if s.reset:
                s.sample_en <<= 0
            elif s.dut.cfg_done:
                s.sample_en <<= 1
            else:
                s.sample_en <<= s.sample_en

        @update_ff
        def up_handshake_regs():
            if s.reset:
                for i in range(num_ld_ports):
                    s.ld_req_accepted_r[i] <<= 0
                for i in range(num_st_ports):
                    s.st_req_accepted_r[i] <<= 0
                for i in range(num_rd_ports):
                    s.token_take_r[i] <<= 0
            else:
                for i in range(num_ld_ports):
                    s.ld_req_accepted_r[i] <<= s.dut.ld_enable[i]
                for i in range(num_st_ports):
                    s.st_req_accepted_r[i] <<= s.dut.st_enable[i]
                for i in range(num_rd_ports):
                    s.token_take_r[i] <<= s.dut.tile_token_take[i]

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
    num_tokens = 8
    max_delay = num_tiles
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
                                            max_delay,
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

    # Write port 3 (row 1, east) carries the fabric result. Read port 3
    # reads it back, read port 1 reads back what the loads wrote.
    wr_port = 3
    wr_sink = mapped_wr_idx(wr_port)
    taker_port = 3
    fabric_delay = 3

    def make_tokenizer_cfg():
        # A write port is only armed when the tokenizer routes a taker port
        # to its sink, so the route has to be part of the configuration.
        cfg = CfgTokenizerType()
        cfg.token_route_sink_enable[taker_port] = \
            PortRouteType(1 << (num_returner_ports - wr_sink - 1))
        cfg.token_route_delay_to_sink[wr_sink] = PortDelayType(fabric_delay)
        return cfg

    in_regs_val = [b1(0), b1(1)] * 2 + [b1(0)] * (num_rd_ports - 4)
    out_regs_val = [b1(0)] * wr_port + [b1(1)] + [b1(0)] * (num_wr_ports - wr_port - 1)

    # Inputs into dut. Both configurations write back through port 3 so the
    # RF controller has to dispatch every thread before it can retire; the
    # second one targets a scratch register so the values read back on ports
    # 1 and 3 are the ones the first configuration produced.
    out_regs_cfg0 = [RegAddrType(i) for i in range(num_wr_ports)]
    out_regs_cfg1 = [RegAddrType(i) for i in range(num_wr_ports)]
    out_regs_cfg1[wr_port] = RegAddrType(num_wr_ports)

    # The core controller broadcasts one packet: the RF controller arms its
    # write ports from the embedded tokenizer_cfg, and the tokenizer gets
    # the same routes/delays on its own config port.
    recv_cfg_from_ctrl_msgs = [
        CfgMetadataType(cmd = CMD_CONFIG,
                        tokenizer_cfg = make_tokenizer_cfg(),
                        in_regs = [RegAddrType(i) for i in range(num_rd_ports)],
                        in_regs_val = in_regs_val,
                        out_regs = out_regs_cfg0,
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
                        tokenizer_cfg = make_tokenizer_cfg(),
                        in_regs = [RegAddrType(i) for i in range(num_rd_ports)],
                        in_regs_val = in_regs_val,
                        out_regs = out_regs_cfg1,
                        out_regs_val = out_regs_val,
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

    recv_cfg_tokenizer_msgs = [msg.tokenizer_cfg for msg in recv_cfg_from_ctrl_msgs]

    # From Fabric to RF Controller, one result per thread on write port 3.
    # The first pair lands in register 3, the second in the scratch register.
    recv_wr_data = [[] for _ in range(num_wr_ports)]
    recv_wr_data[wr_sink] = [RegDataType(1), RegDataType(2),
                             RegDataType(3), RegDataType(4)]

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
                        CfgTokenizerType,
                        num_ld_ports,
                        num_st_ports,
                        num_banks,
                        num_rd_ports,
                        num_wr_ports,
                        num_registers,
                        num_tokens,
                        max_delay,
                        recv_wr_data,
                        recv_cfg_from_ctrl_msgs,
                        recv_cfg_tokenizer_msgs,
                        send_rd_data,
                        recv_ld_data,
                        recv_ld_data_id,
                        send_cfg_done
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
