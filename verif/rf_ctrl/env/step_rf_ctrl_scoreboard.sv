// UVM scoreboard for verifying STEP Register File Controller outputs.
// Receives observed read/write data items from the monitor via dut_export.
// Compares actual read port data against queues of pre-loaded expected values.
// Reports matches/mismatches and verifies in check_phase that all expected transactions were consumed.

class step_rf_ctrl_scoreboard extends uvm_scoreboard;
  `uvm_component_utils(step_rf_ctrl_scoreboard)

  `uvm_analysis_imp_decl(_dut)
  uvm_analysis_imp_dut #(step_rf_data_item, step_rf_ctrl_scoreboard) dut_export;

  // Expected queues per read port
  bit [REG_DATA_WIDTH-1:0] expected_rd_q[NUM_RD_PORTS][$];

  int match_count = 0;
  int mismatch_count = 0;

  function new(string name = "step_rf_ctrl_scoreboard", uvm_component parent = null);
    super.new(name, parent);
    dut_export = new("dut_export", this);
  endfunction


  virtual function void write_dut(step_rf_data_item item);
    if (item.kind == step_rf_data_item::RD_DATA) begin
      if (expected_rd_q[item.port_idx].size() == 0) begin
        `uvm_error("SCB", $sformatf("Unexpected read on port %0d with data 0x%0h", item.port_idx, item.data))
        mismatch_count++;
      
      end else begin
        bit [REG_DATA_WIDTH-1:0] expected = expected_rd_q[item.port_idx].pop_front();
        if (expected == item.data) begin
          `uvm_info("SCB", $sformatf("PASS: Port %0d Data Matched: 0x%0h", item.port_idx, item.data), UVM_LOW)
          match_count++;
        
        end else begin
          `uvm_error("SCB", $sformatf("MISMATCH: Port %0d Expected: 0x%0h Actual: 0x%0h", item.port_idx, expected, item.data))
          mismatch_count++;
        
        end
      end
    end
  endfunction

  virtual function void check_phase(uvm_phase phase);
    super.check_phase(phase);
    
    for (int i = 0; i < NUM_RD_PORTS; i++) begin
      if (expected_rd_q[i].size() > 0) begin
        `uvm_error("SCB", $sformatf("Read port %0d has %0d unconsumed expected packets remaining!", i, expected_rd_q[i].size()))
      end
    end
   
    `uvm_info("SCB", $sformatf("Scoreboard Summary: %0d Matches, %0d Mismatches", match_count, mismatch_count), UVM_NONE)
  endfunction
endclass : step_rf_ctrl_scoreboard
