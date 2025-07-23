// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCgraRTL__bb374b5b45e2ba22.h for the primary calling header

#include "VCgraRTL__bb374b5b45e2ba22.h"
#include "VCgraRTL__bb374b5b45e2ba22__Syms.h"

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__48(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__48\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__49(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__49\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__50(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__50\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__51(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__51\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__52(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__52\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__53(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__53\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__54(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__54\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__55(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__55\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__56(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__56\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__57(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__57\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__58(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__58\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx60;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx60 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl___05Fsend_val) 
                                             & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Frdy
                                             [0U]) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg60[__Vtableidx60])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable60_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx60];
    }
    if ((2U & vlTOPp->__Vtablechg60[__Vtableidx60])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable60_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx60];
    }
    if ((4U & vlTOPp->__Vtablechg60[__Vtableidx60])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable60_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx60];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__59(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__59\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx61;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx61 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl___05Fsend_val) 
                                             & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Frdy
                                             [1U]) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg61[__Vtableidx61])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable61_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx61];
    }
    if ((2U & vlTOPp->__Vtablechg61[__Vtableidx61])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable61_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx61];
    }
    if ((4U & vlTOPp->__Vtablechg61[__Vtableidx61])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable61_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx61];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Frdy[1U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__60(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__60\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx62;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx62 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl___05Fsend_val) 
                                             & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Frdy
                                             [0U]) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg62[__Vtableidx62])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable62_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx62];
    }
    if ((2U & vlTOPp->__Vtablechg62[__Vtableidx62])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable62_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx62];
    }
    if ((4U & vlTOPp->__Vtablechg62[__Vtableidx62])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable62_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx62];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__61(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__61\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx63;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx63 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl___05Fsend_val) 
                                             & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Frdy
                                             [1U]) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg63[__Vtableidx63])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable63_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx63];
    }
    if ((2U & vlTOPp->__Vtablechg63[__Vtableidx63])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable63_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx63];
    }
    if ((4U & vlTOPp->__Vtablechg63[__Vtableidx63])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable63_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx63];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Frdy[1U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__62(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__62\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx64;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx64 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fsend_val) 
                                             & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Frdy
                                             [0U]) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg64[__Vtableidx64])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable64_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx64];
    }
    if ((2U & vlTOPp->__Vtablechg64[__Vtableidx64])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable64_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx64];
    }
    if ((4U & vlTOPp->__Vtablechg64[__Vtableidx64])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable64_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx64];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__63(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__63\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx65;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx65 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fsend_val) 
                                             & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Frdy
                                             [1U]) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg65[__Vtableidx65])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable65_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx65];
    }
    if ((2U & vlTOPp->__Vtablechg65[__Vtableidx65])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable65_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx65];
    }
    if ((4U & vlTOPp->__Vtablechg65[__Vtableidx65])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable65_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx65];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Frdy[1U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__64(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__64\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx66;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx66 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fsend_val) 
                                             & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Frdy
                                             [0U]) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg66[__Vtableidx66])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable66_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx66];
    }
    if ((2U & vlTOPp->__Vtablechg66[__Vtableidx66])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable66_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx66];
    }
    if ((4U & vlTOPp->__Vtablechg66[__Vtableidx66])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable66_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx66];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__65(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__65\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx67;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx67 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fsend_val) 
                                             & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Frdy
                                             [1U]) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg67[__Vtableidx67])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable67_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx67];
    }
    if ((2U & vlTOPp->__Vtablechg67[__Vtableidx67])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable67_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx67];
    }
    if ((4U & vlTOPp->__Vtablechg67[__Vtableidx67])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable67_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx67];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Frdy[1U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__66(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__66\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx68;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx68 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fsend_val) 
                                             & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Frdy
                                             [0U]) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg68[__Vtableidx68])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable68_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx68];
    }
    if ((2U & vlTOPp->__Vtablechg68[__Vtableidx68])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable68_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx68];
    }
    if ((4U & vlTOPp->__Vtablechg68[__Vtableidx68])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable68_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx68];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__67(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__67\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx69;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx69 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fsend_val) 
                                             & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Frdy
                                             [1U]) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg69[__Vtableidx69])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable69_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx69];
    }
    if ((2U & vlTOPp->__Vtablechg69[__Vtableidx69])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable69_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx69];
    }
    if ((4U & vlTOPp->__Vtablechg69[__Vtableidx69])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable69_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx69];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Frdy[1U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__68(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__68\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Freset
        [0U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__69(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__69\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Freset
        [1U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__70(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__70\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Freset
        [2U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__71(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__71\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Freset
        [0U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__72(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__72\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Freset
        [1U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__73(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__73\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Freset
        [2U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__74(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__74\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Freset
        [0U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__75(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__75\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Freset
        [1U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__76(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__76\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Freset
        [2U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__77(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__77\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Freset
        [0U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__78(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__78\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Freset
        [1U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__79(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__79\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Freset
        [2U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__80(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__80\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Freset
        [0U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__81(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__81\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Freset
        [1U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__82(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__82\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Freset
        [2U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__83(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__83\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__84(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__84\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__85(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__85\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__86(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__86\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__87(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__87\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__88(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__88\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__89(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__89\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__90(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__90\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__91(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__91\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__92(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__92\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__93(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__93\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__94(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__94\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__95(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__95\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__96(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__96\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__97(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__97\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__98(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__98\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__99(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__99\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__100(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__100\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__101(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__101\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__102(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__102\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__103(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__103\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__104(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__104\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__105(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__105\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__106(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__106\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__107(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__107\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__108(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__108\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__109(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__109\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__110(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__110\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__111(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__111\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__112(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__112\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__113(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__113\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx15;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx15 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg15[__Vtableidx15])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable15_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx15];
    }
    if ((2U & vlTOPp->__Vtablechg15[__Vtableidx15])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable15_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx15];
    }
    if ((4U & vlTOPp->__Vtablechg15[__Vtableidx15])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable15_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx15];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__114(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__114\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx16;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx16 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg16[__Vtableidx16])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable16_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx16];
    }
    if ((2U & vlTOPp->__Vtablechg16[__Vtableidx16])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable16_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx16];
    }
    if ((4U & vlTOPp->__Vtablechg16[__Vtableidx16])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable16_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx16];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Frecv___05Frdy[1U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__115(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__115\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx17;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx17 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg17[__Vtableidx17])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable17_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx17];
    }
    if ((2U & vlTOPp->__Vtablechg17[__Vtableidx17])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable17_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx17];
    }
    if ((4U & vlTOPp->__Vtablechg17[__Vtableidx17])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable17_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx17];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__116(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__116\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx18;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx18 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg18[__Vtableidx18])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable18_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx18];
    }
    if ((2U & vlTOPp->__Vtablechg18[__Vtableidx18])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable18_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx18];
    }
    if ((4U & vlTOPp->__Vtablechg18[__Vtableidx18])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable18_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx18];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Frecv___05Frdy[1U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__117(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__117\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx19;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx19 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg19[__Vtableidx19])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable19_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx19];
    }
    if ((2U & vlTOPp->__Vtablechg19[__Vtableidx19])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable19_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx19];
    }
    if ((4U & vlTOPp->__Vtablechg19[__Vtableidx19])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable19_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx19];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__118(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__118\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx20;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx20 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg20[__Vtableidx20])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable20_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx20];
    }
    if ((2U & vlTOPp->__Vtablechg20[__Vtableidx20])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable20_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx20];
    }
    if ((4U & vlTOPp->__Vtablechg20[__Vtableidx20])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable20_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx20];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Frecv___05Frdy[1U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__119(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__119\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx24;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx24 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg24[__Vtableidx24])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable24_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx24];
    }
    if ((2U & vlTOPp->__Vtablechg24[__Vtableidx24])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable24_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx24];
    }
    if ((4U & vlTOPp->__Vtablechg24[__Vtableidx24])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable24_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx24];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__120(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__120\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx25;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx25 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg25[__Vtableidx25])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable25_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx25];
    }
    if ((2U & vlTOPp->__Vtablechg25[__Vtableidx25])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable25_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx25];
    }
    if ((4U & vlTOPp->__Vtablechg25[__Vtableidx25])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable25_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx25];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Frecv___05Frdy[1U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__121(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__121\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx26;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx26 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg26[__Vtableidx26])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable26_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx26];
    }
    if ((2U & vlTOPp->__Vtablechg26[__Vtableidx26])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable26_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx26];
    }
    if ((4U & vlTOPp->__Vtablechg26[__Vtableidx26])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable26_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx26];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__122(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__122\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx27;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx27 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg27[__Vtableidx27])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable27_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx27];
    }
    if ((2U & vlTOPp->__Vtablechg27[__Vtableidx27])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable27_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx27];
    }
    if ((4U & vlTOPp->__Vtablechg27[__Vtableidx27])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable27_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx27];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Frecv___05Frdy[1U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__123(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__123\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx28;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx28 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg28[__Vtableidx28])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable28_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx28];
    }
    if ((2U & vlTOPp->__Vtablechg28[__Vtableidx28])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable28_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx28];
    }
    if ((4U & vlTOPp->__Vtablechg28[__Vtableidx28])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable28_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx28];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__124(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__124\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx29;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx29 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg29[__Vtableidx29])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable29_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx29];
    }
    if ((2U & vlTOPp->__Vtablechg29[__Vtableidx29])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable29_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx29];
    }
    if ((4U & vlTOPp->__Vtablechg29[__Vtableidx29])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable29_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx29];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Frecv___05Frdy[1U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__125(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__125\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx33;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx33 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg33[__Vtableidx33])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable33_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx33];
    }
    if ((2U & vlTOPp->__Vtablechg33[__Vtableidx33])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable33_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx33];
    }
    if ((4U & vlTOPp->__Vtablechg33[__Vtableidx33])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable33_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx33];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__126(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__126\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx34;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx34 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg34[__Vtableidx34])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable34_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx34];
    }
    if ((2U & vlTOPp->__Vtablechg34[__Vtableidx34])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable34_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx34];
    }
    if ((4U & vlTOPp->__Vtablechg34[__Vtableidx34])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable34_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx34];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Frecv___05Frdy[1U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__127(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__127\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx35;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx35 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg35[__Vtableidx35])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable35_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx35];
    }
    if ((2U & vlTOPp->__Vtablechg35[__Vtableidx35])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable35_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx35];
    }
    if ((4U & vlTOPp->__Vtablechg35[__Vtableidx35])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable35_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx35];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__128(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__128\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx36;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx36 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg36[__Vtableidx36])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable36_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx36];
    }
    if ((2U & vlTOPp->__Vtablechg36[__Vtableidx36])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable36_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx36];
    }
    if ((4U & vlTOPp->__Vtablechg36[__Vtableidx36])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable36_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx36];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Frecv___05Frdy[1U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__129(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__129\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx37;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx37 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg37[__Vtableidx37])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable37_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx37];
    }
    if ((2U & vlTOPp->__Vtablechg37[__Vtableidx37])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable37_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx37];
    }
    if ((4U & vlTOPp->__Vtablechg37[__Vtableidx37])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable37_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx37];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__130(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__130\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx38;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx38 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg38[__Vtableidx38])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable38_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx38];
    }
    if ((2U & vlTOPp->__Vtablechg38[__Vtableidx38])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable38_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx38];
    }
    if ((4U & vlTOPp->__Vtablechg38[__Vtableidx38])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable38_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx38];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Frecv___05Frdy[1U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__131(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__131\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx42;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx42 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg42[__Vtableidx42])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable42_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx42];
    }
    if ((2U & vlTOPp->__Vtablechg42[__Vtableidx42])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable42_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx42];
    }
    if ((4U & vlTOPp->__Vtablechg42[__Vtableidx42])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable42_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx42];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__132(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__132\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx43;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx43 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg43[__Vtableidx43])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable43_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx43];
    }
    if ((2U & vlTOPp->__Vtablechg43[__Vtableidx43])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable43_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx43];
    }
    if ((4U & vlTOPp->__Vtablechg43[__Vtableidx43])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable43_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx43];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Frecv___05Frdy[1U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__133(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__133\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx44;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx44 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg44[__Vtableidx44])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable44_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx44];
    }
    if ((2U & vlTOPp->__Vtablechg44[__Vtableidx44])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable44_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx44];
    }
    if ((4U & vlTOPp->__Vtablechg44[__Vtableidx44])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable44_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx44];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__134(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__134\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx45;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx45 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg45[__Vtableidx45])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable45_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx45];
    }
    if ((2U & vlTOPp->__Vtablechg45[__Vtableidx45])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable45_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx45];
    }
    if ((4U & vlTOPp->__Vtablechg45[__Vtableidx45])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable45_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx45];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Frecv___05Frdy[1U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fcount[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__135(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_sequent__TOP__135\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx46;
    CData/*0:0*/ __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*184:0*/ __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6];
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx46 = (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg46[__Vtableidx46])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable46_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx46];
    }
    if ((2U & vlTOPp->__Vtablechg46[__Vtableidx46])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable46_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx46];
    }
    if ((4U & vlTOPp->__Vtablechg46[__Vtableidx46])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable46_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx46];
    }
    if (__Vdlyvset__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fcount[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
}
