
// VT_INPUT_DELAY, VTB_OUTPUT_ASSERT_DELAY are timestamps relative to the rising edge.
`define VTB_INPUT_DELAY 1
`define VTB_OUTPUT_ASSERT_DELAY 3

// CYCLE_TIME and INTRA_CYCLE_TIME are duration of time.
`define CYCLE_TIME 4
`define INTRA_CYCLE_TIME (`VTB_OUTPUT_ASSERT_DELAY-`VTB_INPUT_DELAY)

`timescale 1ns/1ns

`define T(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58,a59,a60,a61,a62,a63,a64,a65,a66,a67,a68,a69,a70,a71,a72,a73,a74,a75,a76,a77,a78,a79,a80,a81,a82,a83,a84,a85,a86,a87,a88,a89,a90,a91,a92,a93,a94,a95,a96,a97,a98,a99,a100,a101,a102,a103,a104,a105,a106,a107,a108,a109,a110) \
        t(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58,a59,a60,a61,a62,a63,a64,a65,a66,a67,a68,a69,a70,a71,a72,a73,a74,a75,a76,a77,a78,a79,a80,a81,a82,a83,a84,a85,a86,a87,a88,a89,a90,a91,a92,a93,a94,a95,a96,a97,a98,a99,a100,a101,a102,a103,a104,a105,a106,a107,a108,a109,a110,`__LINE__)

// Tick one extra cycle upon an error.
`define VTB_TEST_FAIL(lineno, out, ref, port_name) \
    $display("- Timestamp      : %0d (default unit: ns)", $time); \
    $display("- Cycle number   : %0d (variable: cycle_count)", cycle_count); \
    $display("- line number    : line %0d in CgraRTL__087ebbb3e3bb3520_test_run_generic_tb.v.cases", lineno); \
    $display("- port name      : %s", port_name); \
    $display("- expected value : 0x%x", ref); \
    $display("- actual value   : 0x%x", out); \
    $display(""); \
    #(`CYCLE_TIME-`INTRA_CYCLE_TIME); \
    cycle_count += 1; \
    #`CYCLE_TIME; \
    cycle_count += 1; \
    $fatal;

`define CHECK(lineno, out, ref, port_name) \
  if ((|(out ^ out)) == 1'b0) ; \
  else begin \
    $display(""); \
    $display("The test bench received a value containing X/Z's! Please note"); \
    $display("that the VTB is pessmistic about X's and you should make sure"); \
    $display("all output ports of your DUT does not produce X's after reset."); \
    `VTB_TEST_FAIL(lineno, out, ref, port_name) \
  end \
  if (out != ref) begin \
    $display(""); \
    $display("The test bench received an incorrect value!"); \
    `VTB_TEST_FAIL(lineno, out, ref, port_name) \
  end

module CgraRTL__087ebbb3e3bb3520_tb;
  // convention
  logic clk;
  logic reset;
  integer cycle_count;

  logic [6:0] address_lower ;
  logic [6:0] address_upper ;
  logic [1:0] cgra_id ;
  logic [34:0] recv_data_on_boundary_east__msg [0:3];
  logic [0:0] recv_data_on_boundary_east__rdy [0:3];
  logic [0:0] recv_data_on_boundary_east__val [0:3];
  logic [34:0] recv_data_on_boundary_north__msg [0:3];
  logic [0:0] recv_data_on_boundary_north__rdy [0:3];
  logic [0:0] recv_data_on_boundary_north__val [0:3];
  logic [34:0] recv_data_on_boundary_south__msg [0:3];
  logic [0:0] recv_data_on_boundary_south__rdy [0:3];
  logic [0:0] recv_data_on_boundary_south__val [0:3];
  logic [34:0] recv_data_on_boundary_west__msg [0:3];
  logic [0:0] recv_data_on_boundary_west__rdy [0:3];
  logic [0:0] recv_data_on_boundary_west__val [0:3];
  logic [181:0] recv_from_cpu_pkt__msg ;
  logic [0:0] recv_from_cpu_pkt__rdy ;
  logic [0:0] recv_from_cpu_pkt__val ;
  logic [182:0] recv_from_inter_cgra_noc__msg ;
  logic [0:0] recv_from_inter_cgra_noc__rdy ;
  logic [0:0] recv_from_inter_cgra_noc__val ;
  logic [34:0] send_data_on_boundary_east__msg [0:3];
  logic [0:0] send_data_on_boundary_east__rdy [0:3];
  logic [0:0] send_data_on_boundary_east__val [0:3];
  logic [34:0] send_data_on_boundary_north__msg [0:3];
  logic [0:0] send_data_on_boundary_north__rdy [0:3];
  logic [0:0] send_data_on_boundary_north__val [0:3];
  logic [34:0] send_data_on_boundary_south__msg [0:3];
  logic [0:0] send_data_on_boundary_south__rdy [0:3];
  logic [0:0] send_data_on_boundary_south__val [0:3];
  logic [34:0] send_data_on_boundary_west__msg [0:3];
  logic [0:0] send_data_on_boundary_west__rdy [0:3];
  logic [0:0] send_data_on_boundary_west__val [0:3];
  logic [181:0] send_to_cpu_pkt__msg ;
  logic [0:0] send_to_cpu_pkt__rdy ;
  logic [0:0] send_to_cpu_pkt__val ;
  logic [182:0] send_to_inter_cgra_noc__msg ;
  logic [0:0] send_to_inter_cgra_noc__rdy ;
  logic [0:0] send_to_inter_cgra_noc__val ;

  task t(
    input logic [6:0] inp_address_lower,
    input logic [6:0] inp_address_upper,
    input logic [1:0] inp_cgra_id,
    input logic [34:0] inp_recv_data_on_boundary_east__msg__0,
    input logic [34:0] inp_recv_data_on_boundary_east__msg__1,
    input logic [34:0] inp_recv_data_on_boundary_east__msg__2,
    input logic [34:0] inp_recv_data_on_boundary_east__msg__3,
    input logic [0:0] ref_recv_data_on_boundary_east__rdy__0,
    input logic [0:0] ref_recv_data_on_boundary_east__rdy__1,
    input logic [0:0] ref_recv_data_on_boundary_east__rdy__2,
    input logic [0:0] ref_recv_data_on_boundary_east__rdy__3,
    input logic [0:0] inp_recv_data_on_boundary_east__val__0,
    input logic [0:0] inp_recv_data_on_boundary_east__val__1,
    input logic [0:0] inp_recv_data_on_boundary_east__val__2,
    input logic [0:0] inp_recv_data_on_boundary_east__val__3,
    input logic [34:0] inp_recv_data_on_boundary_north__msg__0,
    input logic [34:0] inp_recv_data_on_boundary_north__msg__1,
    input logic [34:0] inp_recv_data_on_boundary_north__msg__2,
    input logic [34:0] inp_recv_data_on_boundary_north__msg__3,
    input logic [0:0] ref_recv_data_on_boundary_north__rdy__0,
    input logic [0:0] ref_recv_data_on_boundary_north__rdy__1,
    input logic [0:0] ref_recv_data_on_boundary_north__rdy__2,
    input logic [0:0] ref_recv_data_on_boundary_north__rdy__3,
    input logic [0:0] inp_recv_data_on_boundary_north__val__0,
    input logic [0:0] inp_recv_data_on_boundary_north__val__1,
    input logic [0:0] inp_recv_data_on_boundary_north__val__2,
    input logic [0:0] inp_recv_data_on_boundary_north__val__3,
    input logic [34:0] inp_recv_data_on_boundary_south__msg__0,
    input logic [34:0] inp_recv_data_on_boundary_south__msg__1,
    input logic [34:0] inp_recv_data_on_boundary_south__msg__2,
    input logic [34:0] inp_recv_data_on_boundary_south__msg__3,
    input logic [0:0] ref_recv_data_on_boundary_south__rdy__0,
    input logic [0:0] ref_recv_data_on_boundary_south__rdy__1,
    input logic [0:0] ref_recv_data_on_boundary_south__rdy__2,
    input logic [0:0] ref_recv_data_on_boundary_south__rdy__3,
    input logic [0:0] inp_recv_data_on_boundary_south__val__0,
    input logic [0:0] inp_recv_data_on_boundary_south__val__1,
    input logic [0:0] inp_recv_data_on_boundary_south__val__2,
    input logic [0:0] inp_recv_data_on_boundary_south__val__3,
    input logic [34:0] inp_recv_data_on_boundary_west__msg__0,
    input logic [34:0] inp_recv_data_on_boundary_west__msg__1,
    input logic [34:0] inp_recv_data_on_boundary_west__msg__2,
    input logic [34:0] inp_recv_data_on_boundary_west__msg__3,
    input logic [0:0] ref_recv_data_on_boundary_west__rdy__0,
    input logic [0:0] ref_recv_data_on_boundary_west__rdy__1,
    input logic [0:0] ref_recv_data_on_boundary_west__rdy__2,
    input logic [0:0] ref_recv_data_on_boundary_west__rdy__3,
    input logic [0:0] inp_recv_data_on_boundary_west__val__0,
    input logic [0:0] inp_recv_data_on_boundary_west__val__1,
    input logic [0:0] inp_recv_data_on_boundary_west__val__2,
    input logic [0:0] inp_recv_data_on_boundary_west__val__3,
    input logic [181:0] inp_recv_from_cpu_pkt__msg,
    input logic [0:0] ref_recv_from_cpu_pkt__rdy,
    input logic [0:0] inp_recv_from_cpu_pkt__val,
    input logic [182:0] inp_recv_from_inter_cgra_noc__msg,
    input logic [0:0] ref_recv_from_inter_cgra_noc__rdy,
    input logic [0:0] inp_recv_from_inter_cgra_noc__val,
    input logic [34:0] ref_send_data_on_boundary_east__msg__0,
    input logic [34:0] ref_send_data_on_boundary_east__msg__1,
    input logic [34:0] ref_send_data_on_boundary_east__msg__2,
    input logic [34:0] ref_send_data_on_boundary_east__msg__3,
    input logic [0:0] inp_send_data_on_boundary_east__rdy__0,
    input logic [0:0] inp_send_data_on_boundary_east__rdy__1,
    input logic [0:0] inp_send_data_on_boundary_east__rdy__2,
    input logic [0:0] inp_send_data_on_boundary_east__rdy__3,
    input logic [0:0] ref_send_data_on_boundary_east__val__0,
    input logic [0:0] ref_send_data_on_boundary_east__val__1,
    input logic [0:0] ref_send_data_on_boundary_east__val__2,
    input logic [0:0] ref_send_data_on_boundary_east__val__3,
    input logic [34:0] ref_send_data_on_boundary_north__msg__0,
    input logic [34:0] ref_send_data_on_boundary_north__msg__1,
    input logic [34:0] ref_send_data_on_boundary_north__msg__2,
    input logic [34:0] ref_send_data_on_boundary_north__msg__3,
    input logic [0:0] inp_send_data_on_boundary_north__rdy__0,
    input logic [0:0] inp_send_data_on_boundary_north__rdy__1,
    input logic [0:0] inp_send_data_on_boundary_north__rdy__2,
    input logic [0:0] inp_send_data_on_boundary_north__rdy__3,
    input logic [0:0] ref_send_data_on_boundary_north__val__0,
    input logic [0:0] ref_send_data_on_boundary_north__val__1,
    input logic [0:0] ref_send_data_on_boundary_north__val__2,
    input logic [0:0] ref_send_data_on_boundary_north__val__3,
    input logic [34:0] ref_send_data_on_boundary_south__msg__0,
    input logic [34:0] ref_send_data_on_boundary_south__msg__1,
    input logic [34:0] ref_send_data_on_boundary_south__msg__2,
    input logic [34:0] ref_send_data_on_boundary_south__msg__3,
    input logic [0:0] inp_send_data_on_boundary_south__rdy__0,
    input logic [0:0] inp_send_data_on_boundary_south__rdy__1,
    input logic [0:0] inp_send_data_on_boundary_south__rdy__2,
    input logic [0:0] inp_send_data_on_boundary_south__rdy__3,
    input logic [0:0] ref_send_data_on_boundary_south__val__0,
    input logic [0:0] ref_send_data_on_boundary_south__val__1,
    input logic [0:0] ref_send_data_on_boundary_south__val__2,
    input logic [0:0] ref_send_data_on_boundary_south__val__3,
    input logic [34:0] ref_send_data_on_boundary_west__msg__0,
    input logic [34:0] ref_send_data_on_boundary_west__msg__1,
    input logic [34:0] ref_send_data_on_boundary_west__msg__2,
    input logic [34:0] ref_send_data_on_boundary_west__msg__3,
    input logic [0:0] inp_send_data_on_boundary_west__rdy__0,
    input logic [0:0] inp_send_data_on_boundary_west__rdy__1,
    input logic [0:0] inp_send_data_on_boundary_west__rdy__2,
    input logic [0:0] inp_send_data_on_boundary_west__rdy__3,
    input logic [0:0] ref_send_data_on_boundary_west__val__0,
    input logic [0:0] ref_send_data_on_boundary_west__val__1,
    input logic [0:0] ref_send_data_on_boundary_west__val__2,
    input logic [0:0] ref_send_data_on_boundary_west__val__3,
    input logic [181:0] ref_send_to_cpu_pkt__msg,
    input logic [0:0] inp_send_to_cpu_pkt__rdy,
    input logic [0:0] ref_send_to_cpu_pkt__val,
    input logic [182:0] ref_send_to_inter_cgra_noc__msg,
    input logic [0:0] inp_send_to_inter_cgra_noc__rdy,
    input logic [0:0] ref_send_to_inter_cgra_noc__val,
    integer lineno
  );
  begin
    address_lower = inp_address_lower;
    address_upper = inp_address_upper;
    cgra_id = inp_cgra_id;
    recv_data_on_boundary_east__msg[0] = inp_recv_data_on_boundary_east__msg__0;
    recv_data_on_boundary_east__msg[1] = inp_recv_data_on_boundary_east__msg__1;
    recv_data_on_boundary_east__msg[2] = inp_recv_data_on_boundary_east__msg__2;
    recv_data_on_boundary_east__msg[3] = inp_recv_data_on_boundary_east__msg__3;
    recv_data_on_boundary_east__val[0] = inp_recv_data_on_boundary_east__val__0;
    recv_data_on_boundary_east__val[1] = inp_recv_data_on_boundary_east__val__1;
    recv_data_on_boundary_east__val[2] = inp_recv_data_on_boundary_east__val__2;
    recv_data_on_boundary_east__val[3] = inp_recv_data_on_boundary_east__val__3;
    recv_data_on_boundary_north__msg[0] = inp_recv_data_on_boundary_north__msg__0;
    recv_data_on_boundary_north__msg[1] = inp_recv_data_on_boundary_north__msg__1;
    recv_data_on_boundary_north__msg[2] = inp_recv_data_on_boundary_north__msg__2;
    recv_data_on_boundary_north__msg[3] = inp_recv_data_on_boundary_north__msg__3;
    recv_data_on_boundary_north__val[0] = inp_recv_data_on_boundary_north__val__0;
    recv_data_on_boundary_north__val[1] = inp_recv_data_on_boundary_north__val__1;
    recv_data_on_boundary_north__val[2] = inp_recv_data_on_boundary_north__val__2;
    recv_data_on_boundary_north__val[3] = inp_recv_data_on_boundary_north__val__3;
    recv_data_on_boundary_south__msg[0] = inp_recv_data_on_boundary_south__msg__0;
    recv_data_on_boundary_south__msg[1] = inp_recv_data_on_boundary_south__msg__1;
    recv_data_on_boundary_south__msg[2] = inp_recv_data_on_boundary_south__msg__2;
    recv_data_on_boundary_south__msg[3] = inp_recv_data_on_boundary_south__msg__3;
    recv_data_on_boundary_south__val[0] = inp_recv_data_on_boundary_south__val__0;
    recv_data_on_boundary_south__val[1] = inp_recv_data_on_boundary_south__val__1;
    recv_data_on_boundary_south__val[2] = inp_recv_data_on_boundary_south__val__2;
    recv_data_on_boundary_south__val[3] = inp_recv_data_on_boundary_south__val__3;
    recv_data_on_boundary_west__msg[0] = inp_recv_data_on_boundary_west__msg__0;
    recv_data_on_boundary_west__msg[1] = inp_recv_data_on_boundary_west__msg__1;
    recv_data_on_boundary_west__msg[2] = inp_recv_data_on_boundary_west__msg__2;
    recv_data_on_boundary_west__msg[3] = inp_recv_data_on_boundary_west__msg__3;
    recv_data_on_boundary_west__val[0] = inp_recv_data_on_boundary_west__val__0;
    recv_data_on_boundary_west__val[1] = inp_recv_data_on_boundary_west__val__1;
    recv_data_on_boundary_west__val[2] = inp_recv_data_on_boundary_west__val__2;
    recv_data_on_boundary_west__val[3] = inp_recv_data_on_boundary_west__val__3;
    recv_from_cpu_pkt__msg = inp_recv_from_cpu_pkt__msg;
    recv_from_cpu_pkt__val = inp_recv_from_cpu_pkt__val;
    recv_from_inter_cgra_noc__msg = inp_recv_from_inter_cgra_noc__msg;
    recv_from_inter_cgra_noc__val = inp_recv_from_inter_cgra_noc__val;
    send_data_on_boundary_east__rdy[0] = inp_send_data_on_boundary_east__rdy__0;
    send_data_on_boundary_east__rdy[1] = inp_send_data_on_boundary_east__rdy__1;
    send_data_on_boundary_east__rdy[2] = inp_send_data_on_boundary_east__rdy__2;
    send_data_on_boundary_east__rdy[3] = inp_send_data_on_boundary_east__rdy__3;
    send_data_on_boundary_north__rdy[0] = inp_send_data_on_boundary_north__rdy__0;
    send_data_on_boundary_north__rdy[1] = inp_send_data_on_boundary_north__rdy__1;
    send_data_on_boundary_north__rdy[2] = inp_send_data_on_boundary_north__rdy__2;
    send_data_on_boundary_north__rdy[3] = inp_send_data_on_boundary_north__rdy__3;
    send_data_on_boundary_south__rdy[0] = inp_send_data_on_boundary_south__rdy__0;
    send_data_on_boundary_south__rdy[1] = inp_send_data_on_boundary_south__rdy__1;
    send_data_on_boundary_south__rdy[2] = inp_send_data_on_boundary_south__rdy__2;
    send_data_on_boundary_south__rdy[3] = inp_send_data_on_boundary_south__rdy__3;
    send_data_on_boundary_west__rdy[0] = inp_send_data_on_boundary_west__rdy__0;
    send_data_on_boundary_west__rdy[1] = inp_send_data_on_boundary_west__rdy__1;
    send_data_on_boundary_west__rdy[2] = inp_send_data_on_boundary_west__rdy__2;
    send_data_on_boundary_west__rdy[3] = inp_send_data_on_boundary_west__rdy__3;
    send_to_cpu_pkt__rdy = inp_send_to_cpu_pkt__rdy;
    send_to_inter_cgra_noc__rdy = inp_send_to_inter_cgra_noc__rdy;
    #`INTRA_CYCLE_TIME;
    `CHECK(lineno, recv_data_on_boundary_east__rdy[0], ref_recv_data_on_boundary_east__rdy__0, "recv_data_on_boundary_east[0].rdy (recv_data_on_boundary_east__rdy[0] in Verilog)");
    `CHECK(lineno, recv_data_on_boundary_east__rdy[1], ref_recv_data_on_boundary_east__rdy__1, "recv_data_on_boundary_east[1].rdy (recv_data_on_boundary_east__rdy[1] in Verilog)");
    `CHECK(lineno, recv_data_on_boundary_east__rdy[2], ref_recv_data_on_boundary_east__rdy__2, "recv_data_on_boundary_east[2].rdy (recv_data_on_boundary_east__rdy[2] in Verilog)");
    `CHECK(lineno, recv_data_on_boundary_east__rdy[3], ref_recv_data_on_boundary_east__rdy__3, "recv_data_on_boundary_east[3].rdy (recv_data_on_boundary_east__rdy[3] in Verilog)");
    `CHECK(lineno, recv_data_on_boundary_north__rdy[0], ref_recv_data_on_boundary_north__rdy__0, "recv_data_on_boundary_north[0].rdy (recv_data_on_boundary_north__rdy[0] in Verilog)");
    `CHECK(lineno, recv_data_on_boundary_north__rdy[1], ref_recv_data_on_boundary_north__rdy__1, "recv_data_on_boundary_north[1].rdy (recv_data_on_boundary_north__rdy[1] in Verilog)");
    `CHECK(lineno, recv_data_on_boundary_north__rdy[2], ref_recv_data_on_boundary_north__rdy__2, "recv_data_on_boundary_north[2].rdy (recv_data_on_boundary_north__rdy[2] in Verilog)");
    `CHECK(lineno, recv_data_on_boundary_north__rdy[3], ref_recv_data_on_boundary_north__rdy__3, "recv_data_on_boundary_north[3].rdy (recv_data_on_boundary_north__rdy[3] in Verilog)");
    `CHECK(lineno, recv_data_on_boundary_south__rdy[0], ref_recv_data_on_boundary_south__rdy__0, "recv_data_on_boundary_south[0].rdy (recv_data_on_boundary_south__rdy[0] in Verilog)");
    `CHECK(lineno, recv_data_on_boundary_south__rdy[1], ref_recv_data_on_boundary_south__rdy__1, "recv_data_on_boundary_south[1].rdy (recv_data_on_boundary_south__rdy[1] in Verilog)");
    `CHECK(lineno, recv_data_on_boundary_south__rdy[2], ref_recv_data_on_boundary_south__rdy__2, "recv_data_on_boundary_south[2].rdy (recv_data_on_boundary_south__rdy[2] in Verilog)");
    `CHECK(lineno, recv_data_on_boundary_south__rdy[3], ref_recv_data_on_boundary_south__rdy__3, "recv_data_on_boundary_south[3].rdy (recv_data_on_boundary_south__rdy[3] in Verilog)");
    `CHECK(lineno, recv_data_on_boundary_west__rdy[0], ref_recv_data_on_boundary_west__rdy__0, "recv_data_on_boundary_west[0].rdy (recv_data_on_boundary_west__rdy[0] in Verilog)");
    `CHECK(lineno, recv_data_on_boundary_west__rdy[1], ref_recv_data_on_boundary_west__rdy__1, "recv_data_on_boundary_west[1].rdy (recv_data_on_boundary_west__rdy[1] in Verilog)");
    `CHECK(lineno, recv_data_on_boundary_west__rdy[2], ref_recv_data_on_boundary_west__rdy__2, "recv_data_on_boundary_west[2].rdy (recv_data_on_boundary_west__rdy[2] in Verilog)");
    `CHECK(lineno, recv_data_on_boundary_west__rdy[3], ref_recv_data_on_boundary_west__rdy__3, "recv_data_on_boundary_west[3].rdy (recv_data_on_boundary_west__rdy[3] in Verilog)");
    `CHECK(lineno, recv_from_cpu_pkt__rdy, ref_recv_from_cpu_pkt__rdy, "recv_from_cpu_pkt.rdy (recv_from_cpu_pkt__rdy in Verilog)");
    `CHECK(lineno, recv_from_inter_cgra_noc__rdy, ref_recv_from_inter_cgra_noc__rdy, "recv_from_inter_cgra_noc.rdy (recv_from_inter_cgra_noc__rdy in Verilog)");
    `CHECK(lineno, send_data_on_boundary_east__msg[0], ref_send_data_on_boundary_east__msg__0, "send_data_on_boundary_east[0].msg (send_data_on_boundary_east__msg[0] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_east__msg[1], ref_send_data_on_boundary_east__msg__1, "send_data_on_boundary_east[1].msg (send_data_on_boundary_east__msg[1] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_east__msg[2], ref_send_data_on_boundary_east__msg__2, "send_data_on_boundary_east[2].msg (send_data_on_boundary_east__msg[2] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_east__msg[3], ref_send_data_on_boundary_east__msg__3, "send_data_on_boundary_east[3].msg (send_data_on_boundary_east__msg[3] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_east__val[0], ref_send_data_on_boundary_east__val__0, "send_data_on_boundary_east[0].val (send_data_on_boundary_east__val[0] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_east__val[1], ref_send_data_on_boundary_east__val__1, "send_data_on_boundary_east[1].val (send_data_on_boundary_east__val[1] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_east__val[2], ref_send_data_on_boundary_east__val__2, "send_data_on_boundary_east[2].val (send_data_on_boundary_east__val[2] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_east__val[3], ref_send_data_on_boundary_east__val__3, "send_data_on_boundary_east[3].val (send_data_on_boundary_east__val[3] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_north__msg[0], ref_send_data_on_boundary_north__msg__0, "send_data_on_boundary_north[0].msg (send_data_on_boundary_north__msg[0] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_north__msg[1], ref_send_data_on_boundary_north__msg__1, "send_data_on_boundary_north[1].msg (send_data_on_boundary_north__msg[1] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_north__msg[2], ref_send_data_on_boundary_north__msg__2, "send_data_on_boundary_north[2].msg (send_data_on_boundary_north__msg[2] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_north__msg[3], ref_send_data_on_boundary_north__msg__3, "send_data_on_boundary_north[3].msg (send_data_on_boundary_north__msg[3] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_north__val[0], ref_send_data_on_boundary_north__val__0, "send_data_on_boundary_north[0].val (send_data_on_boundary_north__val[0] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_north__val[1], ref_send_data_on_boundary_north__val__1, "send_data_on_boundary_north[1].val (send_data_on_boundary_north__val[1] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_north__val[2], ref_send_data_on_boundary_north__val__2, "send_data_on_boundary_north[2].val (send_data_on_boundary_north__val[2] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_north__val[3], ref_send_data_on_boundary_north__val__3, "send_data_on_boundary_north[3].val (send_data_on_boundary_north__val[3] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_south__msg[0], ref_send_data_on_boundary_south__msg__0, "send_data_on_boundary_south[0].msg (send_data_on_boundary_south__msg[0] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_south__msg[1], ref_send_data_on_boundary_south__msg__1, "send_data_on_boundary_south[1].msg (send_data_on_boundary_south__msg[1] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_south__msg[2], ref_send_data_on_boundary_south__msg__2, "send_data_on_boundary_south[2].msg (send_data_on_boundary_south__msg[2] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_south__msg[3], ref_send_data_on_boundary_south__msg__3, "send_data_on_boundary_south[3].msg (send_data_on_boundary_south__msg[3] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_south__val[0], ref_send_data_on_boundary_south__val__0, "send_data_on_boundary_south[0].val (send_data_on_boundary_south__val[0] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_south__val[1], ref_send_data_on_boundary_south__val__1, "send_data_on_boundary_south[1].val (send_data_on_boundary_south__val[1] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_south__val[2], ref_send_data_on_boundary_south__val__2, "send_data_on_boundary_south[2].val (send_data_on_boundary_south__val[2] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_south__val[3], ref_send_data_on_boundary_south__val__3, "send_data_on_boundary_south[3].val (send_data_on_boundary_south__val[3] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_west__msg[0], ref_send_data_on_boundary_west__msg__0, "send_data_on_boundary_west[0].msg (send_data_on_boundary_west__msg[0] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_west__msg[1], ref_send_data_on_boundary_west__msg__1, "send_data_on_boundary_west[1].msg (send_data_on_boundary_west__msg[1] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_west__msg[2], ref_send_data_on_boundary_west__msg__2, "send_data_on_boundary_west[2].msg (send_data_on_boundary_west__msg[2] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_west__msg[3], ref_send_data_on_boundary_west__msg__3, "send_data_on_boundary_west[3].msg (send_data_on_boundary_west__msg[3] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_west__val[0], ref_send_data_on_boundary_west__val__0, "send_data_on_boundary_west[0].val (send_data_on_boundary_west__val[0] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_west__val[1], ref_send_data_on_boundary_west__val__1, "send_data_on_boundary_west[1].val (send_data_on_boundary_west__val[1] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_west__val[2], ref_send_data_on_boundary_west__val__2, "send_data_on_boundary_west[2].val (send_data_on_boundary_west__val[2] in Verilog)");
    `CHECK(lineno, send_data_on_boundary_west__val[3], ref_send_data_on_boundary_west__val__3, "send_data_on_boundary_west[3].val (send_data_on_boundary_west__val[3] in Verilog)");
    `CHECK(lineno, send_to_cpu_pkt__msg, ref_send_to_cpu_pkt__msg, "send_to_cpu_pkt.msg (send_to_cpu_pkt__msg in Verilog)");
    `CHECK(lineno, send_to_cpu_pkt__val, ref_send_to_cpu_pkt__val, "send_to_cpu_pkt.val (send_to_cpu_pkt__val in Verilog)");
    `CHECK(lineno, send_to_inter_cgra_noc__msg, ref_send_to_inter_cgra_noc__msg, "send_to_inter_cgra_noc.msg (send_to_inter_cgra_noc__msg in Verilog)");
    `CHECK(lineno, send_to_inter_cgra_noc__val, ref_send_to_inter_cgra_noc__val, "send_to_inter_cgra_noc.val (send_to_inter_cgra_noc__val in Verilog)");
    #(`CYCLE_TIME-`INTRA_CYCLE_TIME);
    cycle_count += 1;
  end
  endtask

  // use 25% clock cycle, so #1 for setup #2 for sim #1 for hold
  always #(`CYCLE_TIME/2) clk = ~clk;

  // DUT name
  // By default we use the translated name of the Verilog component. But you can change
  // that by defining the VTB_TOP_MODULE_NAME macro through the simulator command line
  // options (e.g., for VCS you can do +define+VTB_TOP_MODULE_NAME=YourTopModuleName).
`ifdef VTB_TOP_MODULE_NAME
  `VTB_TOP_MODULE_NAME DUT
`else
  CgraRTL__087ebbb3e3bb3520 DUT
`endif
  (
    .clk(clk),
    .reset(reset),
    .address_lower(address_lower),
    .address_upper(address_upper),
    .cgra_id(cgra_id),
    .recv_data_on_boundary_east__msg({ >> { recv_data_on_boundary_east__msg } }),
    .recv_data_on_boundary_east__rdy({ >> { recv_data_on_boundary_east__rdy } }),
    .recv_data_on_boundary_east__val({ >> { recv_data_on_boundary_east__val } }),
    .recv_data_on_boundary_north__msg({ >> { recv_data_on_boundary_north__msg } }),
    .recv_data_on_boundary_north__rdy({ >> { recv_data_on_boundary_north__rdy } }),
    .recv_data_on_boundary_north__val({ >> { recv_data_on_boundary_north__val } }),
    .recv_data_on_boundary_south__msg({ >> { recv_data_on_boundary_south__msg } }),
    .recv_data_on_boundary_south__rdy({ >> { recv_data_on_boundary_south__rdy } }),
    .recv_data_on_boundary_south__val({ >> { recv_data_on_boundary_south__val } }),
    .recv_data_on_boundary_west__msg({ >> { recv_data_on_boundary_west__msg } }),
    .recv_data_on_boundary_west__rdy({ >> { recv_data_on_boundary_west__rdy } }),
    .recv_data_on_boundary_west__val({ >> { recv_data_on_boundary_west__val } }),
    .recv_from_cpu_pkt__msg(recv_from_cpu_pkt__msg),
    .recv_from_cpu_pkt__rdy(recv_from_cpu_pkt__rdy),
    .recv_from_cpu_pkt__val(recv_from_cpu_pkt__val),
    .recv_from_inter_cgra_noc__msg(recv_from_inter_cgra_noc__msg),
    .recv_from_inter_cgra_noc__rdy(recv_from_inter_cgra_noc__rdy),
    .recv_from_inter_cgra_noc__val(recv_from_inter_cgra_noc__val),
    .send_data_on_boundary_east__msg({ >> { send_data_on_boundary_east__msg } }),
    .send_data_on_boundary_east__rdy({ >> { send_data_on_boundary_east__rdy } }),
    .send_data_on_boundary_east__val({ >> { send_data_on_boundary_east__val } }),
    .send_data_on_boundary_north__msg({ >> { send_data_on_boundary_north__msg } }),
    .send_data_on_boundary_north__rdy({ >> { send_data_on_boundary_north__rdy } }),
    .send_data_on_boundary_north__val({ >> { send_data_on_boundary_north__val } }),
    .send_data_on_boundary_south__msg({ >> { send_data_on_boundary_south__msg } }),
    .send_data_on_boundary_south__rdy({ >> { send_data_on_boundary_south__rdy } }),
    .send_data_on_boundary_south__val({ >> { send_data_on_boundary_south__val } }),
    .send_data_on_boundary_west__msg({ >> { send_data_on_boundary_west__msg } }),
    .send_data_on_boundary_west__rdy({ >> { send_data_on_boundary_west__rdy } }),
    .send_data_on_boundary_west__val({ >> { send_data_on_boundary_west__val } }),
    .send_to_cpu_pkt__msg(send_to_cpu_pkt__msg),
    .send_to_cpu_pkt__rdy(send_to_cpu_pkt__rdy),
    .send_to_cpu_pkt__val(send_to_cpu_pkt__val),
    .send_to_inter_cgra_noc__msg(send_to_inter_cgra_noc__msg),
    .send_to_inter_cgra_noc__rdy(send_to_inter_cgra_noc__rdy),
    .send_to_inter_cgra_noc__val(send_to_inter_cgra_noc__val)
  );

  initial begin
    assert(0 <= `VTB_INPUT_DELAY)
      else $fatal("\n=====\n\nVTB_INPUT_DELAY should >= 0\n\n=====\n");

    assert(`VTB_INPUT_DELAY < `VTB_OUTPUT_ASSERT_DELAY)
      else $fatal("\n=====\n\nVTB_OUTPUT_ASSERT_DELAY should be larger than VTB_INPUT_DELAY\n\n=====\n");

    assert(`VTB_OUTPUT_ASSERT_DELAY <= `CYCLE_TIME)
      else $fatal("\n=====\n\nVTB_OUTPUT_ASSERT_DELAY should be smaller than or equal to CYCLE_TIME\n\n=====\n");

    cycle_count = 0;
    clk   = 1'b0; // NEED TO DO THIS TO HAVE FALLING EDGE AT TIME 0
    reset = 1'b1; // TODO reset active low/high
    #(`CYCLE_TIME/2);

    // Now we are talking
    #`VTB_INPUT_DELAY;
    #`CYCLE_TIME;
    cycle_count = 1;
    #`CYCLE_TIME;
    cycle_count = 2;
    // 2 cycles plus input delay
    reset = 1'b0;

    `include "CgraRTL__087ebbb3e3bb3520_test_run_generic_tb.v.cases"

    $display("");
    $display("  [ passed ]");
    $display("");

    // Tick one extra cycle for better waveform
    #`CYCLE_TIME;
    cycle_count += 1;
    $finish;
  end
endmodule
