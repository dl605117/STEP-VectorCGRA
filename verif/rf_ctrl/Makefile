# Default to VCS; adjust toolchain as needed
VCS_FLAGS = -sverilog -ntb_opts uvm -timescale=1ns/1ps -full64 +incdir+./env +incdir+./seq +incdir+./tests +incdir+./tb

RTL_SRCS = ../../controller/STEP_RegisterFileControllerRTL.sv \
           ../../tokenizer/STEP_TokenizerControllerRTL.sv

TB_SRCS  = ./env/step_rf_ctrl_pkg.sv \
           ./tb/step_rf_ctrl_if.sv \
           ./tb/tb_top.sv

compile:
	vcs $(VCS_FLAGS) $(RTL_SRCS) $(TB_SRCS) -o simv

run:
	./simv +UVM_TESTNAME=step_rf_base_test +UVM_VERBOSITY=UVM_LOW

clean:
	rm -rf simv* csrc *.vcd ucli.key vc_hdrs.h