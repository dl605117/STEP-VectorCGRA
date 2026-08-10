"""
Directed unit test for the (simplified, per Darren's 2026-08-04 review)
STEP_FabricReduceUnitRTL, in isolation from STEP_RegisterFileControllerRTL.
"""
from pymtl3 import *
from ..STEP_FabricReduceUnitRTL import STEP_FabricReduceUnitRTL
from ...lib.opt_type import OPT_VEC_REDUCE_ADD, OPT_VEC_REDUCE_MUL


def mk_dut(num_wr_ports=2):
    RegDataType = mk_bits(16)
    dut = STEP_FabricReduceUnitRTL(RegDataType, num_wr_ports)
    dut.apply(DefaultPassGroup())
    dut.sim_reset()
    return dut, RegDataType


def tick(dut):
    dut.sim_tick()


def commit(dut, RegDataType, port, value, count, pred=1, addr=0):
    for i in range(len(dut.recv_valid)):
        dut.recv_valid[i] @= b1(0)
    dut.recv_data[port] @= RegDataType(value)
    dut.recv_valid[port] @= b1(1)
    dut.recv_pred[port] @= b1(pred)
    dut.commit_count[port] @= count
    dut.cfg_reduce_addr[port] @= addr
    tick(dut)


def test_add_reduce():
    # commit_count mirrors the parent's s.wr_count[i]: 0 on the first
    # commit, incrementing thereafter -- this is what tells the unit
    # "overwrite" vs "accumulate", replacing the old cfg_start pulse.
    dut, RegDataType = mk_dut(num_wr_ports=2)
    dut.cfg_reduce_en[0] @= b1(1)
    dut.cfg_reduce_en[1] @= b1(0)
    dut.cfg_reduce_op @= OPT_VEC_REDUCE_ADD

    values = [10, 20, 30, 40]
    for count, v in enumerate(values):
        commit(dut, RegDataType, 0, v, count, pred=1, addr=0)

    assert int(dut.rd_data[0]) == sum(values), \
        f"expected {sum(values)}, got {int(dut.rd_data[0])}"
    print("test_add_reduce PASSED, rd_data[0] =", int(dut.rd_data[0]))


def test_mul_reduce():
    dut, RegDataType = mk_dut(num_wr_ports=2)
    dut.cfg_reduce_en[0] @= b1(1)
    dut.cfg_reduce_en[1] @= b1(0)
    dut.cfg_reduce_op @= OPT_VEC_REDUCE_MUL

    values = [2, 3, 5]
    for count, v in enumerate(values):
        commit(dut, RegDataType, 0, v, count, pred=1, addr=1)

    expected = 2 * 3 * 5
    assert int(dut.rd_data[1]) == expected, f"expected {expected}, got {int(dut.rd_data[1])}"
    print("test_mul_reduce PASSED, rd_data[1] =", int(dut.rd_data[1]))


def test_predicate_false_is_skipped():
    # Per Darren's point 1c: only fold a contribution in if the fabric
    # predicate is also true. A false-predicate commit must be ignored
    # entirely -- the register holds, and (per the commit_count contract)
    # a later true commit at the SAME count value is treated as the
    # still-unseen "first" sample.
    dut, RegDataType = mk_dut(num_wr_ports=2)
    dut.cfg_reduce_en[0] @= b1(1)
    dut.cfg_reduce_op @= OPT_VEC_REDUCE_ADD

    # count=0, predicate FALSE: must be ignored (register stays 0).
    commit(dut, RegDataType, 0, 99, count=0, pred=0, addr=2)
    assert int(dut.rd_data[2]) == 0, f"predicate-false commit was not ignored: got {int(dut.rd_data[2])}"

    # count=0, predicate TRUE: this is the real first sample.
    commit(dut, RegDataType, 0, 7, count=0, pred=1, addr=2)
    assert int(dut.rd_data[2]) == 7, f"expected 7, got {int(dut.rd_data[2])}"
    print("test_predicate_false_is_skipped PASSED, rd_data[2] =", int(dut.rd_data[2]))


def test_two_ports_independent_addresses():
    # Point 1a: each wr_port accumulates into its OWN dedicated address;
    # two ports active the same cycle, different addresses, must not
    # interfere with each other.
    dut, RegDataType = mk_dut(num_wr_ports=2)
    dut.cfg_reduce_en[0] @= b1(1)
    dut.cfg_reduce_en[1] @= b1(1)
    dut.cfg_reduce_op @= OPT_VEC_REDUCE_ADD
    dut.cfg_reduce_addr[0] @= 3
    dut.cfg_reduce_addr[1] @= 4

    dut.recv_valid[0] @= b1(1)
    dut.recv_data[0] @= RegDataType(11)
    dut.recv_pred[0] @= b1(1)
    dut.commit_count[0] @= 0
    dut.recv_valid[1] @= b1(1)
    dut.recv_data[1] @= RegDataType(22)
    dut.recv_pred[1] @= b1(1)
    dut.commit_count[1] @= 0
    tick(dut)

    assert int(dut.rd_data[3]) == 11
    assert int(dut.rd_data[4]) == 22
    print("test_two_ports_independent_addresses PASSED")


def test_holds_when_no_valid_commit():
    # Point 1b: no valid operand this cycle -> register holds.
    dut, RegDataType = mk_dut(num_wr_ports=2)
    dut.cfg_reduce_en[0] @= b1(1)
    dut.cfg_reduce_op @= OPT_VEC_REDUCE_ADD
    commit(dut, RegDataType, 0, 5, count=0, pred=1, addr=5)
    assert int(dut.rd_data[5]) == 5

    for i in range(2):
        dut.recv_valid[i] @= b1(0)
    tick(dut)
    tick(dut)
    assert int(dut.rd_data[5]) == 5, "register should hold when no valid commit arrives"
    print("test_holds_when_no_valid_commit PASSED")


if __name__ == "__main__":
    test_add_reduce()
    test_mul_reduce()
    test_predicate_false_is_skipped()
    test_two_ports_independent_addresses()
    test_holds_when_no_valid_commit()
