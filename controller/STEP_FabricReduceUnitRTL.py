"""
==========================================================================
STEP_FabricReduceUnitRTL.py
==========================================================================
Reduces fabric write-back data into a small local register file: each
active wr_port accumulates (ADD or MUL) its incoming per-thread fabric
data into exactly one entry of this unit's local register file, instead
of (or in addition to) writing each thread's result into a separate
main-register-file entry.

The selected op (cfg_reduce_op) gates everything, including the "first
sample" overwrite. Its reset/default value selects neither
OPT_VEC_REDUCE_ADD nor OPT_VEC_REDUCE_MUL, so with no op explicitly
selected this unit performs no action at all -- registers are left
untouched, never implicitly overwritten.

Design invariant (enforced by configuration, not by this hardware): in
any given config, at most one wr_port targets a given local register
address. This unit does not attempt to merge contributions from two
different wr_ports into the same address in the same cycle.

Per-port "first sample this config" detection uses the parent's existing
commit_count[i] (STEP_RegisterFileControllerRTL.py's s.wr_count[i]),
which the parent already resets to 0 on every new config -- so this unit
does not need its own reset/start pulse.

Author : AI-assisted
"""
from pymtl3 import *
from ..lib.opt_type import OPT_VEC_REDUCE_ADD, OPT_VEC_REDUCE_MUL
from ..lib.util.common import MAX_THREAD_COUNT, NUM_REDUCE_REGISTERS


class STEP_FabricReduceUnitRTL( Component ):

  def construct( s,
                 RegDataType,
                 num_wr_ports,
               ):

    num_reduce_registers = NUM_REDUCE_REGISTERS
    ReduceAddrType = mk_bits( clog2( num_reduce_registers ) )
    MaxThreadType  = mk_bits( clog2( MAX_THREAD_COUNT + 1 ) )
    OpType         = mk_bits( 6 )  # matches OperationType (Bits6) in lib/opt_type.py

    # -----------------------------------------------------------------
    # Interface
    # -----------------------------------------------------------------

    # Per-wr_port data tap (same value as s.wr_data[i] in the parent).
    s.recv_data  = [ InPort( RegDataType ) for _ in range( num_wr_ports ) ]
    # Per-wr_port commit pulse (parent's s.wr_commit_valid[i]).
    s.recv_valid = [ InPort( Bits1 )       for _ in range( num_wr_ports ) ]
    # Per-wr_port fabric predicate for this commit (parent's
    # s.recv_pred_port[i]) -- only fold this contribution in if true.
    s.recv_pred  = [ InPort( Bits1 )       for _ in range( num_wr_ports ) ]
    # Per-wr_port commit count so far this config, BEFORE this commit
    # (parent's s.wr_count[i]) -- 0 means "this is the first contribution,
    # overwrite rather than accumulate".
    s.commit_count = [ InPort( MaxThreadType ) for _ in range( num_wr_ports ) ]

    # Per-wr_port: is this port feeding the reducer, and which local
    # register it accumulates into. One shared opcode per config
    # (OPT_VEC_REDUCE_ADD / _MUL from lib/opt_type.py).
    s.cfg_reduce_en   = [ InPort( Bits1 )          for _ in range( num_wr_ports ) ]
    s.cfg_reduce_addr = [ InPort( ReduceAddrType ) for _ in range( num_wr_ports ) ]
    s.cfg_reduce_op   = InPort( OpType )

    # Local result register file, readable externally.
    s.rd_data = [ OutPort( RegDataType ) for _ in range( num_reduce_registers ) ]

    s.reduce_regfile = [ Wire( RegDataType ) for _ in range( num_reduce_registers ) ]
    for r in range( num_reduce_registers ):
      s.rd_data[r] //= s.reduce_regfile[r]

    @update_ff
    def reduce_ff():
      if s.reset:
        for r in range( num_reduce_registers ):
          s.reduce_regfile[r] <<= RegDataType( 0 )
      else:
        # By construction (see module docstring), at most one wr_port
        # targets a given address r in any config, so no cross-port
        # merging is needed. If no port's condition holds for r this
        # cycle, the register simply holds its current value (no
        # unconditional else-assignment below).
        for r in range( num_reduce_registers ):
          for i in range( num_wr_ports ):
            if s.cfg_reduce_en[i] & s.recv_valid[i] & s.recv_pred[i] & \
               ( s.cfg_reduce_addr[i] == ReduceAddrType( r ) ):
              # The op itself gates everything, including the "first
              # sample" overwrite: with no valid op selected (the reset/
              # default value of cfg_reduce_op, i.e. neither ADD nor
              # MUL), this port performs no action at all this cycle --
              # the register is left untouched, not overwritten.
              if s.cfg_reduce_op == OPT_VEC_REDUCE_ADD:
                if s.commit_count[i] == MaxThreadType( 0 ):
                  s.reduce_regfile[r] <<= s.recv_data[i]
                else:
                  s.reduce_regfile[r] <<= s.reduce_regfile[r] + s.recv_data[i]
              elif s.cfg_reduce_op == OPT_VEC_REDUCE_MUL:
                if s.commit_count[i] == MaxThreadType( 0 ):
                  s.reduce_regfile[r] <<= s.recv_data[i]
                else:
                  s.reduce_regfile[r] <<= s.reduce_regfile[r] * s.recv_data[i]

  def line_trace( s ):
    return "reduce(" + "|".join(
        str( int( s.reduce_regfile[r] ) ) for r in range( len( s.reduce_regfile ) )
    ) + ")"
