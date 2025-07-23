// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCGRARTL__BB374B5B45E2BA22__SYMS_H_
#define _VCGRARTL__BB374B5B45E2BA22__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VCgraRTL__bb374b5b45e2ba22.h"
#include "VCgraRTL__bb374b5b45e2ba22___024unit.h"

// SYMS CLASS
class VCgraRTL__bb374b5b45e2ba22__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VCgraRTL__bb374b5b45e2ba22*    TOPp;
    
    // CREATORS
    VCgraRTL__bb374b5b45e2ba22__Syms(VCgraRTL__bb374b5b45e2ba22* topp, const char* namep);
    ~VCgraRTL__bb374b5b45e2ba22__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
