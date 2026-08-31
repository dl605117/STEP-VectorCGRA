`ifndef STEP_RF_CFG_METADATA_ITEM_SV
`define STEP_RF_CFG_METADATA_ITEM_SV

class step_rf_cfg_metadata_item extends uvm_sequence_item;
    `uvm_object_utils(step_rf_cfg_metadata_item)
    
    rand bit [127:0] cfg_word;
    rand bit [3:0] bank_idx;
    rand bit [1:0] cmd_type;
    
    function new(string name = "step_rf_cfg_metadata_item");
        super.new(name);
    endfunction
    
endclass

`endif
