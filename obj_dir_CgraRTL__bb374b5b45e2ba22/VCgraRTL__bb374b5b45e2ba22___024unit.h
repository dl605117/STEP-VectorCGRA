// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCgraRTL__bb374b5b45e2ba22.h for the primary calling header

#ifndef _VCGRARTL__BB374B5B45E2BA22___024UNIT_H_
#define _VCGRARTL__BB374B5B45E2BA22___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VCgraRTL__bb374b5b45e2ba22__Syms;
class VCgraRTL__bb374b5b45e2ba22_VerilatedVcd;


//----------

VL_MODULE(VCgraRTL__bb374b5b45e2ba22___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCgraRTL__bb374b5b45e2ba22__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCgraRTL__bb374b5b45e2ba22___024unit);  ///< Copying not allowed
  public:
    VCgraRTL__bb374b5b45e2ba22___024unit(const char* name = "TOP");
    ~VCgraRTL__bb374b5b45e2ba22___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCgraRTL__bb374b5b45e2ba22__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
