`ifndef STEP_TOKENIZER_CFG_ITEM_SV
`define STEP_TOKENIZER_CFG_ITEM_SV

class step_tokenizer_cfg_item extends uvm_sequence_item;
  `uvm_object_utils(step_tokenizer_cfg_item)

  rand bit [63:0] tok_cfg_word;
  rand bit [15:0] token_sink_enable;
  rand bit [3:0] delay_to_sink;

  function new(string name = "step_tokenizer_cfg_item");
    super.new(name);
  endfunction

endclass

`endif
