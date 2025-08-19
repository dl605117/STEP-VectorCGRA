// A well-structured testbench for verifying a CGRA kernel.
// This testbench breaks the verification process into distinct, reusable tasks:
// 1. apply_reset: Resets the CGRA to a known state.
// 2. load_configuration: Sends the bitstream from your .cases file.
// 3. load_initial_data: Writes the starting value for the kernel to CGRA memory.
// 4. execute_kernel: Allows the CGRA to run for a specified number of cycles.
// 5. read_and_verify_result: Reads the final value from memory and checks it.
// To run:
    // vcs -sverilog verify_file_driven.v CgraRTL.v -o sim_exe
    // ./sim_exe +CONFIG_FILE=my_kernel.cases

`timescale 1ns/1ns

// Standard timing definitions
`define CYCLE_TIME 10
`define VTB_INPUT_DELAY 1
`define VTB_OUTPUT_ASSERT_DELAY 9

module CgraRtl_tb;

  // Testbench signals
  logic clk;
  logic reset;
  integer cycle_count;

  [cite_start]// CGRA Interface Signals (widths match the DUT) [cite: 7, 8]
  [cite_start]logic [6:0]  address_lower; [cite: 7]
  [cite_start]logic [6:0]  address_upper; [cite: 8]
  logic [1:0]  cgra_id;

  // CPU <-> CGRA Communication Channel
  [cite_start]logic [181:0] recv_from_cpu_pkt__msg; [cite: 9]
  [cite_start]logic         recv_from_cpu_pkt__val; [cite: 9]
  [cite_start]logic         recv_from_cpu_pkt__rdy; [cite: 9]
  [cite_start]logic [181:0] send_to_cpu_pkt__msg; [cite: 10]
  [cite_start]logic         send_to_cpu_pkt__val; [cite: 10]
  [cite_start]logic         send_to_cpu_pkt__rdy; [cite: 11]

  [cite_start]// Instantiate the Device Under Test (DUT) [cite: 12]
  CgraRTL__087ebbb3e3bb3520 dut (
    .clk(clk),
    .reset(reset),
    .recv_from_cpu_pkt__msg(recv_from_cpu_pkt__msg),
    .recv_from_cpu_pkt__val(recv_from_cpu_pkt__val),
    .recv_from_cpu_pkt__rdy(recv_from_cpu_pkt__rdy),
    .send_to_cpu_pkt__msg(send_to_cpu_pkt__msg),
    .send_to_cpu_pkt__val(send_to_cpu_pkt__val),
    .send_to_cpu_pkt__rdy(send_to_cpu_pkt__rdy),
    .*
  );

  [cite_start]// Clock generator [cite: 13]
  always #(`CYCLE_TIME/2) clk = ~clk;

  // Main test sequence
  initial begin
    string config_file;

    // Look for a command-line argument to specify the .cases file
    // Example: +CONFIG_FILE=my_kernel.cases
    if (!$value$plusargs("CONFIG_FILE=%s", config_file)) begin
      $display("Error: Configuration file not specified. Use +CONFIG_FILE=<filename>");
      $finish;
    end

    $display("Testbench starting with configuration: %s", config_file);
    [cite_start]clk = 1'b0; [cite: 14]
    reset = 1'b1;
    cycle_count = 0;

    // Initialize inputs
    recv_from_cpu_pkt__val = 1'b0;
    [cite_start]send_to_cpu_pkt__rdy = 1'b0; [cite: 15]

    // 1. Reset the DUT
    [cite_start]apply_reset(); [cite: 1]

    // 2. Load configuration from the specified .cases file
    [cite_start]load_configuration(config_file); [cite: 2, 17]

    // 3. Load initial data (initialize j = 0 at address 10)
    [cite_start]load_initial_data(10, 0); [cite: 3, 18]

    // 4. Execute the kernel
    [cite_start]execute_kernel(25); [cite: 4, 19]

    // 5. Read and verify the result (expect 10 at address 10)
    [cite_start]read_and_verify_result(10, 10); [cite: 5]

    [cite_start]$display("  [ TEST PASSED ]"); [cite: 20]
    $finish;
  end

  [cite_start]// Task to advance simulation by one clock cycle [cite: 21]
  task next_cycle();
    #`CYCLE_TIME;
    cycle_count++;
  endtask

  // Task to apply reset to the DUT
  task apply_reset();
    $display("[%0d] Applying reset...", cycle_count);
    [cite_start]reset = 1'b1; [cite: 22]
    next_cycle();
    next_cycle();
    reset = 1'b0;
    [cite_start]$display("[%0d] Reset released.", cycle_count); [cite: 23]
  endtask

  [cite_start]// Task to send a single packet to the CGRA, handling val/rdy handshake [cite: 24]
  task send_cpu_pkt(input logic [181:0] pkt);
    recv_from_cpu_pkt__val = 1'b1;
    recv_from_cpu_pkt__msg = pkt;
    @(posedge clk);
    [cite_start]while (recv_from_cpu_pkt__rdy == 1'b0) begin [cite: 25]
      $display("[%0d] Waiting for CGRA to be ready for CPU packet...", cycle_count);
      [cite_start]next_cycle(); [cite: 26]
    end
    recv_from_cpu_pkt__val = 1'b0;
    $display("[%0d] CPU Packet sent successfully.", cycle_count);
    [cite_start]next_cycle(); [cite: 27]
  endtask

  // *** MODIFIED TASK ***
  // Task to read a .cases file and send its contents as configuration packets.
  task load_configuration(input string filename);
    integer file_handle;
    logic [179:0] config_data;

    $display("[%0d] --- Phase: Loading Configuration from %s ---", cycle_count, filename);
    file_handle = $fopen(filename, "r");
    if (file_handle == 0) begin
      $display("FATAL: Could not open configuration file: %s", filename);
      $fatal;
    end

    // Read each line of the file, which contains a 180-bit hex value
    while (!$feof(file_handle)) begin
      // $fscanf returns the number of successfully matched items
      if ($fscanf(file_handle, "%h\n", config_data) == 1) begin
         [cite_start]// Format as a config packet: {opcode, data} [cite: 29, 30]
         send_cpu_pkt({2'b00, config_data});
      end
    end

    $fclose(file_handle);
    [cite_start]$display("[%0d] Configuration loading complete.", cycle_count); [cite: 32]
  endtask

  // Task to write initial data to CGRA memory
  task load_initial_data(input int addr, input int data);
    [cite_start]logic [181:0] write_pkt; [cite: 33]
    $display("[%0d] --- Phase: Loading Initial Data ---", cycle_count);
    [cite_start]// Construct a memory WRITE packet: {opcode, address, data, padding} [cite: 34]
    write_pkt = {2'b01, 10'(addr), 32'(data), 138'b0};
    [cite_start]send_cpu_pkt(write_pkt); [cite: 35]
    [cite_start]$display("[%0d] Wrote %0d to address %0d.", cycle_count, data, addr); [cite: 36]
  endtask

  // Task to wait for the kernel to execute
  task execute_kernel(input int num_cycles);
    [cite_start]$display("[%0d] --- Phase: Executing Kernel for %0d cycles ---", cycle_count, num_cycles); [cite: 37]
    send_to_cpu_pkt__rdy = 1'b0; [cite_start]// Ensure we are not trying to receive anything [cite: 38]
    for (int i = 0; i < num_cycles; i++) begin
      next_cycle();
    [cite_start]end [cite: 39]
    $display("[%0d] Kernel execution finished.", cycle_count);
  endtask

  // Task to read the result from memory and verify it
  task read_and_verify_result(input int addr, input int expected_data);
    [cite_start]logic [181:0] read_pkt; [cite: 40]
    logic [31:0]  received_data;

    $display("[%0d] --- Phase: Reading and Verifying Result ---", cycle_count);
    [cite_start]// Construct a memory READ packet: {opcode, address, padding} [cite: 41]
    read_pkt = {2'b10, 10'(addr), 170'b0};
    [cite_start]send_cpu_pkt(read_pkt); [cite: 42]

    // Wait for the result packet from the CGRA
    send_to_cpu_pkt__rdy = 1'b1; [cite_start]// Signal that we are ready to receive [cite: 43]
    @(posedge clk);
    [cite_start]while (send_to_cpu_pkt__val == 1'b0) begin [cite: 44]
      $display("[%0d] Waiting for result packet from CGRA...", cycle_count);
      next_cycle();
    [cite_start]end [cite: 45]

    [cite_start]// Unpack the data from the received message [cite: 46]
    received_data = send_to_cpu_pkt__msg[31:0];
    $display("[%0d] Received result packet. Data: %0d", cycle_count, received_data);

    [cite_start]// Verify the final result [cite: 47]
    if (received_data != expected_data) begin
      [cite_start]$display("FAILURE: Received data (%0d) does NOT match expected data (%0d).", received_data, expected_data); [cite: 48]
      [cite_start]$fatal; [cite: 49]
    end
    $display("SUCCESS: Received data (%0d) matches expected data (%0d).", received_data, expected_data);
    send_to_cpu_pkt__rdy = 1'b0;
    next_cycle();
  endtask

endmodule