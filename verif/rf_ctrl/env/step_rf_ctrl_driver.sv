// UVM driver for the STEP Register File Controller.
// Fetches configuration packets (step_rf_cfg_metadata_item) from the sequencer.
// Resets and initializes DUT interface signals to safe idle states.
// Drives the configuration packet to the DUT using a valid/ready handshake.

class step_rf_ctrl_driver extends uvm_driver #(step_rf_cfg_metadata_item);
  `uvm_component_utils(step_rf_ctrl_driver)

  virtual step_rf_ctrl_if vif;

  function new(string name = "step_rf_ctrl_driver", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(virtual step_rf_ctrl_if)::get(this, "", "vif", vif)) begin
      `uvm_fatal("DRV", "Virtual interface not set for step_rf_ctrl_driver")
    end
  
  endfunction

  virtual task run_phase(uvm_phase phase);
    reset_signals();
    
    forever begin
      seq_item_port.get_next_item(req);
      drive_config_packet(req);
      seq_item_port.item_done();
    end
  endtask

  virtual task reset_signals();
    @(posedge vif.clk);
    vif.drv_cb.recv_cfg_val <= 1'b0;
    vif.drv_cb.recv_cfg_tok_val <= 1'b0;
    vif.drv_cb.tile_token_shifter_out <= '0;
    vif.drv_cb.tile_token_avail <= '1;
    vif.drv_cb.ld_req_accepted <= '0;
    vif.drv_cb.st_req_accepted <= '0;
    for (int i = 0; i < NUM_WR_PORTS; i++) vif.drv_cb.wr_data[i] <= '0;
    for (int i = 0; i < NUM_LD_PORTS; i++) begin
      vif.drv_cb.ld_data[i] <= '0;
      vif.drv_cb.ld_data_valid[i] <= 1'b0;
      vif.drv_cb.ld_data_id[i] <= '0;
    end
  
  endtask

  virtual task drive_config_packet(step_rf_cfg_metadata_item item);
    `uvm_info("DRV", $sformatf("Driving Config ID %0d", item.cfg_id), UVM_LOW)

    // Handshake configuration packet with DUT
    @(vif.drv_cb);
    
    vif.drv_cb.recv_cfg_val <= 1'b1;
    vif.drv_cb.recv_cfg_msg <= item.pack_to_bits();

    do begin
      @(vif.drv_cb);
    end while (!vif.drv_cb.recv_cfg_rdy);

    vif.drv_cb.recv_cfg_val <= 1'b0;
  endtask
  
endclass : step_rf_ctrl_driver