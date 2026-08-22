// UVM monitor for the STEP Register File Controller interface.
// Passively observes interface pins on every clock edge via mon_cb.
// Captures register file read data when tile_token_take is asserted.
// Captures fabric writeback data when tile_token_shifter_out is asserted.
// Converts observed transactions into step_rf_data_item and publishes them via item_collected_port to the scoreboard.

class step_rf_ctrl_monitor extends uvm_monitor;
  `uvm_component_utils(step_rf_ctrl_monitor)

  virtual step_rf_ctrl_if vif;
  uvm_analysis_port #(step_rf_data_item) item_collected_port;

  function new(string name = "step_rf_ctrl_monitor", uvm_component parent = null);
    super.new(name, parent);
    item_collected_port = new("item_collected_port", this);
  endfunction


  virtual function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    
    if (!uvm_config_db#(virtual step_rf_ctrl_if)::get(this, "", "vif", vif)) begin
      `uvm_fatal("MON", "Virtual interface not set for step_rf_ctrl_monitor")
    end
  endfunction


  virtual task run_phase(uvm_phase phase);
    fork
      sample_reads();
      sample_writes();
    join
  endtask


  virtual task sample_reads();
    forever begin
      @(vif.mon_cb);
      for (int i = 0; i < NUM_RD_PORTS; i++) begin
        if (vif.mon_cb.tile_token_take[i]) begin
          step_rf_data_item item = step_rf_data_item::type_id::create($sformatf("rd_item_p%0d", i));
          item.kind = step_rf_data_item::RD_DATA;
          item.port_idx = i;
          item.data = vif.mon_cb.rf_rd_data[i];
          item_collected_port.write(item);
        
        end
      end
    end
  endtask


  virtual task sample_writes();
    forever begin
      @(vif.mon_cb);
      for (int i = 0; i < NUM_WR_PORTS; i++) begin
        if (vif.mon_cb.tile_token_shifter_out[i]) begin
          step_rf_data_item item = step_rf_data_item::type_id::create($sformatf("wr_item_p%0d", i));
          item.kind = step_rf_data_item::WR_DATA;
          item.port_idx = i;
          item.data = vif.mon_cb.wr_data[i];
          item_collected_port.write(item);
        
        end
      end
    end
  endtask
endclass : step_rf_ctrl_monitor