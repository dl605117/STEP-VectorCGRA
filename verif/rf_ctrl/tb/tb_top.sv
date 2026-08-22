
// Top-level SystemVerilog testbench module for STEP_RegisterFileControllerRTL.
// Generates the 100MHz simulation clock and initial power-on reset sequence.
// Instantiates the DUT and connects it directly to the physical interface (vif).
// Registers the virtual interface handle in the UVM configuration database.
// Triggers the UVM test execution (step_rf_base_test) and dumps VCD waveforms.

module tb_top;
  import uvm_pkg::*;
  import step_rf_ctrl_pkg::*;

  logic clk;
  logic reset;

  // Clock generation (100MHz)
  initial begin
    clk = 0;
    forever #5ns clk = ~clk;
  end

  // Reset generation
  initial begin
    reset = 1'b1;
    #20ns reset = 1'b0;
  end


  // Instantiate Interface
  step_rf_ctrl_if vif(clk, reset);

  STEP_RegisterFileControllerRTL #(
    .num_tiles (NUM_TILES),
    .num_banks (NUM_BANKS),
    .num_rd_ports (NUM_RD_PORTS),
    .num_wr_ports (NUM_WR_PORTS),
    .num_ld_ports (NUM_LD_PORTS),
    .num_st_ports (NUM_ST_PORTS),
    .num_registers (NUM_REGISTERS)
  ) dut(
    .clk (clk),
    .reset (reset),

    // Config Ports
    .recv_cfg_from_ctrl_val (vif.recv_cfg_val),
    .recv_cfg_from_ctrl_rdy (vif.recv_cfg_rdy),
    .recv_cfg_from_ctrl_msg (vif.recv_cfg_msg),
    .cfg_done  (vif.cfg_done),

    // Read / Write / Tokenizer Handshakes
    .tile_token_shifter_out (vif.tile_token_shifter_out),
    .wr_data(vif.wr_data),
    .tile_token_return(vif.tile_token_return),
    .rf_rd_data(vif.rf_rd_data),
    .tile_token_take(vif.tile_token_take),
    .tile_token_avail(vif.tile_token_avail),

    // Memory Handshakes
    .ld_data(vif.ld_data),
    .ld_data_valid(vif.ld_data_valid),
    .ld_data_id(vif.ld_data_id),
    .ld_req_accepted (vif.ld_req_accepted),
    .ld_enable(vif.ld_enable),
    .ld_issue_tid(vif.ld_issue_tid),
    .st_req_accepted(vif.st_req_accepted),
    .st_enable(vif.st_enable),
    .ld_st_complete(vif.ld_st_complete),

    // Scoreboard Masks (Bank 0)
    .cfg_thread_min_bank0(vif.cfg_thread_min_bank0),
    .cfg_thread_max_bank0(vif.cfg_thread_max_bank0),
    .cfg_thread_mask_bank0(vif.cfg_thread_mask_bank0),
    .cfg_bank_has_load0(vif.cfg_bank_has_load0),
    .cfg_bank_has_store0(vif.cfg_bank_has_store0),
    .mem_ready_mask_bank0(vif.mem_ready_mask_bank0),
    .mem_complete_mask_bank0(vif.mem_complete_mask_bank0)
  );


  // Set virtual interface in Config DB and start test
  initial begin
    uvm_config_db#(virtual step_rf_ctrl_if)::set(null, "*", "vif", vif);
    run_test("step_rf_base_test");
  end


  // (Optional) Dump VCD/FSDB waveforms
  initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0, tb_top);
  end

endmodule