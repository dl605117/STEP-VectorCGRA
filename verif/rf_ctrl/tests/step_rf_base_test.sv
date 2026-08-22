
// Top-level UVM test for the STEP Register File Controller.
// Instantiates the verification environment (step_rf_ctrl_env).
// Pre-loads expected read data into the scoreboard queues (ports 1 & 3).
// Starts the directed configuration and stimulus sequence on the sequencer.
// Uses objections and simulation delay to control test execution lifetime.

class step_rf_base_test extends uvm_test;
  `uvm_component_utils(step_rf_base_test)

  step_rf_ctrl_env env;

  function new(string name = "step_rf_base_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    
    env = step_rf_ctrl_env::type_id::create("env", this);
  endfunction

  virtual task run_phase(uvm_phase phase);
    step_rf_directed_seq seq;
    phase.raise_objection(this);

    // Pre-load expected scoreboard data matching Python test: Read port 1 reads back load results (5, 7)
    env.scoreboard.expected_rd_q[1].push_back(8'd5);
    env.scoreboard.expected_rd_q[1].push_back(8'd7);
    
    // Read port 3 reads back fabric writeback results (1, 2)
    env.scoreboard.expected_rd_q[3].push_back(8'd1);
    env.scoreboard.expected_rd_q[3].push_back(8'd2);

    `uvm_info("TEST", "Starting STEP RF Controller directed sequence...", UVM_LOW)
    
    seq = step_rf_directed_seq::type_id::create("seq");
    seq.start(env.sequencer);

    #500ns;
    phase.drop_objection(this);
  endtask
  
endclass : step_rf_base_test