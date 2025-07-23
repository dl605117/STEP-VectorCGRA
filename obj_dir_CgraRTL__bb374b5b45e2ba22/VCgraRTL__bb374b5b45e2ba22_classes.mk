# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VCgraRTL__bb374b5b45e2ba22.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VCgraRTL__bb374b5b45e2ba22 \
	VCgraRTL__bb374b5b45e2ba22__1 \
	VCgraRTL__bb374b5b45e2ba22__2 \
	VCgraRTL__bb374b5b45e2ba22__3 \
	VCgraRTL__bb374b5b45e2ba22__4 \
	VCgraRTL__bb374b5b45e2ba22__5 \
	VCgraRTL__bb374b5b45e2ba22__6 \
	VCgraRTL__bb374b5b45e2ba22__7 \
	VCgraRTL__bb374b5b45e2ba22__8 \
	VCgraRTL__bb374b5b45e2ba22__9 \
	VCgraRTL__bb374b5b45e2ba22__10 \
	VCgraRTL__bb374b5b45e2ba22__11 \
	VCgraRTL__bb374b5b45e2ba22__12 \
	VCgraRTL__bb374b5b45e2ba22__13 \
	VCgraRTL__bb374b5b45e2ba22__14 \
	VCgraRTL__bb374b5b45e2ba22__15 \
	VCgraRTL__bb374b5b45e2ba22___024unit \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VCgraRTL__bb374b5b45e2ba22__Slow \
	VCgraRTL__bb374b5b45e2ba22__1__Slow \
	VCgraRTL__bb374b5b45e2ba22__2__Slow \
	VCgraRTL__bb374b5b45e2ba22__3__Slow \
	VCgraRTL__bb374b5b45e2ba22__4__Slow \
	VCgraRTL__bb374b5b45e2ba22__5__Slow \
	VCgraRTL__bb374b5b45e2ba22__6__Slow \
	VCgraRTL__bb374b5b45e2ba22__7__Slow \
	VCgraRTL__bb374b5b45e2ba22__8__Slow \
	VCgraRTL__bb374b5b45e2ba22__9__Slow \
	VCgraRTL__bb374b5b45e2ba22___024unit__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VCgraRTL__bb374b5b45e2ba22__Trace \
	VCgraRTL__bb374b5b45e2ba22__Trace__1 \
	VCgraRTL__bb374b5b45e2ba22__Trace__2 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VCgraRTL__bb374b5b45e2ba22__Syms \
	VCgraRTL__bb374b5b45e2ba22__Trace__Slow \
	VCgraRTL__bb374b5b45e2ba22__Trace__1__Slow \
	VCgraRTL__bb374b5b45e2ba22__Trace__2__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
