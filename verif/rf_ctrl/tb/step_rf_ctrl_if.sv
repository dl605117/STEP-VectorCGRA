// SystemVerilog interface connecting the UVM testbench to the DUT pins.
// Bundles control/configuration, fabric writeback, RF read, and memory ports.
// Provides a driver clocking block (drv_cb) with synchronous drive semantics.
// Provides a monitor clocking block (mon_cb) with input skew for sampling.

interface step_rf_ctrl_if (input logic clk, input logic reset);

  import step_rf_ctrl_pkg::*;

  // Config Port (Val/Rdy handshake)
  logic ecv_cfg_val;
  logic recv_cfg_rdy;
  logic [CfgMetadataType_WIDTH-1:0] recv_cfg_msg;

  // Tokenizer Config Port
  logic recv_cfg_tok_val;
  logic recv_cfg_tok_rdy;
  logic [CfgTokenizerType_WIDTH-1:0] recv_cfg_tok_msg;

  // Fabric Writeback Interface (From Fabric/Tokenizer to DUT)
  logic [NUM_WR_PORTS-1:0] tile_token_shifter_out;
  logic [REG_DATA_WIDTH-1:0] wr_data [NUM_WR_PORTS];
  logic [NUM_WR_PORTS-1:0] tile_token_return;

  // Register File Read Interface (DUT to Sinks)
  logic [REG_DATA_WIDTH-1:0] rf_rd_data [NUM_RD_PORTS];
  logic [NUM_RD_PORTS-1:0] tile_token_take;
  logic [NUM_RD_PORTS-1:0] tile_token_avail;

  // Load Data Interface (Memory to DUT)
  logic [REG_DATA_WIDTH-1:0] ld_data [NUM_LD_PORTS];
  logic [NUM_LD_PORTS-1:0] ld_data_valid;
  logic [TID_WIDTH-1:0] ld_data_id [NUM_LD_PORTS];
  logic [NUM_LD_PORTS-1:0] ld_req_accepted;
  logic [NUM_LD_PORTS-1:0] ld_enable;
  logic [TID_WIDTH-1:0] ld_issue_tid [NUM_LD_PORTS];

  // Store Interface
  logic [NUM_ST_PORTS-1:0] st_req_accepted;
  logic [NUM_ST_PORTS-1:0] st_enable;

  // Completion & Status
  logic cfg_done;
  logic ld_st_complete;

  // Scoreboard / Memory Tracking Interface (Bank 0)
  logic [TID_WIDTH-1:0] cfg_thread_min_bank0;
  logic [TID_WIDTH-1:0] cfg_thread_max_bank0;
  logic [MAX_THREAD_COUNT-1:0] cfg_thread_mask_bank0;
  logic cfg_bank_has_load0;
  logic cfg_bank_has_store0;
  logic [MAX_THREAD_COUNT-1:0] mem_ready_mask_bank0;
  logic [MAX_THREAD_COUNT-1:0] mem_complete_mask_bank0;

  // Clocking block for driver pin-wiggling
  clocking drv_cb @(posedge clk);
    default input #1step output #1step;
    output recv_cfg_val, recv_cfg_msg;
    output recv_cfg_tok_val, recv_cfg_tok_msg;
    output tile_token_shifter_out, wr_data;
    output tile_token_avail;
    output ld_data, ld_data_valid, ld_data_id, ld_req_accepted;
    output st_req_accepted;
    output mem_ready_mask_bank0, mem_complete_mask_bank0;
    input recv_cfg_rdy, recv_cfg_tok_rdy;
    input rf_rd_data, tile_token_take, tile_token_return;
    input ld_enable, ld_issue_tid, st_enable;
    input cfg_done;
  endclocking

  // Clocking block for monitor sampling
  clocking mon_cb @(posedge clk);
    default input #1step;
    input recv_cfg_val, recv_cfg_rdy, recv_cfg_msg;
    input tile_token_shifter_out, wr_data, tile_token_return;
    input rf_rd_data, tile_token_take, tile_token_avail;
    input ld_data, ld_data_valid, ld_data_id, ld_req_accepted, ld_enable;
    input cfg_done;
  endclocking


endinterface : step_rf_ctrl_if