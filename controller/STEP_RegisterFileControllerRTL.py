from pymtl3 import *
from ..lib.basic.val_rdy.ifcs import RecvIfcRTL, SendIfcRTL
from pymtl3.stdlib.primitive import Reg
from ..mem.register_cluster.STEP_RegisterFileRTL import STEP_RegisterFileRTL
from ..mem.register_cluster.STEP_RegisterFileFullBankRTL import STEP_RegisterFileFullBankRTL
from .STEP_FabricReduceUnitRTL import STEP_FabricReduceUnitRTL
from ..lib.messages import *
from ..lib.opt_type import *
from ..lib.util.common import *

class STEP_RegisterFileControllerRTL( Component ):
    def construct(s,
                    num_tiles,
                    RegDataType,
                    RegAddrType,
                    PredAddrType,
                    CfgMetadataType,
                    num_ld_ports,
                    num_st_ports,
                    num_banks=2,
                    num_rd_ports=2,
                    num_wr_ports=2,
                    num_registers=16,
                    num_pred_registers = 16,
                    enable_double_buffering = False,
                    debug = True,
                    ):

        def _diag_signal(Type):
            return OutPort(Type) if debug else Wire(Type)

        # -------------------------------------------------------------------------
        # Submodules
        # -------------------------------------------------------------------------

        # s.register_file = STEP_RegisterFileRTL(
        #     RegDataType, RegAddrType,
        #     num_reg_banks=num_banks,
        #     num_rd_ports=num_rd_ports,
        #     num_wr_ports=num_wr_ports + num_ld_ports,
        #     num_registers_per_reg_bank=num_registers // num_banks
        # )
        s.register_file = STEP_RegisterFileFullBankRTL(RegDataType, RegAddrType, num_registers,
                num_rd_ports=num_rd_ports,
                num_wr_ports=num_wr_ports + num_ld_ports,
                num_registers_per_reg_bank=MAX_THREAD_COUNT)

        # Fabric-output reduction submodule; see STEP_FabricReduceUnitRTL.py.
        s.fabric_reduce_unit = STEP_FabricReduceUnitRTL(RegDataType, num_wr_ports)

        # External ifcs
        s.recv_cfg_from_ctrl = RecvIfcRTL( CfgMetadataType )   # from main ctrl
        s.recv_cfg_thread_mask = InPort(mk_bits(MAX_THREAD_COUNT))
        s.recv_cfg_pred_reset_mask = InPort(mk_bits(num_pred_registers))
        s.rd_data            = [ OutPort(RegDataType) for _ in range(num_rd_ports) ]
        s.wr_data            = [ InPort(RegDataType) for _ in range(num_wr_ports) ]
        s.cfg_done           = OutPort( 1 )                # level-true when RUN complete this cycle
        # Direct (unpipelined) debug view of the reduction unit's local
        # register file and per-entry completion. The primary way results
        # leave this unit is via the normal s.rd_data[i] ports when a
        # rd_port is configured with reduce_rd_en (see comb_output_data).
        s.reduce_rd_data     = [ OutPort(RegDataType) for _ in range(NUM_REDUCE_REGISTERS) ]
        s.reduce_complete    = [ OutPort(Bits1)       for _ in range(NUM_REDUCE_REGISTERS) ]
        s.cfg_ready_for_next = _diag_signal( Bits1 )
        s.dep_mode_out       = OutPort( 1 )
        s.recv_pred_port = [ InPort(1) for _ in range(num_wr_ports)]
        s.send_tile_preds = [ OutPort(Bits1) for _ in range(num_tiles)]
        s.pred_any_true = [ OutPort(Bits1) for _ in range(num_pred_registers) ]
        s.pred_any_false = [ OutPort(Bits1) for _ in range(num_pred_registers) ]
        s.pred_complete = [ OutPort(Bits1) for _ in range(num_pred_registers) ]
        s.pred_true_count = [ OutPort(mk_bits(clog2(MAX_THREAD_COUNT + 1))) for _ in range(num_pred_registers) ]
        s.pred_false_count = [ OutPort(mk_bits(clog2(MAX_THREAD_COUNT + 1))) for _ in range(num_pred_registers) ]
        s.pred_true_mask = [ OutPort(mk_bits(MAX_THREAD_COUNT)) for _ in range(num_pred_registers) ]
        s.pred_false_mask = [ OutPort(mk_bits(MAX_THREAD_COUNT)) for _ in range(num_pred_registers) ]
        s.cfg_active_sel_w = Wire(Bits1)
        s.cfg_load_sel_w = Wire(Bits1)
        s.cfg_swap_w = Wire(Bits1)
        s.cfg_dep_start_w = Wire(Bits1)
        if enable_double_buffering:
            s.cfg_active_sel = InPort(Bits1)
            s.cfg_load_sel = InPort(Bits1)
            s.cfg_swap = InPort(Bits1)
            s.cfg_dep_start = InPort(Bits1)
            @update
            def cfg_select_wires():
                s.cfg_active_sel_w @= s.cfg_active_sel
                s.cfg_load_sel_w @= s.cfg_load_sel
                s.cfg_swap_w @= s.cfg_swap
                s.cfg_dep_start_w @= s.cfg_dep_start
        else:
            @update
            def cfg_select_wires():
                s.cfg_active_sel_w @= Bits1(0)
                s.cfg_load_sel_w @= Bits1(0)
                s.cfg_swap_w @= Bits1(0)
                s.cfg_dep_start_w @= Bits1(0)
        s.send_thread_min = OutPort( clog2(MAX_THREAD_COUNT + 1) )
        s.send_thread_max = OutPort( clog2(MAX_THREAD_COUNT + 1) )
        s.ld_enable = [OutPort(1) for _ in range(num_ld_ports)]
        s.st_enable = [OutPort(1) for _ in range(num_st_ports)]
        s.ld_st_complete = InPort(1)
        s.mem_ready_mask_bank0 = InPort(mk_bits(MAX_THREAD_COUNT))
        s.mem_ready_mask_bank1 = InPort(mk_bits(MAX_THREAD_COUNT))
        s.mem_complete_mask_bank0 = InPort(mk_bits(MAX_THREAD_COUNT))
        s.mem_complete_mask_bank1 = InPort(mk_bits(MAX_THREAD_COUNT))
        s.mem_release_valid = InPort(1)
        s.mem_release_tid = InPort(clog2(MAX_THREAD_COUNT))
        s.mem_release_take = OutPort(1)
        s.cfg_thread_min_bank0 = OutPort(clog2(MAX_THREAD_COUNT + 1))
        s.cfg_thread_max_bank0 = OutPort(clog2(MAX_THREAD_COUNT + 1))
        s.cfg_thread_min_bank1 = OutPort(clog2(MAX_THREAD_COUNT + 1))
        s.cfg_thread_max_bank1 = OutPort(clog2(MAX_THREAD_COUNT + 1))
        s.cfg_thread_mask_bank0 = OutPort(mk_bits(MAX_THREAD_COUNT))
        s.cfg_thread_mask_bank1 = OutPort(mk_bits(MAX_THREAD_COUNT))
        s.cfg_bank_has_load0 = OutPort(Bits1)
        s.cfg_bank_has_load1 = OutPort(Bits1)
        s.cfg_bank_has_store0 = OutPort(Bits1)
        s.cfg_bank_has_store1 = OutPort(Bits1)
        s.ld_data = [InPort(RegDataType) for _ in range(num_ld_ports)]
        s.ld_data_valid = [InPort(1) for _ in range(num_ld_ports)]
        s.ld_data_id = [InPort(clog2(MAX_THREAD_COUNT)) for _ in range(num_ld_ports)]
        s.ld_req_accepted = [InPort(1) for _ in range(num_ld_ports)]
        s.st_req_accepted = [InPort(1) for _ in range(num_st_ports)]
        s.ld_issue_tid = [OutPort(clog2(MAX_THREAD_COUNT)) for _ in range(num_ld_ports)]
        s.st_issue_tid = [OutPort(clog2(MAX_THREAD_COUNT)) for _ in range(num_st_ports)]
        s.tile_token_take = [ OutPort(1) for _ in range(num_rd_ports) ]
        s.tile_token_return = [ OutPort(1) for _ in range(num_wr_ports) ]
        s.tile_token_avail = [ InPort(1) for _ in range(num_rd_ports) ]
        s.tile_token_shifter_out = [ InPort(1) for _ in range(num_wr_ports) ]
        s.tile_token_take_req = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.tile_token_take_pair_req = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.tile_token_take_pair_mirror = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.tile_token_avail_pair = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.tile_token_pair_required = [ Wire(Bits1) for _ in range(num_rd_ports) ]

        s.pred_tile_valid_active = [ Wire(Bits1) for _ in range(num_tiles) ]
        s.pred_tile_valid_bank0 = [ Wire(Bits1) for _ in range(num_tiles) ]
        s.pred_tile_valid_bank1 = [ Wire(Bits1) for _ in range(num_tiles) ]
        # Predicate register file
        PredCountType = mk_bits(clog2(MAX_THREAD_COUNT + 1))
        MaskType = mk_bits(MAX_THREAD_COUNT)
        PredResetMaskType = mk_bits(num_pred_registers)
        s.pred_count = [ Wire(PredCountType) for _ in range(num_pred_registers) ]
        s.pred_expected = [ Wire(PredCountType) for _ in range(num_pred_registers) ]
        s.pred_any_true_reg = [ Wire(Bits1) for _ in range(num_pred_registers) ]
        s.pred_any_false_reg = [ Wire(Bits1) for _ in range(num_pred_registers) ]
        s.pred_true_count_reg = [ Wire(PredCountType) for _ in range(num_pred_registers) ]
        s.pred_false_count_reg = [ Wire(PredCountType) for _ in range(num_pred_registers) ]
        s.pred_true_mask_reg = [ Wire(MaskType) for _ in range(num_pred_registers) ]
        s.pred_false_mask_reg = [ Wire(MaskType) for _ in range(num_pred_registers) ]
        s.pred_seen_mask_reg = [ Wire(MaskType) for _ in range(num_pred_registers) ]
        s.pred_force_const_mask_reg = [ Wire(MaskType) for _ in range(num_pred_registers) ]
        s.pred_count_next = [ Wire(PredCountType) for _ in range(num_pred_registers) ]
        s.pred_expected_next = [ Wire(PredCountType) for _ in range(num_pred_registers) ]
        s.pred_any_true_next = [ Wire(Bits1) for _ in range(num_pred_registers) ]
        s.pred_any_false_next = [ Wire(Bits1) for _ in range(num_pred_registers) ]
        s.pred_true_count_next = [ Wire(PredCountType) for _ in range(num_pred_registers) ]
        s.pred_false_count_next = [ Wire(PredCountType) for _ in range(num_pred_registers) ]
        s.pred_true_mask_next = [ Wire(MaskType) for _ in range(num_pred_registers) ]
        s.pred_false_mask_next = [ Wire(MaskType) for _ in range(num_pred_registers) ]
        s.pred_seen_mask_next = [ Wire(MaskType) for _ in range(num_pred_registers) ]
        s.pred_force_const_mask_next = [ Wire(MaskType) for _ in range(num_pred_registers) ]
        s.active_pred_reg = Wire(PredAddrType)
        s.active_branch_en = Wire(Bits1)
        s.active_const_store = Wire(Bits1)
        num_tile_rows_local = num_wr_ports // 2
        num_tile_cols_local = num_tiles // num_tile_rows_local
        num_returner_ports = num_wr_ports + num_ld_ports + num_st_ports
        for i in range(num_rd_ports):
            s.tile_token_take_pair_mirror[i] //= s.tile_token_take_pair_req[i ^ 2]
            s.tile_token_avail_pair[i] //= s.tile_token_avail[i ^ 2]

        @update
        def comb_pair_requirements():
            for i in range(num_rd_ports):
                s.tile_token_pair_required[i] @= s.rd_port_active[i] & s.rd_port_active[i ^ 2]

        @update
        def select_predicates():
            for i in range(num_tiles):
                s.send_tile_preds[i] @= s.pred_tile_valid_active[i]

        @update
        def comb_cfg_bank_requirements():
            bank0_has_load = Bits1(0)
            bank1_has_load = Bits1(0)
            bank0_has_store = Bits1(0)
            bank1_has_store = Bits1(0)
            for i in range(num_ld_ports):
                bank0_has_load = bank0_has_load | s.ld_enable_bank0[i]
                bank1_has_load = bank1_has_load | s.ld_enable_bank1[i]
            for i in range(num_st_ports):
                bank0_has_store = bank0_has_store | s.st_enable_bank0[i]
                bank1_has_store = bank1_has_store | s.st_enable_bank1[i]
            s.cfg_thread_min_bank0 @= s.active_thread_min_bank0
            s.cfg_thread_max_bank0 @= s.active_thread_max_bank0
            s.cfg_thread_min_bank1 @= s.active_thread_min_bank1
            s.cfg_thread_max_bank1 @= s.active_thread_max_bank1
            s.cfg_thread_mask_bank0 @= s.active_thread_mask_bank0
            s.cfg_thread_mask_bank1 @= s.active_thread_mask_bank1
            s.cfg_bank_has_load0 @= bank0_has_load
            s.cfg_bank_has_load1 @= bank1_has_load
            s.cfg_bank_has_store0 @= bank0_has_store
            s.cfg_bank_has_store1 @= bank1_has_store

        @update
        def pred_reduce():
            for r in range(num_pred_registers):
                s.pred_any_true[r] @= s.pred_any_true_reg[r]
                s.pred_any_false[r] @= s.pred_any_false_reg[r]
                s.pred_complete[r] @= (s.pred_count[r] >= s.pred_expected[r]) & (s.pred_expected[r] > 0)
                s.pred_true_count[r] @= s.pred_true_count_reg[r]
                s.pred_false_count[r] @= s.pred_false_count_reg[r]
                s.pred_true_mask[r] @= s.pred_true_mask_reg[r]
                s.pred_false_mask[r] @= s.pred_false_mask_reg[r]

        # Helpful observability (optional)
        # Debug Flags TODO: @darrenl to delete
        ThreadIdType         = mk_bits( clog2( MAX_THREAD_COUNT ) )
        MaxThreadType        = mk_bits( clog2( MAX_THREAD_COUNT + 1 ) )
        ConstImmType = mk_bits(min(8, RegDataType.nbits))
        ReduceAddrType = mk_bits(clog2(NUM_REDUCE_REGISTERS))
        ReduceOpType = mk_bits(6) # matches OperationType (Bits6) in lib/opt_type.py
        s.recv_cfg_thread_mask_resolved = Wire(MaskType)
        s.recv_cfg_thread_count_resolved = Wire(MaxThreadType)
        s.recv_cfg_thread_min_resolved = Wire(MaxThreadType)
        s.recv_cfg_thread_max_resolved = Wire(MaxThreadType)

        s.wr_addr_valcfg_o   = [ _diag_signal(Bits1)       for _ in range(num_wr_ports) ]
        s.ld_addr            = [ _diag_signal(RegAddrType) for _ in range(num_ld_ports) ]

        # Ld/St Unit Configuration
        s.ld_enable_active = [ Wire(Bits1) for _ in range(num_ld_ports) ]
        s.st_enable_active = [ Wire(Bits1) for _ in range(num_st_ports) ]
        s.ld_reg_addr_active = [ Wire(RegAddrType) for _ in range(num_ld_ports) ]
        s.ld_enable_bank0 = [ Wire(Bits1) for _ in range(num_ld_ports) ]
        s.ld_enable_bank1 = [ Wire(Bits1) for _ in range(num_ld_ports) ]
        s.st_enable_bank0 = [ Wire(Bits1) for _ in range(num_st_ports) ]
        s.st_enable_bank1 = [ Wire(Bits1) for _ in range(num_st_ports) ]
        s.ld_reg_addr_bank0 = [ Wire(RegAddrType) for _ in range(num_ld_ports) ]
        s.ld_reg_addr_bank1 = [ Wire(RegAddrType) for _ in range(num_ld_ports) ]
        for i in range(num_ld_ports):
            s.ld_enable[i] //= s.ld_enable_active[i]
            s.ld_addr[i] //= s.ld_reg_addr_active[i]
        for i in range(num_st_ports):
            s.st_enable[i] //= s.st_enable_active[i]

        # -------------------------------------------------------------------------
        # FSM + config registers
        # -------------------------------------------------------------------------

        # States
        ST_IDLE = Bits1(0)
        ST_RUN  = Bits1(1)

        # State reg
        s.state    = Wire( 1 )
        s.state_n  = _diag_signal( Bits1 )

        # Latched configuration (stable during RUN)
        s.rd_addr_cfg    = [ Wire(RegAddrType) for _ in range(num_rd_ports) ]
        s.rd_addr_valcfg = [ Wire(Bits1)       for _ in range(num_rd_ports) ]
        s.tid_enabled    = [ Wire(Bits1)       for _ in range(num_rd_ports) ]
        # Read side of the fabric reduction unit: selects a rd_port to
        # source its data from the reduction unit's local register file
        # (address reduce_rd_addr) instead of the main register file.
        s.reduce_rd_en   = [ Wire(Bits1)          for _ in range(num_rd_ports) ]
        s.reduce_rd_addr = [ Wire(ReduceAddrType) for _ in range(num_rd_ports) ]
        s.wr_addr_cfg    = [ Wire(RegAddrType) for _ in range(num_wr_ports) ]
        s.wr_addr_valcfg = [ Wire(Bits1)       for _ in range(num_wr_ports) ]
        s.pred_wr_valcfg = [ Wire(Bits1)       for _ in range(num_wr_ports) ]
        # Write side of the fabric reduction unit: per-wr_port enable.
        s.reduce_en = [ Wire(Bits1) for _ in range(num_wr_ports) ]
        s.expected_count = Wire( MaxThreadType )
        s.active_thread_min = Wire(MaxThreadType)
        s.active_thread_max = Wire(MaxThreadType)
        s.rd_addr_cfg_bank0    = [ Wire(RegAddrType) for _ in range(num_rd_ports) ]
        s.rd_addr_cfg_bank1    = [ Wire(RegAddrType) for _ in range(num_rd_ports) ]
        s.rd_addr_valcfg_bank0 = [ Wire(Bits1)       for _ in range(num_rd_ports) ]
        s.rd_addr_valcfg_bank1 = [ Wire(Bits1)       for _ in range(num_rd_ports) ]
        s.reduce_rd_en_bank0   = [ Wire(Bits1)          for _ in range(num_rd_ports) ]
        s.reduce_rd_en_bank1   = [ Wire(Bits1)          for _ in range(num_rd_ports) ]
        s.reduce_rd_addr_bank0 = [ Wire(ReduceAddrType) for _ in range(num_rd_ports) ]
        s.reduce_rd_addr_bank1 = [ Wire(ReduceAddrType) for _ in range(num_rd_ports) ]
        s.tid_enabled_bank0    = [ Wire(Bits1)       for _ in range(num_rd_ports) ]
        s.tid_enabled_bank1    = [ Wire(Bits1)       for _ in range(num_rd_ports) ]
        s.rd_pred_addr_cfg_bank0 = [ Wire(PredAddrType) for _ in range(num_rd_ports) ]
        s.rd_pred_addr_cfg_bank1 = [ Wire(PredAddrType) for _ in range(num_rd_ports) ]
        s.rd_pred_en_bank0 = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.rd_pred_en_bank1 = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.rd_pred_inv_bank0 = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.rd_pred_inv_bank1 = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.rd_const_val_bank0 = [ Wire(ConstImmType) for _ in range(num_rd_ports) ]
        s.rd_const_val_bank1 = [ Wire(ConstImmType) for _ in range(num_rd_ports) ]
        s.rd_pred_reset_const_en_bank0 = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.rd_pred_reset_const_en_bank1 = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.pred_reg_bank0       = Wire(PredAddrType)
        s.pred_reg_bank1       = Wire(PredAddrType)
        s.reduce_op_bank0 = Wire(ReduceOpType) # reduce opcode, bank-latched like pred_reg_bank0/1
        s.reduce_op_bank1 = Wire(ReduceOpType)
        s.reduce_op       = Wire(ReduceOpType)
        s.pred_reset_mask_bank0 = Wire(PredResetMaskType)
        s.pred_reset_mask_bank1 = Wire(PredResetMaskType)
        s.branch_en_bank0      = Wire(Bits1)
        s.branch_en_bank1      = Wire(Bits1)
        s.const_store_bank0    = Wire(Bits1)
        s.const_store_bank1    = Wire(Bits1)
        s.wr_addr_cfg_bank0    = [ Wire(RegAddrType) for _ in range(num_wr_ports) ]
        s.wr_addr_cfg_bank1    = [ Wire(RegAddrType) for _ in range(num_wr_ports) ]
        s.wr_addr_valcfg_bank0 = [ Wire(Bits1)       for _ in range(num_wr_ports) ]
        s.wr_addr_valcfg_bank1 = [ Wire(Bits1)       for _ in range(num_wr_ports) ]
        s.pred_wr_valcfg_bank0 = [ Wire(Bits1)       for _ in range(num_wr_ports) ]
        s.pred_wr_valcfg_bank1 = [ Wire(Bits1)       for _ in range(num_wr_ports) ]
        s.reduce_en_bank0 = [ Wire(Bits1) for _ in range(num_wr_ports) ] # bank-latched copies of reduce_en
        s.reduce_en_bank1 = [ Wire(Bits1) for _ in range(num_wr_ports) ]
        s.expected_count_bank0 = Wire( MaxThreadType )
        s.expected_count_bank1 = Wire( MaxThreadType )
        s.active_thread_min_bank0 = Wire(MaxThreadType)
        s.active_thread_max_bank0 = Wire(MaxThreadType)
        s.active_thread_min_bank1 = Wire(MaxThreadType)
        s.active_thread_max_bank1 = Wire(MaxThreadType)
        s.active_thread_mask = Wire(MaskType)
        s.active_thread_mask_bank0 = Wire(MaskType)
        s.active_thread_mask_bank1 = Wire(MaskType)
        s.dep_thread_mask = Wire(MaskType)
        s.dep_complete_mask = Wire(MaskType)
        s.nonmem_ready_mask = Wire(MaskType)
        s.active_target_mask = Wire(MaskType)
        s.active_mem_ready = Wire(MaskType)
        s.active_mem_complete = Wire(MaskType)
        s.thread_ready_mask = Wire(MaskType)
        s.thread_complete_mask = Wire(MaskType)
        s.mem_issue_complete = Wire(Bits1)
        s.pred_issue_complete = Wire(Bits1)
        s.fabric_ready = Wire(Bits1)
        s.dep_release_pending = Wire(Bits1)
        s.issue_count = Wire(MaxThreadType)
        s.issue_count_n = Wire(MaxThreadType)
        s.dep_mode = Wire(Bits1)
        s.dep_mode_n = Wire(Bits1)
        s.run_primed = Wire(Bits1)
        s.run_primed_n = Wire(Bits1)
        s.current_issue_tid = Wire(ThreadIdType)
        s.current_issue_tid_mask = Wire(MaskType)
        s.current_issue_tid_data = Wire(RegDataType)
        s.issued_mask = Wire(MaskType)
        s.issued_mask_n = Wire(MaskType)
        s.nondep_eligible_mask = Wire(MaskType)
        s.dep_eligible_mask = Wire(MaskType)
        s.eligible_mask = Wire(MaskType)
        s.issue_fire = Wire(Bits1)
        s.launch_fire = Wire(Bits1)
        s.launch_fire_n = Wire(Bits1)
        s.launch_issue_tid = Wire(ThreadIdType)
        s.launch_issue_tid_n = Wire(ThreadIdType)
        s.launch_rd_port_active = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.launch_rd_port_active_n = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.rd_data_next = [ Wire(RegDataType) for _ in range(num_rd_ports) ]
        s.rd_data_reg = [ Wire(RegDataType) for _ in range(num_rd_ports) ]
        s.any_wr_enabled = Wire(Bits1)
        s.ld_seq_count = [Wire(MaxThreadType) for _ in range(num_ld_ports)]
        s.st_seq_count = [Wire(MaxThreadType) for _ in range(num_st_ports)]
        s.ld_seq_count_n = [Wire(MaxThreadType) for _ in range(num_ld_ports)]
        s.st_seq_count_n = [Wire(MaxThreadType) for _ in range(num_st_ports)]
        s.ld_issued_mask = [Wire(MaskType) for _ in range(num_ld_ports)]
        s.st_issued_mask = [Wire(MaskType) for _ in range(num_st_ports)]
        s.ld_issued_mask_n = [Wire(MaskType) for _ in range(num_ld_ports)]
        s.st_issued_mask_n = [Wire(MaskType) for _ in range(num_st_ports)]
        s.ld_issue_tid_mask = [Wire(MaskType) for _ in range(num_ld_ports)]
        s.st_issue_tid_mask = [Wire(MaskType) for _ in range(num_st_ports)]
        s.wr_thread_tid = [Wire(ThreadIdType) for _ in range(num_wr_ports)]
        s.wr_track_en = [Wire(Bits1) for _ in range(num_wr_ports)]
        s.wr_token_fire = [Wire(Bits1) for _ in range(num_wr_ports)]
        s.wr_commit_valid = [Wire(Bits1) for _ in range(num_wr_ports)]
        s.wr_commit_tid = [Wire(ThreadIdType) for _ in range(num_wr_ports)]
        TidQueuePtrType = mk_bits(max(1, clog2(MAX_THREAD_COUNT)))
        TidQueueCountType = mk_bits(clog2(MAX_THREAD_COUNT + 1))
        s.wr_tid_fifo_head = [Wire(TidQueuePtrType) for _ in range(num_wr_ports)]
        s.wr_tid_fifo_tail = [Wire(TidQueuePtrType) for _ in range(num_wr_ports)]
        s.wr_tid_fifo_count = [Wire(TidQueueCountType) for _ in range(num_wr_ports)]
        s.wr_tid_fifo_data = [
            [Wire(ThreadIdType) for _ in range(MAX_THREAD_COUNT)]
            for _ in range(num_wr_ports)
        ]
        s.wr_seen_mask = [Wire(MaskType) for _ in range(num_wr_ports)]
        s.pred_wr_addr_cfg = [ Wire(PredAddrType) for _ in range(num_wr_ports) ]
        s.pred_wr_addr_cfg_bank0 = [ Wire(PredAddrType) for _ in range(num_wr_ports) ]
        s.pred_wr_addr_cfg_bank1 = [ Wire(PredAddrType) for _ in range(num_wr_ports) ]
        s.reduce_addr = [ Wire(ReduceAddrType) for _ in range(num_wr_ports) ] # dest. addr into reduce regfile
        s.reduce_addr_bank0 = [ Wire(ReduceAddrType) for _ in range(num_wr_ports) ]
        s.reduce_addr_bank1 = [ Wire(ReduceAddrType) for _ in range(num_wr_ports) ]

        s.send_thread_min //= s.active_thread_min
        s.send_thread_max //= s.active_thread_max

        if RegDataType.nbits >= ThreadIdType.nbits:
            @update
            def comb_current_issue_tid_data():
                s.current_issue_tid_data @= zext(s.current_issue_tid, RegDataType.nbits)
        else:
            @update
            def comb_current_issue_tid_data():
                s.current_issue_tid_data @= trunc(s.current_issue_tid, RegDataType.nbits)

        # Counters (increment on handshakes)
        s.rd_count = [ Wire(MaxThreadType) for _ in range(num_rd_ports) ]
        s.wr_count = [ Wire(MaxThreadType) for _ in range(num_wr_ports) ]

        # Next values
        s.rd_count_n = [ _diag_signal(MaxThreadType) for _ in range(num_rd_ports) ]
        s.wr_count_n = [ _diag_signal(MaxThreadType) for _ in range(num_wr_ports) ]
        s.rd_addr_valcfg_n = [ _diag_signal(Bits1) for _ in range(num_rd_ports) ]
        s.wr_addr_valcfg_n = [ _diag_signal(Bits1) for _ in range(num_wr_ports) ]
        s.rd_addr_cfg_n    = [ _diag_signal(RegAddrType) for _ in range(num_rd_ports) ]
        s.wr_addr_cfg_n    = [ _diag_signal(RegAddrType) for _ in range(num_wr_ports) ]
        # Next-value pipeline for the reduction unit's config, mirroring
        # wr_addr_valcfg_n/rd_addr_valcfg_n exactly (same direct-IDLE-path
        # commit mechanism).
        s.reduce_en_n      = [ _diag_signal(Bits1)          for _ in range(num_wr_ports) ]
        s.reduce_addr_n    = [ _diag_signal(ReduceAddrType) for _ in range(num_wr_ports) ]
        s.reduce_rd_en_n   = [ _diag_signal(Bits1)          for _ in range(num_rd_ports) ]
        s.reduce_rd_addr_n = [ _diag_signal(ReduceAddrType) for _ in range(num_rd_ports) ]
        s.tid_enabled_n    = [ Wire(Bits1)       for _ in range(num_rd_ports) ]
        s.rd_pred_addr_cfg = [ Wire(PredAddrType) for _ in range(num_rd_ports) ]
        s.rd_pred_en = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.rd_pred_inv = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.rd_const_val = [ Wire(ConstImmType) for _ in range(num_rd_ports) ]
        s.rd_pred_reset_const_en = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.rd_pred_addr_cfg_n = [ Wire(PredAddrType) for _ in range(num_rd_ports) ]
        s.rd_pred_en_n = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.rd_pred_inv_n = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.rd_const_val_n = [ Wire(ConstImmType) for _ in range(num_rd_ports) ]
        s.rd_pred_reset_const_en_n = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.rd_port_active = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.rd_predicate_true = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.rd_predicate_use_reg = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.rd_reg_read_en = [ Wire(Bits1) for _ in range(num_rd_ports) ]
        s.expected_count_n = Wire( MaxThreadType )

        #TODO: @darrenl delete me debug statements
        if debug:
            for i in range(num_wr_ports):
                s.wr_addr_valcfg_o[i] //= s.wr_addr_valcfg_n[i]
            
            s.rf_ld_wr_reg_addr = [OutPort(RegAddrType)   for _ in range(num_ld_ports)]
            s.rf_ld_wr_tid_addr = [OutPort(ThreadIdType) for _ in range(num_ld_ports)]
            s.rf_ld_wr_data     = [OutPort(RegDataType)   for _ in range(num_ld_ports)]
            s.rf_ld_wr_enable   = [OutPort(Bits1)         for _ in range(num_ld_ports)]
            s.rf_rd_tid_addr = [OutPort(ThreadIdType) for _ in range(num_rd_ports)]
            s.rf_rd_data = [OutPort(RegDataType) for _ in range(num_rd_ports)]
            s.rf_rd_addr = [OutPort(RegAddrType) for _ in range(num_rd_ports)]
            s.rf_issue_fire = OutPort(Bits1)
            s.rf_issue_tid = OutPort(ThreadIdType)
            s.rf_expected_count = OutPort(MaxThreadType)
            s.rf_wr_track_en = [OutPort(Bits1) for _ in range(num_wr_ports)]
            s.rf_wr_commit_valid = [OutPort(Bits1) for _ in range(num_wr_ports)]
            s.rf_wr_commit_tid = [OutPort(ThreadIdType) for _ in range(num_wr_ports)]
            s.rf_wr_seen_mask = [OutPort(MaskType) for _ in range(num_wr_ports)]
            for i in range(num_ld_ports):
                s.rf_ld_wr_reg_addr[i] //= s.ld_reg_addr_active[i]
                s.rf_ld_wr_tid_addr[i] //= s.ld_data_id[i]
                s.rf_ld_wr_data[i] //= s.ld_data[i]
                s.rf_ld_wr_enable[i] //= s.ld_data_valid[i]
            s.rf_issue_fire //= s.launch_fire
            s.rf_issue_tid //= s.launch_issue_tid
            s.rf_expected_count //= s.expected_count
            for i in range(num_wr_ports):
                s.rf_wr_track_en[i] //= s.wr_track_en[i]
                s.rf_wr_commit_valid[i] //= s.wr_commit_valid[i]
                s.rf_wr_commit_tid[i] //= s.wr_commit_tid[i]
                s.rf_wr_seen_mask[i] //= s.wr_seen_mask[i]
            @update
            def update_some_ports():
                for i in range(num_rd_ports):
                    s.rf_rd_tid_addr[i] @= s.current_issue_tid
                    s.rf_rd_data[i] @= s.register_file.rd_data[i]
                    s.rf_rd_addr[i] @= s.rd_addr_cfg[i]
             

        # -------------------------------------------------------------------------
        # Static connections to regfile data channels
        # (addresses/val asserted only when in RUN)
        # -------------------------------------------------------------------------

        # Thread Idx wires for r/w
        @update
        def update_thread_idx():
            nondep_mem_mask = s.active_thread_mask & ~s.dep_thread_mask
            dep_mem_mask = s.active_thread_mask & s.dep_thread_mask
            for i in range(num_rd_ports):
                s.register_file.rd_thread_idx[i] @= s.current_issue_tid
            for i in range(num_wr_ports):
                head_tid = ThreadIdType(0)
                for q in range(MAX_THREAD_COUNT):
                    if s.wr_tid_fifo_head[i] == TidQueuePtrType(q):
                        head_tid = s.wr_tid_fifo_data[i][q]
                s.wr_thread_tid[i] @= head_tid
                s.register_file.wr_thread_idx[i] @= s.wr_thread_tid[i]
            for i in range(num_ld_ports):
                s.register_file.wr_thread_idx[i + num_wr_ports] @= s.ld_data_id[i]

            for i in range(num_ld_ports):
                ld_tid = ThreadIdType(0)
                issue_mask = MaskType(0)
                nondep_sel = nondep_mem_mask & ~s.ld_issued_mask[i]
                dep_sel = dep_mem_mask & ~s.ld_issued_mask[i]
                if nondep_sel != MaskType(0):
                    issue_mask = nondep_sel & MaskType(~nondep_sel + MaskType(1))
                elif dep_sel != MaskType(0):
                    issue_mask = dep_sel & MaskType(~dep_sel + MaskType(1))
                s.ld_issue_tid_mask[i] @= issue_mask
                for tid in range(MAX_THREAD_COUNT):
                    if issue_mask[tid]:
                        ld_tid = ThreadIdType(tid)
                s.ld_issue_tid[i] @= ld_tid
            for i in range(num_st_ports):
                st_tid = ThreadIdType(0)
                issue_mask = MaskType(0)
                nondep_sel = nondep_mem_mask & ~s.st_issued_mask[i]
                dep_sel = dep_mem_mask & ~s.st_issued_mask[i]
                if nondep_sel != MaskType(0):
                    issue_mask = nondep_sel & MaskType(~nondep_sel + MaskType(1))
                elif dep_sel != MaskType(0):
                    issue_mask = dep_sel & MaskType(~dep_sel + MaskType(1))
                s.st_issue_tid_mask[i] @= issue_mask
                for tid in range(MAX_THREAD_COUNT):
                    if issue_mask[tid]:
                        st_tid = ThreadIdType(tid)
                s.st_issue_tid[i] @= st_tid

        @update
        def comb_issue_tid():
            issue_tid = ThreadIdType(0)
            issue_tid_mask = MaskType(0)
            s.nondep_eligible_mask @= s.active_thread_mask & ~s.dep_thread_mask & ~s.issued_mask
            s.dep_eligible_mask @= s.active_thread_mask & s.dep_thread_mask & s.dep_complete_mask & ~s.issued_mask
            s.eligible_mask @= s.nondep_eligible_mask | s.dep_eligible_mask

            if s.nondep_eligible_mask != MaskType(0):
                issue_tid_mask = s.nondep_eligible_mask & MaskType(~s.nondep_eligible_mask + MaskType(1))
            elif s.dep_eligible_mask != MaskType(0):
                issue_tid_mask = s.dep_eligible_mask & MaskType(~s.dep_eligible_mask + MaskType(1))

            for tid in range(MAX_THREAD_COUNT):
                if issue_tid_mask[tid]:
                    issue_tid = ThreadIdType(tid)
            s.current_issue_tid @= issue_tid
            s.current_issue_tid_mask @= issue_tid_mask

        @update
        def comb_predicated_read_select():
            for i in range(num_rd_ports):
                pred_true = Bits1(0)
                pred_mask = MaskType(0)
                force_const_mask = MaskType(0)
                force_const = Bits1(0)
                reset_const_en = Bits1(0)
                for r in range(num_pred_registers):
                    if s.rd_pred_addr_cfg[i] == PredAddrType(r):
                        pred_mask = s.pred_true_mask_reg[r]
                        force_const_mask = s.pred_force_const_mask_reg[r]
                pred_true = Bits1((pred_mask & s.current_issue_tid_mask) != MaskType(0))
                force_const = Bits1((force_const_mask & s.current_issue_tid_mask) != MaskType(0))
                reset_const_en = s.rd_pred_reset_const_en[i]
                if s.rd_pred_inv[i]:
                    pred_true = ~pred_true
                s.rd_predicate_true[i] @= pred_true
                s.rd_predicate_use_reg[i] @= s.rd_pred_en[i] & pred_true & ~(force_const & reset_const_en)
                s.rd_port_active[i] @= s.rd_addr_valcfg[i] | s.rd_pred_en[i] | s.reduce_rd_en[i]


        # Enable wires for read and write ports
        s.rd_enable = [ OutPort(Bits1) for _ in range(num_rd_ports) ]
        s.wr_enable = [ OutPort(Bits1) for _ in range(num_wr_ports) ]

        @update
        def comb_port_enables():
            rd_issue_ok = Bits1(1)
            for i in range(num_rd_ports):
                if s.rd_port_active[i]:
                    pair_avail = Bits1(1)
                    if s.tile_token_pair_required[i]:
                        pair_avail = s.tile_token_avail_pair[i]
                    rd_issue_ok = rd_issue_ok & s.tile_token_avail[i] & pair_avail
            s.issue_fire @= Bits1(0)
            if (s.state == ST_RUN) & s.run_primed & (s.issue_count < s.expected_count):
                if s.current_issue_tid_mask != MaskType(0):
                    if rd_issue_ok:
                        s.issue_fire @= Bits1(1)

            for i in range(num_rd_ports):
                if (s.state == ST_RUN) & ~s.run_primed:
                    s.rd_reg_read_en[i] @= s.rd_addr_valcfg[i] | s.rd_predicate_use_reg[i]
                else:
                    s.rd_reg_read_en[i] @= (s.rd_addr_valcfg[i] | s.rd_predicate_use_reg[i]) & s.issue_fire
                s.rd_enable[i] @= s.rd_reg_read_en[i]
            for i in range(num_wr_ports):
                mapped_idx = i
                if i < 4:
                    mapped_idx = ((i & 0x1) << 1) + ((i & 0x2) >> 1)
                s.wr_enable[i] @= s.tile_token_shifter_out[mapped_idx] & s.wr_addr_valcfg[i] & (s.state == ST_RUN) & s.run_primed & (s.wr_count[i] <= s.expected_count_n - 1)

        @update
        def comb_token_takes():
            for i in range(num_rd_ports):
                s.tile_token_take[i] @= s.tile_token_take_req[i] | s.tile_token_take_pair_mirror[i]

        @update
        def comb_wr_tracking():
            for i in range(num_wr_ports):
                mapped_idx = i
                if i < 4:
                    mapped_idx = ((i & 0x1) << 1) + ((i & 0x2) >> 1)
                # reduce_en[i] is tracked like wr_addr_valcfg[i], so its
                # commits go through the same token/tid-fifo machinery and
                # s.wr_count[i] (used below to feed the reduce unit and to
                # compute reduce_complete) advances/resets exactly like it
                # already does for a normal write port.
                wr_track = s.wr_addr_valcfg[i] | s.pred_wr_valcfg[i] | s.reduce_en[i]
                wr_token = Bits1(0)
                if s.wr_addr_valcfg[i]:
                    wr_token = s.tile_token_shifter_out[mapped_idx] & (s.wr_count[i] < s.expected_count)
                elif s.pred_wr_valcfg[i]:
                    wr_token = (
                        s.tile_token_shifter_out[mapped_idx]
                        & (s.pred_count[s.active_pred_reg] < s.pred_expected[s.active_pred_reg])
                    )
                elif s.reduce_en[i]:
                    wr_token = s.tile_token_shifter_out[mapped_idx] & (s.wr_count[i] < s.expected_count)
                s.wr_track_en[i] @= wr_track
                s.wr_token_fire[i] @= wr_token
                s.wr_commit_valid[i] @= wr_token & (s.wr_tid_fifo_count[i] > TidQueueCountType(0))
                s.wr_commit_tid[i] @= s.wr_thread_tid[i]

        for i in range(num_rd_ports):
            s.register_file.rd_addr[i].msg //= s.rd_addr_cfg[i]
            s.register_file.rd_addr[i].val //= s.rd_enable[i]

        for i in range(num_wr_ports):
            s.register_file.wr_addr[i].msg //= s.wr_addr_cfg[i]
            s.register_file.wr_addr[i].val //= s.wr_enable[i]
            s.register_file.wr_data[i].msg //= s.wr_data[i]
            s.register_file.wr_data[i].val //= s.wr_enable[i]
        
        # Configure ld writing into RF
        for i in range(num_ld_ports):
            s.register_file.wr_addr[i + num_wr_ports].msg //= s.ld_reg_addr_active[i]
            s.register_file.wr_addr[i + num_wr_ports].val //= s.ld_data_valid[i]
            s.register_file.wr_data[i + num_wr_ports].msg //= s.ld_data[i]
            s.register_file.wr_data[i + num_wr_ports].val //= s.ld_data_valid[i]

        # -------------------------------------------------------------------------
        # Assign output data as register or tid for counts
        # -------------------------------------------------------------------------
        @update
        def comb_output_data():
            for i in range(num_rd_ports):
                if ~s.rd_port_active[i]:
                    s.rd_data_next[i] @= RegDataType(0)
                elif s.active_const_store:
                    s.rd_data_next[i] @= RegDataType(0)
                elif s.rd_pred_en[i] & ~s.rd_predicate_use_reg[i]:
                    s.rd_data_next[i] @= zext(s.rd_const_val[i], RegDataType.nbits)
                elif s.tid_enabled[i]:
                    s.rd_data_next[i] @= s.current_issue_tid_data
                    if i % 4 == 0:
                        if i + 2 < num_rd_ports:
                            if s.rd_addr_valcfg[i + 2] & ~s.tid_enabled[i + 2]:
                                # Loop bodies use the west/east pair together:
                                # the west compare tile should see the
                                # incremented loop-carried value from the
                                # paired east read, while pure tid-only configs
                                # still get the synthetic thread id path.
                                s.rd_data_next[i] @= s.register_file.rd_data[i + 2] + RegDataType(1)
                elif s.reduce_rd_en[i]:
                    # Source this rd_port's data from the fabric
                    # reduction unit's local register file instead of the
                    # main register file.
                    for r in range(NUM_REDUCE_REGISTERS):
                        if s.reduce_rd_addr[i] == ReduceAddrType(r):
                            s.rd_data_next[i] @= s.fabric_reduce_unit.rd_data[r]
                else:
                    s.rd_data_next[i] @= s.register_file.rd_data[i]

        @update
        def comb_registered_output_data():
            for i in range(num_rd_ports):
                s.rd_data[i] @= s.rd_data_reg[i]

        # -------------------------------------------------------------------------
        # Ready/valid for external ifcs (single-writer comb)
        # -------------------------------------------------------------------------

        @update
        def comb_ready_valid():
            s.recv_cfg_from_ctrl.rdy @= Bits1(1)

        @update
        def comb_recv_cfg_thread_mask():
            resolved_mask = s.recv_cfg_thread_mask
            resolved_count = MaxThreadType(0)
            resolved_min = MaxThreadType(0)
            resolved_max = MaxThreadType(0)
            if s.recv_cfg_thread_mask == MaskType(0):
                resolved_mask = MaskType(0)
                resolved_min = s.recv_cfg_from_ctrl.msg.thread_count_min
                resolved_max = s.recv_cfg_from_ctrl.msg.thread_count_max
                for tid in range(MAX_THREAD_COUNT):
                    tid_bits = MaxThreadType(tid)
                    if (tid_bits >= resolved_min) & (tid_bits < resolved_max):
                        resolved_mask = resolved_mask | MaskType(1 << tid)
                        resolved_count = resolved_count + MaxThreadType(1)
            else:
                found_tid = Bits1(0)
                for tid in range(MAX_THREAD_COUNT):
                    if s.recv_cfg_thread_mask[tid]:
                        resolved_count = resolved_count + MaxThreadType(1)
                        if ~found_tid:
                            resolved_min = MaxThreadType(tid)
                            found_tid = Bits1(1)
                        resolved_max = MaxThreadType(tid + 1)
            s.recv_cfg_thread_count_resolved @= resolved_count
            s.recv_cfg_thread_min_resolved @= resolved_min
            s.recv_cfg_thread_max_resolved @= resolved_max
            s.recv_cfg_thread_mask_resolved @= resolved_mask

        @update
        def comb_dep_complete_mask():
            if s.cfg_active_sel_w == Bits1(0):
                s.dep_complete_mask @= s.mem_complete_mask_bank1
            else:
                s.dep_complete_mask @= s.mem_complete_mask_bank0

        @update_ff
        def cfg_bank_ff():
            if s.reset:
                s.expected_count_bank0 <<= MaxThreadType(0)
                s.expected_count_bank1 <<= MaxThreadType(0)
                s.active_thread_min_bank0 <<= MaxThreadType(0)
                s.active_thread_max_bank0 <<= MaxThreadType(0)
                s.active_thread_min_bank1 <<= MaxThreadType(0)
                s.active_thread_max_bank1 <<= MaxThreadType(0)
                s.active_thread_mask_bank0 <<= MaskType(0)
                s.active_thread_mask_bank1 <<= MaskType(0)
                s.pred_reg_bank0 <<= PredAddrType(0)
                s.pred_reg_bank1 <<= PredAddrType(0)
                s.reduce_op_bank0 <<= ReduceOpType(0)
                s.reduce_op_bank1 <<= ReduceOpType(0)
                s.pred_reset_mask_bank0 <<= PredResetMaskType(0)
                s.pred_reset_mask_bank1 <<= PredResetMaskType(0)
                s.branch_en_bank0 <<= Bits1(0)
                s.branch_en_bank1 <<= Bits1(0)
                s.const_store_bank0 <<= Bits1(0)
                s.const_store_bank1 <<= Bits1(0)
                for i in range(num_rd_ports):
                    s.rd_addr_cfg_bank0[i] <<= RegAddrType(0)
                    s.rd_addr_cfg_bank1[i] <<= RegAddrType(0)
                    s.rd_addr_valcfg_bank0[i] <<= Bits1(0)
                    s.rd_addr_valcfg_bank1[i] <<= Bits1(0)
                    s.reduce_rd_en_bank0[i] <<= Bits1(0)
                    s.reduce_rd_en_bank1[i] <<= Bits1(0)
                    s.reduce_rd_addr_bank0[i] <<= ReduceAddrType(0)
                    s.reduce_rd_addr_bank1[i] <<= ReduceAddrType(0)
                    s.tid_enabled_bank0[i] <<= Bits1(0)
                    s.tid_enabled_bank1[i] <<= Bits1(0)
                    s.rd_pred_addr_cfg_bank0[i] <<= PredAddrType(0)
                    s.rd_pred_addr_cfg_bank1[i] <<= PredAddrType(0)
                    s.rd_pred_en_bank0[i] <<= Bits1(0)
                    s.rd_pred_en_bank1[i] <<= Bits1(0)
                    s.rd_pred_inv_bank0[i] <<= Bits1(0)
                    s.rd_pred_inv_bank1[i] <<= Bits1(0)
                    s.rd_const_val_bank0[i] <<= ConstImmType(0)
                    s.rd_const_val_bank1[i] <<= ConstImmType(0)
                    s.rd_pred_reset_const_en_bank0[i] <<= Bits1(0)
                    s.rd_pred_reset_const_en_bank1[i] <<= Bits1(0)
                for i in range(num_wr_ports):
                    s.wr_addr_cfg_bank0[i] <<= RegAddrType(0)
                    s.wr_addr_cfg_bank1[i] <<= RegAddrType(0)
                    s.wr_addr_valcfg_bank0[i] <<= Bits1(0)
                    s.wr_addr_valcfg_bank1[i] <<= Bits1(0)
                    s.pred_wr_valcfg_bank0[i] <<= Bits1(0)
                    s.pred_wr_valcfg_bank1[i] <<= Bits1(0)
                    s.pred_wr_addr_cfg_bank0[i] <<= PredAddrType(0)
                    s.pred_wr_addr_cfg_bank1[i] <<= PredAddrType(0)
                    s.reduce_en_bank0[i] <<= Bits1(0)
                    s.reduce_en_bank1[i] <<= Bits1(0)
                    s.reduce_addr_bank0[i] <<= ReduceAddrType(0)
                    s.reduce_addr_bank1[i] <<= ReduceAddrType(0)
                for i in range(num_tiles):
                    s.pred_tile_valid_bank0[i] <<= Bits1(0)
                    s.pred_tile_valid_bank1[i] <<= Bits1(0)
                for i in range(num_ld_ports):
                    s.ld_enable_bank0[i] <<= Bits1(0)
                    s.ld_enable_bank1[i] <<= Bits1(0)
                    s.ld_reg_addr_bank0[i] <<= RegAddrType(0)
                    s.ld_reg_addr_bank1[i] <<= RegAddrType(0)
                for i in range(num_st_ports):
                    s.st_enable_bank0[i] <<= Bits1(0)
                    s.st_enable_bank1[i] <<= Bits1(0)
            else:
                if s.recv_cfg_from_ctrl.val & s.recv_cfg_from_ctrl.rdy:
                    cfg_is_const_store = Bits1(s.recv_cfg_from_ctrl.msg.end_cfg)
                    any_store = Bits1(0)
                    any_load = Bits1(0)
                    any_data_write = Bits1(0)
                    any_pred_write = Bits1(0)
                    any_input_read = Bits1(0)
                    for i in range(num_st_ports):
                        any_store = any_store | s.recv_cfg_from_ctrl.msg.st_enable[i]
                    for i in range(num_ld_ports):
                        any_load = any_load | s.recv_cfg_from_ctrl.msg.ld_enable[i]
                    for i in range(num_wr_ports):
                        any_data_write = any_data_write | s.recv_cfg_from_ctrl.msg.out_regs_val[i]
                        any_pred_write = any_pred_write | s.recv_cfg_from_ctrl.msg.out_pred_regs_val[i]
                    for i in range(num_rd_ports):
                        any_input_read = any_input_read | s.recv_cfg_from_ctrl.msg.in_regs_val[i] | s.recv_cfg_from_ctrl.msg.in_pred_en[i] | s.recv_cfg_from_ctrl.msg.reduce_rd_en[i]
                    cfg_is_const_store = cfg_is_const_store & any_store & ~any_load & ~any_data_write & ~any_pred_write & ~any_input_read
                    if s.cfg_load_sel_w == Bits1(0):
                        s.expected_count_bank0 <<= s.recv_cfg_thread_count_resolved
                        s.active_thread_min_bank0 <<= s.recv_cfg_thread_min_resolved
                        s.active_thread_max_bank0 <<= s.recv_cfg_thread_max_resolved
                        s.active_thread_mask_bank0 <<= s.recv_cfg_thread_mask_resolved
                        s.pred_reg_bank0 <<= s.recv_cfg_from_ctrl.msg.pred_reg_id
                        s.reduce_op_bank0 <<= s.recv_cfg_from_ctrl.msg.reduce_op
                        s.pred_reset_mask_bank0 <<= s.recv_cfg_pred_reset_mask
                        s.branch_en_bank0 <<= s.recv_cfg_from_ctrl.msg.branch_en
                        s.const_store_bank0 <<= cfg_is_const_store
                        for i in range(num_rd_ports):
                            s.rd_addr_cfg_bank0[i] <<= s.recv_cfg_from_ctrl.msg.in_regs[i]
                            s.rd_addr_valcfg_bank0[i] <<= s.recv_cfg_from_ctrl.msg.in_regs_val[i]
                            s.reduce_rd_en_bank0[i] <<= s.recv_cfg_from_ctrl.msg.reduce_rd_en[i]
                            s.reduce_rd_addr_bank0[i] <<= s.recv_cfg_from_ctrl.msg.reduce_rd_addr[i]
                            s.tid_enabled_bank0[i] <<= s.recv_cfg_from_ctrl.msg.in_tid_enable[i]
                            s.rd_pred_addr_cfg_bank0[i] <<= s.recv_cfg_from_ctrl.msg.in_pred_regs[i]
                            s.rd_pred_en_bank0[i] <<= s.recv_cfg_from_ctrl.msg.in_pred_en[i]
                            s.rd_pred_inv_bank0[i] <<= s.recv_cfg_from_ctrl.msg.in_pred_inv[i]
                            s.rd_const_val_bank0[i] <<= s.recv_cfg_from_ctrl.msg.in_const_vals[i]
                            s.rd_pred_reset_const_en_bank0[i] <<= s.recv_cfg_from_ctrl.msg.in_pred_reset_const_en[i]
                        for i in range(num_wr_ports):
                            mapped_idx = i
                            if i < 4:
                                mapped_idx = ((i & 0x1) << 1) + ((i & 0x2) >> 1)
                            has_wr_route = Bits1(0)
                            has_pred_route = Bits1(0)
                            route_bit_idx = Bits4(num_returner_ports - mapped_idx - 1)
                            for r in range(num_rd_ports):
                                has_wr_route = has_wr_route | s.recv_cfg_from_ctrl.msg.tokenizer_cfg.token_route_sink_enable[r][route_bit_idx]
                                has_pred_route = has_pred_route | s.recv_cfg_from_ctrl.msg.tokenizer_cfg.token_route_sink_enable[r][route_bit_idx]
                            s.wr_addr_cfg_bank0[i] <<= s.recv_cfg_from_ctrl.msg.out_regs[i]
                            s.wr_addr_valcfg_bank0[i] <<= s.recv_cfg_from_ctrl.msg.out_regs_val[i] & has_wr_route
                            s.pred_wr_valcfg_bank0[i] <<= s.recv_cfg_from_ctrl.msg.out_pred_regs_val[i] & has_pred_route
                            s.pred_wr_addr_cfg_bank0[i] <<= s.recv_cfg_from_ctrl.msg.out_pred_regs[i]
                            s.reduce_en_bank0[i] <<= s.recv_cfg_from_ctrl.msg.reduce_en[i]
                            s.reduce_addr_bank0[i] <<= s.recv_cfg_from_ctrl.msg.reduce_addr[i]
                        for i in range(num_tiles):
                            s.pred_tile_valid_bank0[i] <<= s.recv_cfg_from_ctrl.msg.pred_tile_valid[i]
                        for i in range(num_ld_ports):
                            s.ld_enable_bank0[i] <<= s.recv_cfg_from_ctrl.msg.ld_enable[i]
                            s.ld_reg_addr_bank0[i] <<= s.recv_cfg_from_ctrl.msg.ld_reg_addr[i]
                        for i in range(num_st_ports):
                            s.st_enable_bank0[i] <<= s.recv_cfg_from_ctrl.msg.st_enable[i]
                    else:
                        s.expected_count_bank1 <<= s.recv_cfg_thread_count_resolved
                        s.active_thread_min_bank1 <<= s.recv_cfg_thread_min_resolved
                        s.active_thread_max_bank1 <<= s.recv_cfg_thread_max_resolved
                        s.active_thread_mask_bank1 <<= s.recv_cfg_thread_mask_resolved
                        s.pred_reg_bank1 <<= s.recv_cfg_from_ctrl.msg.pred_reg_id
                        s.reduce_op_bank1 <<= s.recv_cfg_from_ctrl.msg.reduce_op
                        s.pred_reset_mask_bank1 <<= s.recv_cfg_pred_reset_mask
                        s.branch_en_bank1 <<= s.recv_cfg_from_ctrl.msg.branch_en
                        s.const_store_bank1 <<= cfg_is_const_store
                        for i in range(num_rd_ports):
                            s.rd_addr_cfg_bank1[i] <<= s.recv_cfg_from_ctrl.msg.in_regs[i]
                            s.rd_addr_valcfg_bank1[i] <<= s.recv_cfg_from_ctrl.msg.in_regs_val[i]
                            s.reduce_rd_en_bank1[i] <<= s.recv_cfg_from_ctrl.msg.reduce_rd_en[i]
                            s.reduce_rd_addr_bank1[i] <<= s.recv_cfg_from_ctrl.msg.reduce_rd_addr[i]
                            s.tid_enabled_bank1[i] <<= s.recv_cfg_from_ctrl.msg.in_tid_enable[i]
                            s.rd_pred_addr_cfg_bank1[i] <<= s.recv_cfg_from_ctrl.msg.in_pred_regs[i]
                            s.rd_pred_en_bank1[i] <<= s.recv_cfg_from_ctrl.msg.in_pred_en[i]
                            s.rd_pred_inv_bank1[i] <<= s.recv_cfg_from_ctrl.msg.in_pred_inv[i]
                            s.rd_const_val_bank1[i] <<= s.recv_cfg_from_ctrl.msg.in_const_vals[i]
                            s.rd_pred_reset_const_en_bank1[i] <<= s.recv_cfg_from_ctrl.msg.in_pred_reset_const_en[i]
                        for i in range(num_wr_ports):
                            mapped_idx = i
                            if i < 4:
                                mapped_idx = ((i & 0x1) << 1) + ((i & 0x2) >> 1)
                            has_wr_route = Bits1(0)
                            has_pred_route = Bits1(0)
                            route_bit_idx = Bits4(num_returner_ports - mapped_idx - 1)
                            for r in range(num_rd_ports):
                                has_wr_route = has_wr_route | s.recv_cfg_from_ctrl.msg.tokenizer_cfg.token_route_sink_enable[r][route_bit_idx]
                                has_pred_route = has_pred_route | s.recv_cfg_from_ctrl.msg.tokenizer_cfg.token_route_sink_enable[r][route_bit_idx]
                            s.wr_addr_cfg_bank1[i] <<= s.recv_cfg_from_ctrl.msg.out_regs[i]
                            s.wr_addr_valcfg_bank1[i] <<= s.recv_cfg_from_ctrl.msg.out_regs_val[i] & has_wr_route
                            s.pred_wr_valcfg_bank1[i] <<= s.recv_cfg_from_ctrl.msg.out_pred_regs_val[i] & has_pred_route
                            s.pred_wr_addr_cfg_bank1[i] <<= s.recv_cfg_from_ctrl.msg.out_pred_regs[i]
                            s.reduce_en_bank1[i] <<= s.recv_cfg_from_ctrl.msg.reduce_en[i]
                            s.reduce_addr_bank1[i] <<= s.recv_cfg_from_ctrl.msg.reduce_addr[i]
                        for i in range(num_tiles):
                            s.pred_tile_valid_bank1[i] <<= s.recv_cfg_from_ctrl.msg.pred_tile_valid[i]
                        for i in range(num_ld_ports):
                            s.ld_enable_bank1[i] <<= s.recv_cfg_from_ctrl.msg.ld_enable[i]
                            s.ld_reg_addr_bank1[i] <<= s.recv_cfg_from_ctrl.msg.ld_reg_addr[i]
                        for i in range(num_st_ports):
                            s.st_enable_bank1[i] <<= s.recv_cfg_from_ctrl.msg.st_enable[i]

        # -------------------------------------------------------------------------
        # Completion check (comb)
        # -------------------------------------------------------------------------

        s.cfg_writeback_complete = _diag_signal( Bits1 )
        s.cfg_issue_ready = OutPort( 1 )
        s.rd_regs_complete = _diag_signal( mk_bits(num_rd_ports) )
        s.wr_regs_complete = _diag_signal( mk_bits(num_wr_ports) )

        @update
        def comb_nonmem_masks():
            target_mask = s.active_thread_mask
            s.active_target_mask @= target_mask

            s.any_wr_enabled @= Bits1(0)
            wr_complete_mask = target_mask
            for port in range(num_wr_ports):
                if s.wr_track_en[port]:
                    s.any_wr_enabled @= Bits1(1)
                    wr_complete_mask = wr_complete_mask & s.wr_seen_mask[port]

            if s.any_wr_enabled:
                s.nonmem_ready_mask @= wr_complete_mask
            else:
                s.nonmem_ready_mask @= target_mask

        @update
        def comb_completion():
            # Default cfg
            s.cfg_writeback_complete @= Bits1(0)
            # Only check completion when in RUN state
            if s.state == ST_RUN:
                # Check read ports
                for i in range(num_rd_ports):
                    s.rd_regs_complete[i] @= Bits1(1)
                # Check write ports
                for i in range(num_wr_ports):
                    if s.wr_track_en[i]:
                        s.wr_regs_complete[i] @= Bits1(
                            (s.wr_seen_mask[i] & s.active_target_mask) == s.active_target_mask
                        )
                    else:
                        s.wr_regs_complete[i] @= Bits1(1)

                s.cfg_writeback_complete @= reduce_and(s.wr_regs_complete) & (s.expected_count > MaxThreadType(0))
        
        # -------------------------------------------------------------------------
        # Next-state & counters (single comb writer)
        # -------------------------------------------------------------------------

        @update
        def comb_next_state_and_counts():
            # Default hold
            s.state_n @= s.state
            s.issue_count_n @= s.issue_count
            s.issued_mask_n @= s.issued_mask
            s.dep_mode_n @= s.dep_mode
            s.run_primed_n @= s.run_primed
            s.mem_release_take @= Bits1(0)
            s.launch_fire_n @= Bits1(0)
            s.launch_issue_tid_n @= s.launch_issue_tid
            for i in range(num_rd_ports):
                # RF defaults
                s.rd_count_n[i] @= s.rd_count[i]
                s.rd_addr_valcfg_n[i] @= s.rd_addr_valcfg[i]
                s.rd_addr_cfg_n[i] @= s.rd_addr_cfg[i]
                s.reduce_rd_en_n[i] @= s.reduce_rd_en[i]
                s.reduce_rd_addr_n[i] @= s.reduce_rd_addr[i]
                s.tid_enabled_n[i] @= s.tid_enabled[i]
                s.rd_pred_addr_cfg_n[i] @= s.rd_pred_addr_cfg[i]
                s.rd_pred_en_n[i] @= s.rd_pred_en[i]
                s.rd_pred_inv_n[i] @= s.rd_pred_inv[i]
                s.rd_const_val_n[i] @= s.rd_const_val[i]
                s.rd_pred_reset_const_en_n[i] @= s.rd_pred_reset_const_en[i]

                # Token defaults
                s.tile_token_take_req[i] @= Bits1(0)
                s.tile_token_take_pair_req[i] @= Bits1(0)
                s.launch_rd_port_active_n[i] @= Bits1(0)
            for i in range(num_wr_ports):
                # Token default
                s.tile_token_return[i] @= 0

                # Address
                s.wr_count_n[i] @= s.wr_count[i]
                s.wr_addr_valcfg_n[i] @= s.wr_addr_valcfg[i]
                s.wr_addr_cfg_n[i] @= s.wr_addr_cfg[i]
                s.reduce_en_n[i] @= s.reduce_en[i]
                s.reduce_addr_n[i] @= s.reduce_addr[i]
            s.expected_count_n @= s.expected_count
            for i in range(num_ld_ports):
                s.ld_seq_count_n[i] @= s.ld_seq_count[i]
                s.ld_issued_mask_n[i] @= s.ld_issued_mask[i]
            for i in range(num_st_ports):
                s.st_seq_count_n[i] @= s.st_seq_count[i]
                s.st_issued_mask_n[i] @= s.st_issued_mask[i]

            # State transitions
            if s.state == ST_IDLE:
                # Handshake to start configuration
                if s.recv_cfg_from_ctrl.val & s.recv_cfg_from_ctrl.rdy & (s.cfg_active_sel_w == s.cfg_load_sel_w):
                    s.state_n @= ST_RUN
                    s.issue_count_n @= MaxThreadType(0)
                    s.issued_mask_n @= MaskType(0)
                    s.dep_mode_n @= Bits1(0)
                    s.run_primed_n @= Bits1(0)
                    for i in range(num_rd_ports):
                        s.rd_count_n[i] @= MaxThreadType(0)
                        s.rd_addr_valcfg_n[i] @= s.recv_cfg_from_ctrl.msg.in_regs_val[i]
                        s.rd_addr_cfg_n[i] @= s.recv_cfg_from_ctrl.msg.in_regs[i]
                        s.reduce_rd_en_n[i] @= s.recv_cfg_from_ctrl.msg.reduce_rd_en[i]
                        s.reduce_rd_addr_n[i] @= s.recv_cfg_from_ctrl.msg.reduce_rd_addr[i]
                        s.tid_enabled_n[i] @= s.recv_cfg_from_ctrl.msg.in_tid_enable[i] & s.recv_cfg_from_ctrl.msg.in_regs_val[i]
                        s.rd_pred_addr_cfg_n[i] @= s.recv_cfg_from_ctrl.msg.in_pred_regs[i]
                        s.rd_pred_en_n[i] @= s.recv_cfg_from_ctrl.msg.in_pred_en[i]
                        s.rd_pred_inv_n[i] @= s.recv_cfg_from_ctrl.msg.in_pred_inv[i]
                        s.rd_const_val_n[i] @= s.recv_cfg_from_ctrl.msg.in_const_vals[i]
                        s.rd_pred_reset_const_en_n[i] @= s.recv_cfg_from_ctrl.msg.in_pred_reset_const_en[i]
                    for i in range(num_wr_ports):
                        mapped_idx = i
                        if i < 4:
                            mapped_idx = ((i & 0x1) << 1) + ((i & 0x2) >> 1)
                        has_wr_route = Bits1(0)
                        route_bit_idx = Bits4(num_returner_ports - mapped_idx - 1)
                        for r in range(num_rd_ports):
                            has_wr_route = has_wr_route | s.recv_cfg_from_ctrl.msg.tokenizer_cfg.token_route_sink_enable[r][route_bit_idx]
                        s.wr_count_n[i] @= MaxThreadType(0)
                        s.wr_addr_valcfg_n[i] @= s.recv_cfg_from_ctrl.msg.out_regs_val[i] & has_wr_route
                        s.wr_addr_cfg_n[i] @= s.recv_cfg_from_ctrl.msg.out_regs[i]
                        s.reduce_en_n[i] @= s.recv_cfg_from_ctrl.msg.reduce_en[i]
                        s.reduce_addr_n[i] @= s.recv_cfg_from_ctrl.msg.reduce_addr[i]
                    for i in range(num_ld_ports):
                        s.ld_seq_count_n[i] @= MaxThreadType(0)
                        s.ld_issued_mask_n[i] @= MaskType(0)
                    for i in range(num_st_ports):
                        s.st_seq_count_n[i] @= MaxThreadType(0)
                        s.st_issued_mask_n[i] @= MaskType(0)
                    s.expected_count_n @= s.recv_cfg_thread_count_resolved
            
            elif s.state == ST_RUN:
                if ~s.run_primed:
                    s.run_primed_n @= Bits1(1)
                else:
                    if s.launch_fire:
                        for i in range(num_rd_ports):
                            if s.launch_rd_port_active[i]:
                                s.rd_count_n[i] @= s.rd_count[i] + MaxThreadType(1)
                                s.tile_token_take_req[i] @= Bits1(1)
                                s.tile_token_take_pair_req[i] @= s.tile_token_pair_required[i]
                    if s.dep_mode & s.mem_release_valid:
                        s.mem_release_take @= Bits1(1)
                    if s.issue_fire:
                        s.issue_count_n @= s.issue_count + MaxThreadType(1)
                        s.issued_mask_n @= s.issued_mask | s.current_issue_tid_mask
                        for i in range(num_rd_ports):
                            if s.rd_port_active[i]:
                                s.launch_rd_port_active_n[i] @= Bits1(1)
                        s.launch_fire_n @= Bits1(1)
                        s.launch_issue_tid_n @= s.current_issue_tid

                    for i in range(num_wr_ports):
                        mapped_idx = i
                        if i < 4:
                            mapped_idx = ((i & 0x1) << 1) + ((i & 0x2) >> 1)
                        if s.wr_token_fire[i]:
                            s.wr_count_n[i] @= s.wr_count[i] + MaxThreadType(1)
                            s.tile_token_return[mapped_idx] @= 1
                    for i in range(num_ld_ports):
                        if s.ld_req_accepted[i] & (s.ld_seq_count[i] < s.expected_count):
                            s.ld_seq_count_n[i] @= s.ld_seq_count[i] + MaxThreadType(1)
                            s.ld_issued_mask_n[i] @= s.ld_issued_mask[i] | s.ld_issue_tid_mask[i]
                    for i in range(num_st_ports):
                        if s.st_req_accepted[i] & (s.st_seq_count[i] < s.expected_count):
                            s.st_seq_count_n[i] @= s.st_seq_count[i] + MaxThreadType(1)
                            s.st_issued_mask_n[i] @= s.st_issued_mask[i] | s.st_issue_tid_mask[i]

                # Transition back to IDLE when complete
                if s.cfg_done:
                    s.state_n @= ST_IDLE

        # -------------------------------------------------------------------------
        # Sequential update: commit state, counters, and capture config
        # -------------------------------------------------------------------------

        @update_ff
        def seq_ff():
            if s.reset:
                s.state           <<= ST_IDLE
                s.expected_count  <<= MaxThreadType(0)
                s.active_thread_min <<= MaxThreadType(0)
                s.active_thread_max <<= MaxThreadType(0)
                s.active_thread_mask <<= MaskType(0)
                s.dep_thread_mask <<= MaskType(0)
                s.active_pred_reg <<= PredAddrType(0)
                s.reduce_op <<= ReduceOpType(0)
                s.active_branch_en <<= Bits1(0)
                s.active_const_store <<= Bits1(0)
                s.issue_count <<= MaxThreadType(0)
                s.issued_mask <<= MaskType(0)
                s.dep_mode <<= Bits1(0)
                s.run_primed <<= Bits1(0)
                s.launch_fire <<= Bits1(0)
                s.launch_issue_tid <<= ThreadIdType(0)
                for i in range(num_rd_ports):
                    s.rd_addr_cfg[i]    <<= RegAddrType(0)
                    s.rd_addr_valcfg[i] <<= Bits1(0)
                    s.reduce_rd_en[i]   <<= Bits1(0)
                    s.reduce_rd_addr[i] <<= ReduceAddrType(0)
                    s.tid_enabled[i]    <<= Bits1(0)
                    s.rd_pred_addr_cfg[i] <<= PredAddrType(0)
                    s.rd_pred_en[i] <<= Bits1(0)
                    s.rd_pred_inv[i] <<= Bits1(0)
                    s.rd_const_val[i] <<= ConstImmType(0)
                    s.rd_pred_reset_const_en[i] <<= Bits1(0)
                    s.rd_count[i]       <<= MaxThreadType(0)
                    s.launch_rd_port_active[i] <<= Bits1(0)
                    s.rd_data_reg[i] <<= RegDataType(0)
                for i in range(num_wr_ports):
                    s.wr_addr_cfg[i]    <<= RegAddrType(0)
                    s.wr_addr_valcfg[i] <<= Bits1(0)
                    s.pred_wr_valcfg[i] <<= Bits1(0)
                    s.pred_wr_addr_cfg[i] <<= PredAddrType(0)
                    s.reduce_en[i]      <<= Bits1(0)
                    s.reduce_addr[i]    <<= ReduceAddrType(0)
                    s.wr_count[i]       <<= MaxThreadType(0)
                for i in range(num_tiles):
                    s.pred_tile_valid_active[i] <<= Bits1(0)
                for i in range(num_ld_ports):
                    s.ld_enable_active[i] <<= Bits1(0)
                    s.ld_reg_addr_active[i] <<= RegAddrType(0)
                    s.ld_issued_mask[i] <<= MaskType(0)
                for i in range(num_st_ports):
                    s.st_enable_active[i] <<= Bits1(0)
                    s.st_issued_mask[i] <<= MaskType(0)
                for i in range(num_ld_ports):
                    s.ld_seq_count[i] <<= MaxThreadType(0)
                for i in range(num_st_ports):
                    s.st_seq_count[i] <<= MaxThreadType(0)

            else:
                if s.cfg_swap_w:
                    s.state <<= ST_RUN
                    s.issue_count <<= MaxThreadType(0)
                    s.issued_mask <<= MaskType(0)
                    s.run_primed <<= Bits1(0)
                    s.launch_fire <<= Bits1(0)
                    s.launch_issue_tid <<= ThreadIdType(0)
                    # The controller tells us when a bank swap overlaps an
                    # incomplete prior config, so new TIDs must be released
                    # from the previous bank before issuing this config.
                    s.dep_mode <<= s.cfg_dep_start_w
                    if s.cfg_active_sel_w == Bits1(0):
                        s.expected_count <<= s.expected_count_bank0
                        s.active_thread_min <<= s.active_thread_min_bank0
                        s.active_thread_max <<= s.active_thread_max_bank0
                        s.active_thread_mask <<= s.active_thread_mask_bank0
                        dep_mask = MaskType(0)
                        if s.cfg_dep_start_w:
                            dep_mask = s.active_thread_mask_bank0 & s.active_thread_mask_bank1
                        s.dep_thread_mask <<= dep_mask
                        s.active_pred_reg <<= s.pred_reg_bank0
                        s.reduce_op <<= s.reduce_op_bank0
                        s.active_branch_en <<= s.branch_en_bank0
                        s.active_const_store <<= s.const_store_bank0
                        for i in range(num_rd_ports):
                            s.rd_addr_cfg[i] <<= s.rd_addr_cfg_bank0[i]
                            s.rd_addr_valcfg[i] <<= s.rd_addr_valcfg_bank0[i]
                            s.reduce_rd_en[i] <<= s.reduce_rd_en_bank0[i]
                            s.reduce_rd_addr[i] <<= s.reduce_rd_addr_bank0[i]
                            s.tid_enabled[i] <<= s.tid_enabled_bank0[i] & s.rd_addr_valcfg_bank0[i]
                            s.rd_pred_addr_cfg[i] <<= s.rd_pred_addr_cfg_bank0[i]
                            s.rd_pred_en[i] <<= s.rd_pred_en_bank0[i]
                            s.rd_pred_inv[i] <<= s.rd_pred_inv_bank0[i]
                            s.rd_const_val[i] <<= s.rd_const_val_bank0[i]
                            s.rd_pred_reset_const_en[i] <<= s.rd_pred_reset_const_en_bank0[i]
                            s.rd_count[i] <<= MaxThreadType(0)
                            s.launch_rd_port_active[i] <<= Bits1(0)
                            s.rd_data_reg[i] <<= RegDataType(0)
                        for i in range(num_wr_ports):
                            s.wr_addr_cfg[i] <<= s.wr_addr_cfg_bank0[i]
                            s.wr_addr_valcfg[i] <<= s.wr_addr_valcfg_bank0[i]
                            s.pred_wr_valcfg[i] <<= s.pred_wr_valcfg_bank0[i]
                            s.pred_wr_addr_cfg[i] <<= s.pred_wr_addr_cfg_bank0[i]
                            s.reduce_en[i] <<= s.reduce_en_bank0[i]
                            s.reduce_addr[i] <<= s.reduce_addr_bank0[i]
                            s.wr_count[i] <<= MaxThreadType(0)
                        for i in range(num_tiles):
                            s.pred_tile_valid_active[i] <<= s.pred_tile_valid_bank0[i]
                        for i in range(num_ld_ports):
                            s.ld_enable_active[i] <<= s.ld_enable_bank0[i]
                            s.ld_reg_addr_active[i] <<= s.ld_reg_addr_bank0[i]
                            s.ld_issued_mask[i] <<= MaskType(0)
                        for i in range(num_st_ports):
                            s.st_enable_active[i] <<= s.st_enable_bank0[i]
                            s.st_issued_mask[i] <<= MaskType(0)
                    else:
                        s.expected_count <<= s.expected_count_bank1
                        s.active_thread_min <<= s.active_thread_min_bank1
                        s.active_thread_max <<= s.active_thread_max_bank1
                        s.active_thread_mask <<= s.active_thread_mask_bank1
                        dep_mask = MaskType(0)
                        if s.cfg_dep_start_w:
                            dep_mask = s.active_thread_mask_bank1 & s.active_thread_mask_bank0
                        s.dep_thread_mask <<= dep_mask
                        s.active_pred_reg <<= s.pred_reg_bank1
                        s.reduce_op <<= s.reduce_op_bank1
                        s.active_branch_en <<= s.branch_en_bank1
                        s.active_const_store <<= s.const_store_bank1
                        for i in range(num_rd_ports):
                            s.rd_addr_cfg[i] <<= s.rd_addr_cfg_bank1[i]
                            s.rd_addr_valcfg[i] <<= s.rd_addr_valcfg_bank1[i]
                            s.reduce_rd_en[i] <<= s.reduce_rd_en_bank1[i]
                            s.reduce_rd_addr[i] <<= s.reduce_rd_addr_bank1[i]
                            s.tid_enabled[i] <<= s.tid_enabled_bank1[i] & s.rd_addr_valcfg_bank1[i]
                            s.rd_pred_addr_cfg[i] <<= s.rd_pred_addr_cfg_bank1[i]
                            s.rd_pred_en[i] <<= s.rd_pred_en_bank1[i]
                            s.rd_pred_inv[i] <<= s.rd_pred_inv_bank1[i]
                            s.rd_const_val[i] <<= s.rd_const_val_bank1[i]
                            s.rd_pred_reset_const_en[i] <<= s.rd_pred_reset_const_en_bank1[i]
                            s.rd_count[i] <<= MaxThreadType(0)
                            s.launch_rd_port_active[i] <<= Bits1(0)
                            s.rd_data_reg[i] <<= RegDataType(0)
                        for i in range(num_wr_ports):
                            s.wr_addr_cfg[i] <<= s.wr_addr_cfg_bank1[i]
                            s.wr_addr_valcfg[i] <<= s.wr_addr_valcfg_bank1[i]
                            s.pred_wr_valcfg[i] <<= s.pred_wr_valcfg_bank1[i]
                            s.pred_wr_addr_cfg[i] <<= s.pred_wr_addr_cfg_bank1[i]
                            s.reduce_en[i] <<= s.reduce_en_bank1[i]
                            s.reduce_addr[i] <<= s.reduce_addr_bank1[i]
                            s.wr_count[i] <<= MaxThreadType(0)
                        for i in range(num_tiles):
                            s.pred_tile_valid_active[i] <<= s.pred_tile_valid_bank1[i]
                        for i in range(num_ld_ports):
                            s.ld_enable_active[i] <<= s.ld_enable_bank1[i]
                            s.ld_reg_addr_active[i] <<= s.ld_reg_addr_bank1[i]
                            s.ld_issued_mask[i] <<= MaskType(0)
                        for i in range(num_st_ports):
                            s.st_enable_active[i] <<= s.st_enable_bank1[i]
                            s.st_issued_mask[i] <<= MaskType(0)
                    for i in range(num_ld_ports):
                        s.ld_seq_count[i] <<= MaxThreadType(0)
                    for i in range(num_st_ports):
                        s.st_seq_count[i] <<= MaxThreadType(0)
                else:
                    # Advance state
                    s.state <<= s.state_n
                    s.issue_count <<= s.issue_count_n
                    s.issued_mask <<= s.issued_mask_n
                    s.dep_mode <<= s.dep_mode_n
                    s.run_primed <<= s.run_primed_n
                    s.launch_fire <<= s.launch_fire_n
                    s.launch_issue_tid <<= s.launch_issue_tid_n

                    # Update counters/config
                    for i in range(num_rd_ports):
                        s.rd_count[i] <<= s.rd_count_n[i]
                        s.rd_addr_cfg[i] <<= s.rd_addr_cfg_n[i]
                        s.rd_addr_valcfg[i] <<= s.rd_addr_valcfg_n[i]
                        s.reduce_rd_en[i] <<= s.reduce_rd_en_n[i]
                        s.reduce_rd_addr[i] <<= s.reduce_rd_addr_n[i]
                        s.tid_enabled[i] <<= s.tid_enabled_n[i]
                        s.rd_pred_addr_cfg[i] <<= s.rd_pred_addr_cfg_n[i]
                        s.rd_pred_en[i] <<= s.rd_pred_en_n[i]
                        s.rd_pred_inv[i] <<= s.rd_pred_inv_n[i]
                        s.rd_const_val[i] <<= s.rd_const_val_n[i]
                        s.rd_pred_reset_const_en[i] <<= s.rd_pred_reset_const_en_n[i]
                        s.launch_rd_port_active[i] <<= s.launch_rd_port_active_n[i]
                        if s.issue_fire:
                            s.rd_data_reg[i] <<= s.rd_data_next[i]
                        else:
                            s.rd_data_reg[i] <<= s.rd_data_reg[i]

                    for i in range(num_wr_ports):
                        s.wr_count[i] <<= s.wr_count_n[i]
                        s.wr_addr_cfg[i] <<= s.wr_addr_cfg_n[i]
                        s.wr_addr_valcfg[i] <<= s.wr_addr_valcfg_n[i]
                        s.reduce_en[i] <<= s.reduce_en_n[i]
                        s.reduce_addr[i] <<= s.reduce_addr_n[i]
                        if s.recv_cfg_from_ctrl.val & s.recv_cfg_from_ctrl.rdy & (s.cfg_active_sel_w == s.cfg_load_sel_w) & (s.state == ST_IDLE):
                            mapped_idx = i
                            if i < 4:
                                mapped_idx = ((i & 0x1) << 1) + ((i & 0x2) >> 1)
                            has_pred_route = Bits1(0)
                            route_bit_idx = Bits4(num_returner_ports - mapped_idx - 1)
                            for r in range(num_rd_ports):
                                has_pred_route = has_pred_route | s.recv_cfg_from_ctrl.msg.tokenizer_cfg.token_route_sink_enable[r][route_bit_idx]
                            s.pred_wr_valcfg[i] <<= s.recv_cfg_from_ctrl.msg.out_pred_regs_val[i] & has_pred_route
                            s.pred_wr_addr_cfg[i] <<= s.recv_cfg_from_ctrl.msg.out_pred_regs[i]
                    for i in range(num_ld_ports):
                        s.ld_seq_count[i] <<= s.ld_seq_count_n[i]
                        s.ld_issued_mask[i] <<= s.ld_issued_mask_n[i]
                    for i in range(num_st_ports):
                        s.st_seq_count[i] <<= s.st_seq_count_n[i]
                        s.st_issued_mask[i] <<= s.st_issued_mask_n[i]

                    s.expected_count <<= s.expected_count_n

                    if s.recv_cfg_from_ctrl.val & s.recv_cfg_from_ctrl.rdy & (s.cfg_active_sel_w == s.cfg_load_sel_w) & (s.state == ST_IDLE):
                        s.active_thread_min <<= s.recv_cfg_thread_min_resolved
                        s.active_thread_max <<= s.recv_cfg_thread_max_resolved
                        s.active_thread_mask <<= s.recv_cfg_thread_mask_resolved
                        s.dep_thread_mask <<= MaskType(0)
                        s.active_pred_reg <<= s.recv_cfg_from_ctrl.msg.pred_reg_id
                        s.reduce_op <<= s.recv_cfg_from_ctrl.msg.reduce_op
                        s.active_branch_en <<= s.recv_cfg_from_ctrl.msg.branch_en
                        cfg_is_const_store = Bits1(s.recv_cfg_from_ctrl.msg.end_cfg)
                        any_store = Bits1(0)
                        any_load = Bits1(0)
                        any_data_write = Bits1(0)
                        any_pred_write = Bits1(0)
                        any_input_read = Bits1(0)
                        for j in range(num_st_ports):
                            any_store = any_store | s.recv_cfg_from_ctrl.msg.st_enable[j]
                        for j in range(num_ld_ports):
                            any_load = any_load | s.recv_cfg_from_ctrl.msg.ld_enable[j]
                        for j in range(num_wr_ports):
                            any_data_write = any_data_write | s.recv_cfg_from_ctrl.msg.out_regs_val[j]
                            any_pred_write = any_pred_write | s.recv_cfg_from_ctrl.msg.out_pred_regs_val[j]
                        for j in range(num_rd_ports):
                            any_input_read = any_input_read | s.recv_cfg_from_ctrl.msg.in_regs_val[j] | s.recv_cfg_from_ctrl.msg.in_pred_en[j] | s.recv_cfg_from_ctrl.msg.reduce_rd_en[j]
                        s.active_const_store <<= cfg_is_const_store & any_store & ~any_load & ~any_data_write & ~any_pred_write & ~any_input_read
                        for i in range(num_tiles):
                            s.pred_tile_valid_active[i] <<= s.recv_cfg_from_ctrl.msg.pred_tile_valid[i]
                        for i in range(num_ld_ports):
                            s.ld_enable_active[i] <<= s.recv_cfg_from_ctrl.msg.ld_enable[i]
                            s.ld_reg_addr_active[i] <<= s.recv_cfg_from_ctrl.msg.ld_reg_addr[i]
                            s.ld_issued_mask[i] <<= MaskType(0)
                        for i in range(num_st_ports):
                            s.st_enable_active[i] <<= s.recv_cfg_from_ctrl.msg.st_enable[i]
                            s.st_issued_mask[i] <<= MaskType(0)

        # -------------------------------------------------------------------------
        # Writeback thread-id tracking
        # -------------------------------------------------------------------------
        @update_ff
        def wr_tid_tracking_ff():
            cfg_start = s.recv_cfg_from_ctrl.val & s.recv_cfg_from_ctrl.rdy & (s.cfg_active_sel_w == s.cfg_load_sel_w) & (s.state == ST_IDLE)
            flush_tracking = s.reset | s.cfg_swap_w | cfg_start
            if flush_tracking:
                for i in range(num_wr_ports):
                    s.wr_tid_fifo_head[i] <<= TidQueuePtrType(0)
                    s.wr_tid_fifo_tail[i] <<= TidQueuePtrType(0)
                    s.wr_tid_fifo_count[i] <<= TidQueueCountType(0)
                    s.wr_seen_mask[i] <<= MaskType(0)
                    for q in range(MAX_THREAD_COUNT):
                        s.wr_tid_fifo_data[i][q] <<= ThreadIdType(0)
            else:
                for i in range(num_wr_ports):
                    count = s.wr_tid_fifo_count[i]
                    can_pop = s.wr_commit_valid[i]
                    can_push = s.launch_fire & s.run_primed & (s.state == ST_RUN) & s.wr_track_en[i]
                    commit_mask = MaskType(0)
                    for tid in range(MAX_THREAD_COUNT):
                        if s.wr_commit_tid[i] == ThreadIdType(tid):
                            commit_mask = MaskType(1 << tid)

                    if can_push:
                        if (count < TidQueueCountType(MAX_THREAD_COUNT)) | can_pop:
                            for q in range(MAX_THREAD_COUNT):
                                if s.wr_tid_fifo_tail[i] == TidQueuePtrType(q):
                                    s.wr_tid_fifo_data[i][q] <<= s.launch_issue_tid

                    if can_pop:
                        s.wr_seen_mask[i] <<= s.wr_seen_mask[i] | commit_mask
                    else:
                        s.wr_seen_mask[i] <<= s.wr_seen_mask[i]

                    if can_pop:
                        s.wr_tid_fifo_head[i] <<= s.wr_tid_fifo_head[i] + TidQueuePtrType(1)
                    else:
                        s.wr_tid_fifo_head[i] <<= s.wr_tid_fifo_head[i]

                    if can_push & ((count < TidQueueCountType(MAX_THREAD_COUNT)) | can_pop):
                        s.wr_tid_fifo_tail[i] <<= s.wr_tid_fifo_tail[i] + TidQueuePtrType(1)
                    else:
                        s.wr_tid_fifo_tail[i] <<= s.wr_tid_fifo_tail[i]

                    if can_push & ~can_pop:
                        if count < TidQueueCountType(MAX_THREAD_COUNT):
                            s.wr_tid_fifo_count[i] <<= count + TidQueueCountType(1)
                        else:
                            s.wr_tid_fifo_count[i] <<= count
                    elif can_pop & ~can_push:
                        if count > TidQueueCountType(0):
                            s.wr_tid_fifo_count[i] <<= count - TidQueueCountType(1)
                        else:
                            s.wr_tid_fifo_count[i] <<= TidQueueCountType(0)
                    else:
                        s.wr_tid_fifo_count[i] <<= count

        # -------------------------------------------------------------------------
        # Predicate register file update
        # -------------------------------------------------------------------------
        @update
        def comb_pred_rf_next():
            cfg_start = s.recv_cfg_from_ctrl.val & s.recv_cfg_from_ctrl.rdy & (s.cfg_active_sel_w == s.cfg_load_sel_w) & (s.state == ST_IDLE)
            for r in range(num_pred_registers):
                count = s.pred_count[r]
                expected = s.pred_expected[r]
                any_true = s.pred_any_true_reg[r]
                any_false = s.pred_any_false_reg[r]
                true_count = s.pred_true_count_reg[r]
                false_count = s.pred_false_count_reg[r]
                true_mask = s.pred_true_mask_reg[r]
                false_mask = s.pred_false_mask_reg[r]
                seen_mask = s.pred_seen_mask_reg[r]
                force_const_mask = s.pred_force_const_mask_reg[r]
                reconverge_reset_mask = MaskType(0)
                reconverge_reset_en = Bits1(0)

                if cfg_start:
                    if s.recv_cfg_pred_reset_mask[r]:
                        reconverge_reset_mask = s.recv_cfg_thread_mask_resolved
                        reconverge_reset_en = Bits1(1)
                    for i in range(num_wr_ports):
                        if s.recv_cfg_from_ctrl.msg.out_pred_regs_val[i] & (s.recv_cfg_from_ctrl.msg.out_pred_regs[i] == PredAddrType(r)):
                            count = PredCountType(0)
                            expected = PredCountType(s.recv_cfg_thread_count_resolved)
                            any_true = Bits1(0)
                            any_false = Bits1(0)
                            true_count = PredCountType(0)
                            false_count = PredCountType(0)
                            true_mask = MaskType(0)
                            false_mask = MaskType(0)
                            seen_mask = MaskType(0)
                elif s.cfg_swap_w:
                    if s.cfg_active_sel_w == Bits1(0):
                        if s.pred_reset_mask_bank0[r]:
                            reconverge_reset_mask = s.active_thread_mask_bank0
                            reconverge_reset_en = Bits1(1)
                        cfg_expected = PredCountType(s.expected_count_bank0)
                        for i in range(num_wr_ports):
                            if s.pred_wr_valcfg_bank0[i] & (s.pred_wr_addr_cfg_bank0[i] == PredAddrType(r)):
                                count = PredCountType(0)
                                expected = cfg_expected
                                any_true = Bits1(0)
                                any_false = Bits1(0)
                                true_count = PredCountType(0)
                                false_count = PredCountType(0)
                                true_mask = MaskType(0)
                                false_mask = MaskType(0)
                                seen_mask = MaskType(0)
                    else:
                        if s.pred_reset_mask_bank1[r]:
                            reconverge_reset_mask = s.active_thread_mask_bank1
                            reconverge_reset_en = Bits1(1)
                        cfg_expected = PredCountType(s.expected_count_bank1)
                        for i in range(num_wr_ports):
                            if s.pred_wr_valcfg_bank1[i] & (s.pred_wr_addr_cfg_bank1[i] == PredAddrType(r)):
                                count = PredCountType(0)
                                expected = cfg_expected
                                any_true = Bits1(0)
                                any_false = Bits1(0)
                                true_count = PredCountType(0)
                                false_count = PredCountType(0)
                                true_mask = MaskType(0)
                                false_mask = MaskType(0)
                                seen_mask = MaskType(0)

                if reconverge_reset_en:
                    true_mask = true_mask & ~reconverge_reset_mask
                    false_mask = false_mask & ~reconverge_reset_mask
                    seen_mask = seen_mask & ~reconverge_reset_mask
                    force_const_mask = force_const_mask | reconverge_reset_mask

                    count = PredCountType(0)
                    true_count = PredCountType(0)
                    false_count = PredCountType(0)
                    any_true = Bits1(0)
                    any_false = Bits1(0)
                    for tid in range(MAX_THREAD_COUNT):
                        if seen_mask[tid]:
                            count = count + PredCountType(1)
                        if true_mask[tid]:
                            any_true = Bits1(1)
                            true_count = true_count + PredCountType(1)
                        if false_mask[tid]:
                            any_false = Bits1(1)
                            false_count = false_count + PredCountType(1)

                if s.state == ST_RUN:
                    for i in range(num_wr_ports):
                        if s.pred_wr_valcfg[i] & (s.pred_wr_addr_cfg[i] == PredAddrType(r)) & s.wr_commit_valid[i]:
                            tid_mask = MaskType(0)
                            for tid in range(MAX_THREAD_COUNT):
                                if s.wr_commit_tid[i] == ThreadIdType(tid):
                                    tid_mask = MaskType(1 << tid)
                            force_const_mask = force_const_mask & ~tid_mask
                            if (tid_mask != MaskType(0)) & ((seen_mask & tid_mask) == MaskType(0)):
                                seen_mask = seen_mask | tid_mask
                                if count < expected:
                                    count = count + PredCountType(1)
                                if s.recv_pred_port[i]:
                                    any_true = Bits1(1)
                                    true_mask = true_mask | tid_mask
                                    if true_count < expected:
                                        true_count = true_count + PredCountType(1)
                                else:
                                    any_false = Bits1(1)
                                    false_mask = false_mask | tid_mask
                                    if false_count < expected:
                                        false_count = false_count + PredCountType(1)

                s.pred_count_next[r] @= count
                s.pred_expected_next[r] @= expected
                s.pred_any_true_next[r] @= any_true
                s.pred_any_false_next[r] @= any_false
                s.pred_true_count_next[r] @= true_count
                s.pred_false_count_next[r] @= false_count
                s.pred_true_mask_next[r] @= true_mask
                s.pred_false_mask_next[r] @= false_mask
                s.pred_seen_mask_next[r] @= seen_mask
                s.pred_force_const_mask_next[r] @= force_const_mask

        @update_ff
        def pred_rf_ff():
            if s.reset:
                for r in range(num_pred_registers):
                    s.pred_count[r] <<= PredCountType(0)
                    s.pred_expected[r] <<= PredCountType(0)
                    s.pred_any_true_reg[r] <<= Bits1(0)
                    s.pred_any_false_reg[r] <<= Bits1(0)
                    s.pred_true_count_reg[r] <<= PredCountType(0)
                    s.pred_false_count_reg[r] <<= PredCountType(0)
                    s.pred_true_mask_reg[r] <<= MaskType(0)
                    s.pred_false_mask_reg[r] <<= MaskType(0)
                    s.pred_seen_mask_reg[r] <<= MaskType(0)
                    s.pred_force_const_mask_reg[r] <<= MaskType(0)
            else:
                for r in range(num_pred_registers):
                    s.pred_count[r] <<= s.pred_count_next[r]
                    s.pred_expected[r] <<= s.pred_expected_next[r]
                    s.pred_any_true_reg[r] <<= s.pred_any_true_next[r]
                    s.pred_any_false_reg[r] <<= s.pred_any_false_next[r]
                    s.pred_true_count_reg[r] <<= s.pred_true_count_next[r]
                    s.pred_false_count_reg[r] <<= s.pred_false_count_next[r]
                    s.pred_true_mask_reg[r] <<= s.pred_true_mask_next[r]
                    s.pred_false_mask_reg[r] <<= s.pred_false_mask_next[r]
                    s.pred_seen_mask_reg[r] <<= s.pred_seen_mask_next[r]
                    s.pred_force_const_mask_reg[r] <<= s.pred_force_const_mask_next[r]

        # -------------------------------------------------------------------------
        # Outputs derived from registered state (single-writer comb)
        # -------------------------------------------------------------------------

        @update
        def comb_active_mem_masks():
            if s.cfg_active_sel_w == Bits1(0):
                s.active_mem_ready @= s.mem_ready_mask_bank0
                s.active_mem_complete @= s.mem_complete_mask_bank0
            else:
                s.active_mem_ready @= s.mem_ready_mask_bank1
                s.active_mem_complete @= s.mem_complete_mask_bank1

        @update
        def comb_issue_completion_summary():
            mem_issue_complete = Bits1(1)
            for i in range(num_ld_ports):
                if s.ld_enable_active[i]:
                    mem_issue_complete = mem_issue_complete & Bits1(s.ld_seq_count[i] >= s.expected_count)
            for i in range(num_st_ports):
                if s.st_enable_active[i]:
                    mem_issue_complete = mem_issue_complete & Bits1(s.st_seq_count[i] >= s.expected_count)
            s.mem_issue_complete @= mem_issue_complete

        @update
        def comb_pred_issue_summary():
            pred_issue_complete = Bits1(1)
            if s.active_branch_en:
                pred_issue_complete = Bits1(
                    (s.pred_expected[s.active_pred_reg] > PredCountType(0))
                    & (s.pred_count[s.active_pred_reg] >= s.pred_expected[s.active_pred_reg])
                )
            s.pred_issue_complete @= pred_issue_complete

        @update
        def comb_thread_progress_summary():
            s.thread_ready_mask @= s.nonmem_ready_mask & s.active_mem_ready
            s.thread_complete_mask @= s.thread_ready_mask & s.active_mem_complete

        @update
        def comb_outputs():
            s.fabric_ready @= Bits1(
                (s.state == ST_RUN)
                & (s.expected_count > MaxThreadType(0))
                & s.mem_issue_complete
                & s.pred_issue_complete
                & (s.thread_ready_mask == s.active_target_mask)
            )
            s.dep_release_pending @= Bits1(
                (s.state == ST_RUN)
                & s.dep_mode
                & (s.issue_count < s.expected_count)
            )
            s.cfg_issue_ready @= s.fabric_ready
            s.cfg_ready_for_next @= s.fabric_ready
            s.dep_mode_out @= s.dep_release_pending
            s.cfg_done @= Bits1(
                (s.state == ST_RUN)
                & (s.expected_count > MaxThreadType(0))
                & s.mem_issue_complete
                & s.pred_issue_complete
                & (s.thread_complete_mask == s.active_target_mask)
            )

        # -------------------------------------------------------------------------
        # Wire the fabric reduction unit
        # -------------------------------------------------------------------------
        for i in range(num_wr_ports):
            s.fabric_reduce_unit.recv_data[i]    //= s.wr_data[i]
            s.fabric_reduce_unit.recv_valid[i]   //= s.wr_commit_valid[i]
            s.fabric_reduce_unit.recv_pred[i]    //= s.recv_pred_port[i]
            s.fabric_reduce_unit.commit_count[i] //= s.wr_count[i]
            s.fabric_reduce_unit.cfg_reduce_en[i]   //= s.reduce_en[i]
            s.fabric_reduce_unit.cfg_reduce_addr[i] //= s.reduce_addr[i]
        s.fabric_reduce_unit.cfg_reduce_op //= s.reduce_op

        for r in range(NUM_REDUCE_REGISTERS):
            s.reduce_rd_data[r] //= s.fabric_reduce_unit.rd_data[r]

        @update
        def comb_reduce_complete():
            # For entry r, find the (at most one, by config invariant --
            # see STEP_FabricReduceUnitRTL.py docstring) wr_port targeting
            # it and check it has seen all expected_count contributions.
            # s.wr_count[i] only resets on the NEXT config (see
            # comb_wr_tracking / cfg_bank_ff / seq_ff), so this is high
            # continuously from completion until the config swaps -- no
            # separate sticky/reset signal needed.
            for r in range(NUM_REDUCE_REGISTERS):
                complete = Bits1(0)
                for i in range(num_wr_ports):
                    if s.reduce_en[i] & (s.reduce_addr[i] == ReduceAddrType(r)):
                        complete = Bits1(
                            (s.wr_count[i] == s.expected_count) & (s.expected_count > MaxThreadType(0))
                        )
                s.reduce_complete[r] @= complete

    def line_trace(s):
        state = int(s.state) if hasattr(s, "state") else 0
        issue = int(s.issue_count) if hasattr(s, "issue_count") else 0
        expected = int(s.expected_count) if hasattr(s, "expected_count") else 0
        return f"rf(st={state} issue={issue}/{expected})"
