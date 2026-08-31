`ifndef STEP_RF_DIRECTED_SEQ_SV
`define STEP_RF_DIRECTED_SEQ_SV

class step_rf_directed_seq extends uvm_sequence #(step_rf_cfg_metadata_item);
  `uvm_object_utils(step_rf_directed_seq)

  function new(string name = "step_rf_directed_seq");
    super.new(name);
  endfunction

  virtual task body();
    step_rf_cfg_metadata_item req = step_rf_cfg_metadata_item::type_id::create("req");
    start_item(req);
    assert(req.randomize());
    finish_item(req);
    
  endtask

endclass

`endif
