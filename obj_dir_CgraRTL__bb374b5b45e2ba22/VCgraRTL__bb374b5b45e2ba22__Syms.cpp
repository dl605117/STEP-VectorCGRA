// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCgraRTL__bb374b5b45e2ba22__Syms.h"
#include "VCgraRTL__bb374b5b45e2ba22.h"
#include "VCgraRTL__bb374b5b45e2ba22___024unit.h"



// FUNCTIONS
VCgraRTL__bb374b5b45e2ba22__Syms::VCgraRTL__bb374b5b45e2ba22__Syms(VCgraRTL__bb374b5b45e2ba22* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
