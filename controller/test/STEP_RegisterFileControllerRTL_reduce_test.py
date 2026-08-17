'''
=========================================================================
STEP_RegisterFileControllerRTL_reduce_test.py
=========================================================================
End-to-end test for the fabric-output reduction feature
(STEP_FabricReduceUnitRTL, wired into STEP_RegisterFileControllerRTL),
built from STEP_RegisterFileControllerRTL_test.py as a template per
Darren's 2026-08-11 review request. Reuses the same TestHarness (real
tokenizer + real load/store scoreboard, not a model) so the reduce
feature is exercised through the same token/issue handshakes production
configs go through.

Config 0 ("accumulate"): issues 4 threads through read port 3, which
(via the tokenizer route from taker port 3 to wr_sink 3) is what makes
write port 3's tile_token_shifter_out fire once fabric_delay cycles
later for each thread -- write port 3 has reduce_en set (op = ADD,
addr = 0), so those 4 fabric values (10, 20, 30, 40) accumulate into
reduce register 0 instead of the main register file.

Config 1 ("read back"): a single thread is issued on read port 4, which
has reduce_rd_en/reduce_rd_addr set instead of a normal in_regs read --
this sources its data straight from the reduce unit's local register 0.
The expected value (100) is only checked from this second config
onward, exactly like the existing test's sample_en gating.

Author : AI-assisted
'''
from pymtl3.passes.backends.verilog import (VerilogVerilatorImportPass)
from pymtl3.stdlib.test_utils import (run_sim,
                                      config_model_with_cmdline_opts)

from .STEP_RegisterFileControllerRTL_test import TestHarness
from ...lib.messages import *
from ...lib.opt_type import *
from ...lib.util.common import NUM_REDUCE_REGISTERS


def init_param_reduce():
    #-------------------------------------------------------------------------
    # Test case: reduce (ADD) 4 fabric values into one register, then read
    # the accumulated result back out through a different read port.
    #-------------------------------------------------------------------------

    RegDataType = mk_bits(8)
    num_consts = 1
    num_tile_cols = 4
    num_tile_rows = 4
    num_tiles = num_tile_cols * num_tile_rows
    num_banks = 4
    num_rd_ports = num_tile_rows * 4
    num_wr_ports = num_tile_rows * 2
    num_ld_ports = num_tile_cols // 2
    num_st_ports = num_tile_cols // 2
    num_registers = 16
    num_pred_registers = 16
    num_tokens = 8
    max_delay = num_tiles
    num_taker_ports = num_rd_ports
    num_returner_ports = num_wr_ports + num_ld_ports + num_st_ports

    DataType = mk_bits(8)
    RegAddrType = mk_bits(clog2(num_registers))
    PredAddrType = mk_bits(clog2(num_pred_registers))
    ReduceAddrType = mk_bits(clog2(NUM_REDUCE_REGISTERS))

    PortRouteType = mk_bits(num_returner_ports)
    PortDelayType = mk_bits(clog2(num_tiles))
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

    def mapped_wr_idx(i):
        return ((i & 0x1) << 1) + ((i & 0x2) >> 1) if i < 4 else i

    # Write port 3 (row 1, east) carries the fabric result and is where
    # reduce_en is enabled. Read port 3 is what actually issues each
    # thread (which is what drives write port 3's writeback token); read
    # port 4 is a separate, otherwise-idle port used only to read the
    # reduce unit's accumulated result back out.
    wr_port = 3
    wr_sink = mapped_wr_idx(wr_port)
    taker_port = 3
    reduce_rd_port = 4
    fabric_delay = 3
    reduce_addr = 0

    # Config 1's completion is tracked entirely through the write-side
    # scoreboard (wr_seen_mask/wr_regs_complete): with no wr_port tracked
    # at all, that scoreboard is vacuously "complete" from the very first
    # cycle, and cfg_done would fire before the reduce read-back ever
    # happens. STEP_RegisterFileControllerRTL_test.py's own config 1
    # avoids this the same way -- it keeps write port 3 active (targeting
    # a scratch register) alongside its reads. Mirroring that here: a
    # second, otherwise-idle write port carries one throwaway value,
    # driven by the same issue/token event as the reduce read-back, so
    # the scoreboard has real progress to wait on.
    scratch_wr_port = 5
    scratch_wr_sink = mapped_wr_idx(scratch_wr_port)
    scratch_reg_addr = 0

    def make_tokenizer_cfg_accumulate():
        # Only needed while read port 3 is issuing (config 0): the route
        # is what turns each issue on read port 3 into a writeback token
        # for write port 3, fabric_delay cycles later.
        cfg = CfgTokenizerType()
        cfg.token_route_sink_enable[taker_port] = \
            PortRouteType(1 << (num_returner_ports - wr_sink - 1))
        cfg.token_route_delay_to_sink[wr_sink] = PortDelayType(fabric_delay)
        return cfg

    def make_tokenizer_cfg_readback():
        # Read port 4 (reduce_rd_port) needs no route: it has no upstream
        # write it is waiting on, so its token stays available by default
        # (see STEP_TokenizerControllerRTL.token_crossbar -- token_avail[i]
        # defaults to 1 unless a route is configured for taker port i).
        # It DOES route to the scratch write port, so that port's
        # completion is tracked exactly like write port 3 was in config 0.
        cfg = CfgTokenizerType()
        cfg.token_route_sink_enable[reduce_rd_port] = \
            PortRouteType(1 << (num_returner_ports - scratch_wr_sink - 1))
        cfg.token_route_delay_to_sink[scratch_wr_sink] = PortDelayType(fabric_delay)
        return cfg

    num_threads_accumulate = 4
    num_threads_readback = 1

    in_regs_val_accumulate = [b1(0)] * num_rd_ports
    in_regs_val_accumulate[taker_port] = b1(1)

    reduce_rd_val_readback = [b1(0)] * num_rd_ports
    reduce_rd_val_readback[reduce_rd_port] = b1(1)
    reduce_rd_addr_readback = [ReduceAddrType(0)] * num_rd_ports
    reduce_rd_addr_readback[reduce_rd_port] = ReduceAddrType(reduce_addr)

    reduce_en_accumulate = [b1(0)] * num_wr_ports
    reduce_en_accumulate[wr_port] = b1(1)
    reduce_addr_accumulate = [ReduceAddrType(0)] * num_wr_ports
    reduce_addr_accumulate[wr_port] = ReduceAddrType(reduce_addr)

    out_regs_val_readback = [b1(0)] * num_wr_ports
    out_regs_val_readback[scratch_wr_port] = b1(1)

    recv_cfg_from_ctrl_msgs = [
        # Config 0: accumulate 4 fabric values (ADD) into reduce reg 0.
        # No main-register-file writes at all -- reduce_en is the only
        # thing enabled on write port 3.
        CfgMetadataType(cmd = CMD_CONFIG,
                        tokenizer_cfg = make_tokenizer_cfg_accumulate(),
                        in_regs = [RegAddrType(i) for i in range(num_rd_ports)],
                        in_regs_val = in_regs_val_accumulate,
                        reduce_en = reduce_en_accumulate,
                        reduce_op = OPT_VEC_REDUCE_ADD,
                        reduce_addr = reduce_addr_accumulate,
                        cfg_id = 0,
                        br_id = 1,
                        start_cfg = 1,
                        end_cfg = 0,
                        thread_count_min = 0,
                        thread_count_max = num_threads_accumulate,
                        ),
        # Config 1: read the accumulated value back out through read port
        # 4 (reduce_rd_en), a single thread's worth. Also performs one
        # throwaway write on scratch_wr_port so the write-side scoreboard
        # has real progress to track (see comment above).
        CfgMetadataType(cmd = CMD_CONFIG,
                        tokenizer_cfg = make_tokenizer_cfg_readback(),
                        reduce_rd_en = reduce_rd_val_readback,
                        reduce_rd_addr = reduce_rd_addr_readback,
                        out_regs = [RegAddrType(scratch_reg_addr)] * num_wr_ports,
                        out_regs_val = out_regs_val_readback,
                        cfg_id = 1,
                        br_id = 0,
                        start_cfg = 0,
                        end_cfg = 1,
                        thread_count_min = 0,
                        thread_count_max = num_threads_readback,
                        )
    ]

    recv_cfg_tokenizer_msgs = [msg.tokenizer_cfg for msg in recv_cfg_from_ctrl_msgs]

    # From fabric to RF controller: the 4 values to be summed, arriving
    # on write port 3, plus one throwaway value for the scratch write in
    # config 1 (see comment above -- its content is never checked).
    recv_wr_data = [[] for _ in range(num_wr_ports)]
    recv_wr_data[wr_sink] = [RegDataType(10), RegDataType(20),
                              RegDataType(30), RegDataType(40)]
    recv_wr_data[scratch_wr_sink] = [RegDataType(99)]

    # Expected outputs: only read port 4 (the reduce read-back) is
    # exercised, and only from config 1 onward (sample_en). The expected
    # sum of [10, 20, 30, 40] is 100.
    send_rd_data = [[] for _ in range(num_rd_ports)]
    send_rd_data[reduce_rd_port] = [RegDataType(100)]

    recv_ld_data = [[] for _ in range(num_ld_ports)]
    recv_ld_data_id = [[] for _ in range(num_ld_ports)]

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
                        send_cfg_done,
                        reduce_rd_check_ports = [reduce_rd_port],
                        )
    return th


def test_reduce_add_then_readback(cmdline_opts):
    th = init_param_reduce()

    th.elaborate()
    th.dut.set_metadata(VerilogVerilatorImportPass.vl_Wno_list,
                       ['UNSIGNED', 'UNOPTFLAT', 'WIDTH', 'WIDTHCONCAT',
                        'ALWCOMBORDER'])
    th = config_model_with_cmdline_opts(th, cmdline_opts, duts = ['dut'])
    run_sim(th)
