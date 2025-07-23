// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCgraRTL__bb374b5b45e2ba22.h for the primary calling header

#include "VCgraRTL__bb374b5b45e2ba22.h"
#include "VCgraRTL__bb374b5b45e2ba22__Syms.h"

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__291(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__291\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [0xaU] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter))) 
                   >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [0xaU][2U] << 0x13U) 
                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0xaU][1U] 
                                        >> 0xdU))))
                        ? (0xffU & ((IData)(1U) << 
                                    (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [0xaU][2U] 
                                            << 0x13U) 
                                           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [0xaU][1U] 
                                              >> 0xdU)))))
                        : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_combo__TOP__292(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_combo__TOP__292\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [7U]) {
        if ((0xcU == (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [7U][3U] >> 9U)))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F7__send_out___05Frdy
                [0U];
        } else {
            if ((0x1cU == (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [7U][3U] >> 9U)))) {
                vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy 
                    = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F7__send_out___05Frdy
                    [0U];
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [7U]) {
        if ((0xcU == (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [7U][3U] >> 9U)))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F7__send_out___05Frdy
                [0U];
        } else {
            if ((0x1cU == (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [7U][3U] >> 9U)))) {
                vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy 
                    = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F7__send_out___05Frdy
                    [0U];
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [7U]) {
        if ((0xcU == (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [7U][3U] >> 9U)))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F7__send_out___05Frdy
                [0U];
        } else {
            if ((0x1cU == (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [7U][3U] >> 9U)))) {
                vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy 
                    = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F7__send_out___05Frdy
                    [0U];
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
        [7U]) {
        if ((0xcU == (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [7U][3U] >> 9U)))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F7__send_out___05Frdy
                [0U];
        } else {
            if ((0x1cU == (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [7U][3U] >> 9U)))) {
                vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy 
                    = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F7__send_out___05Frdy
                    [0U];
            }
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy[6U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy[8U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [8U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy[9U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [9U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy[0xaU] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [0xaU];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy[6U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy[8U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [8U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy[9U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [9U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy[0xaU] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [0xaU];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy[6U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy[8U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [8U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy[9U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [9U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy[0xaU] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [0xaU];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy[6U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy[8U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [8U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy[9U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [9U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy[0xaU] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Frdy
        [0xaU];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element___05Ffrom_mem_rdata___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element___05Ffrom_mem_rdata___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element___05Ffrom_mem_rdata___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element___05Ffrom_mem_rdata___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element___05Ffrom_mem_rdata___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element___05Ffrom_mem_rdata___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element___05Ffrom_mem_rdata___05Frdy[6U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element___05Ffrom_mem_rdata___05Frdy[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element___05Ffrom_mem_rdata___05Frdy[8U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [8U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element___05Ffrom_mem_rdata___05Frdy[9U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [9U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element___05Ffrom_mem_rdata___05Frdy[0xaU] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [0xaU];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element___05Ffrom_mem_rdata___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element___05Ffrom_mem_rdata___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element___05Ffrom_mem_rdata___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element___05Ffrom_mem_rdata___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element___05Ffrom_mem_rdata___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element___05Ffrom_mem_rdata___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element___05Ffrom_mem_rdata___05Frdy[6U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element___05Ffrom_mem_rdata___05Frdy[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element___05Ffrom_mem_rdata___05Frdy[8U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [8U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element___05Ffrom_mem_rdata___05Frdy[9U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [9U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element___05Ffrom_mem_rdata___05Frdy[0xaU] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [0xaU];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element___05Ffrom_mem_rdata___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element___05Ffrom_mem_rdata___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element___05Ffrom_mem_rdata___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element___05Ffrom_mem_rdata___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element___05Ffrom_mem_rdata___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element___05Ffrom_mem_rdata___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element___05Ffrom_mem_rdata___05Frdy[6U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element___05Ffrom_mem_rdata___05Frdy[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element___05Ffrom_mem_rdata___05Frdy[8U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [8U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element___05Ffrom_mem_rdata___05Frdy[9U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [9U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element___05Ffrom_mem_rdata___05Frdy[0xaU] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [0xaU];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element___05Ffrom_mem_rdata___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element___05Ffrom_mem_rdata___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element___05Ffrom_mem_rdata___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element___05Ffrom_mem_rdata___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element___05Ffrom_mem_rdata___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element___05Ffrom_mem_rdata___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element___05Ffrom_mem_rdata___05Frdy[6U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element___05Ffrom_mem_rdata___05Frdy[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element___05Ffrom_mem_rdata___05Frdy[8U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [8U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element___05Ffrom_mem_rdata___05Frdy[9U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [9U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element___05Ffrom_mem_rdata___05Frdy[0xaU] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__element__from_mem_rdata___05Frdy
        [0xaU];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Ffrom_mem_rdata___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element___05Ffrom_mem_rdata___05Frdy
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Ffrom_mem_rdata___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element___05Ffrom_mem_rdata___05Frdy
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Ffrom_mem_rdata___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element___05Ffrom_mem_rdata___05Frdy
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Ffrom_mem_rdata___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element___05Ffrom_mem_rdata___05Frdy
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_rdata___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Ffrom_mem_rdata___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_rdata___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Ffrom_mem_rdata___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_rdata___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Ffrom_mem_rdata___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellinp__data_mem__send_rdata___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_rdata___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellinp__data_mem__send_rdata___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_rdata___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellinp__data_mem__send_rdata___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_rdata___05Frdy
        [2U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__293(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__293\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [9U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [9U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [9U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [9U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [9U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__294(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__294\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [2U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [2U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [2U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [2U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [2U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__295(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__295\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [3U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [3U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [3U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [3U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [3U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__296(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__296\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [6U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [6U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [6U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [6U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [6U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__297(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__297\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [0U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [0U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [0U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [0U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__298(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__298\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F1__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [1U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F1__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [1U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [1U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [1U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [1U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F1__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__299(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__299\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [5U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [5U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [5U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [5U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [5U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__300(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__300\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F8__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [8U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F8__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [8U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [8U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [8U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [8U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F8__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__301(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__301\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [4U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [4U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [4U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [4U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [4U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__302(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__302\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [7U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [7U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [7U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [7U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [7U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__303(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__303\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [0xaU] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter))) 
                   >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [0xaU][2U] << 0x13U) 
                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0xaU][1U] 
                                        >> 0xdU))))
                        ? (0xffU & ((IData)(1U) << 
                                    (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [0xaU][2U] 
                                            << 0x13U) 
                                           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [0xaU][1U] 
                                              >> 0xdU)))))
                        : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__304(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__304\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [9U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [9U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [9U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [9U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [9U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__305(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__305\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [2U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [2U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [2U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [2U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [2U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__306(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__306\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [3U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [3U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [3U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [3U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [3U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__307(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__307\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [6U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [6U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [6U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [6U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [6U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__308(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__308\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [0U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [0U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [0U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [0U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__309(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__309\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [1U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [1U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [1U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [1U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [1U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__310(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__310\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [5U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [5U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [5U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [5U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [5U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__311(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__311\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [8U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [8U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [8U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [8U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [8U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__312(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__312\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [4U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [4U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [4U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [4U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [4U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__313(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__313\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [7U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [7U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [7U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [7U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [7U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__314(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__314\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [0xaU] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter))) 
                   >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [0xaU][2U] << 0x13U) 
                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0xaU][1U] 
                                        >> 0xdU))))
                        ? (0xffU & ((IData)(1U) << 
                                    (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [0xaU][2U] 
                                            << 0x13U) 
                                           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [0xaU][1U] 
                                              >> 0xdU)))))
                        : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__315(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__315\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [9U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [9U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [9U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [9U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [9U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__316(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__316\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [2U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [2U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [2U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [2U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [2U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__317(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__317\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [3U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [3U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [3U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [3U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [3U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__318(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__318\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [6U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [6U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [6U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [6U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [6U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__319(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__319\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [0U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [0U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [0U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [0U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__320(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__320\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [1U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [1U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [1U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [1U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [1U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__321(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__321\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [5U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [5U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [5U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [5U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [5U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__322(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__322\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [8U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [8U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [8U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [8U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [8U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__323(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__323\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [4U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [4U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [4U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [4U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [4U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__324(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__324\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [7U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [7U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [7U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [7U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [7U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__325(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__325\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [0xaU] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter))) 
                   >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [0xaU][2U] << 0x13U) 
                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0xaU][1U] 
                                        >> 0xdU))))
                        ? (0xffU & ((IData)(1U) << 
                                    (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [0xaU][2U] 
                                            << 0x13U) 
                                           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [0xaU][1U] 
                                              >> 0xdU)))))
                        : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__326(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__326\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [9U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [9U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [9U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [9U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [9U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__327(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__327\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [2U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [2U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [2U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [2U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [2U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__328(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__328\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [3U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [3U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [3U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [3U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [3U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__329(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__329\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [6U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [6U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [6U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [6U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [6U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__330(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__330\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [0U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [0U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [0U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [0U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__331(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__331\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [1U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [1U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [1U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [1U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [1U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__332(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__332\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [5U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [5U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [5U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [5U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [5U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__333(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__333\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [8U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [8U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [8U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [8U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [8U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__334(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__334\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [4U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [4U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [4U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [4U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [4U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__335(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__335\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
         [7U] & ((0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter))) 
                 >= ((7U >= (7U & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [7U][2U] << 0x13U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [7U][1U] >> 0xdU))))
                      ? (0xffU & ((IData)(1U) << (7U 
                                                  & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [7U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [7U][1U] 
                                                        >> 0xdU)))))
                      : 0U)))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor = 1U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__336(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__336\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_predicate_vector = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_predicate___05Fmsg = 0U;
    if ((0x100U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__reg_file___05Frdata
         [0U][3U])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_predicate___05Fmsg = 0U;
    }
    if (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 9U))))) {
        if ((0x10000U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__reg_file___05Frdata
             [0U][1U])) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
                = (2U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_predicate___05Fmsg));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_predicate_vector 
                = ((0xeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_predicate_vector)) 
                   | (1U & (IData)((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__routing_crossbar__recv_data___05Fmsg
                                    [0U] >> 2U))));
        }
        if ((0x20000U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__reg_file___05Frdata
             [0U][1U])) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
                = (2U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_predicate___05Fmsg));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_predicate_vector 
                = ((0xdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_predicate_vector)) 
                   | (2U & ((IData)((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__routing_crossbar__recv_data___05Fmsg
                                     [1U] >> 2U)) << 1U)));
        }
        if ((0x40000U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__reg_file___05Frdata
             [0U][1U])) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
                = (2U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_predicate___05Fmsg));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_predicate_vector 
                = ((0xbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_predicate_vector)) 
                   | (4U & ((IData)((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__routing_crossbar__recv_data___05Fmsg
                                     [2U] >> 2U)) << 2U)));
        }
        if ((0x80000U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__reg_file___05Frdata
             [0U][1U])) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
                = (2U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_predicate___05Fmsg));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_predicate_vector 
                = ((7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_predicate_vector)) 
                   | (8U & ((IData)((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__routing_crossbar__recv_data___05Fmsg
                                     [3U] >> 2U)) << 3U)));
        }
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
            = ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_predicate___05Fmsg)) 
               | (0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_predicate_vector)));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xfeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | ((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir
               [0U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_val
              [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
              [0U]]));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xfdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir
                [1U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
               [1U]]) << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xfbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir
                [2U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
               [2U]]) << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xf7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir
                [3U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
               [3U]]) << 3U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir
                [4U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
               [4U]]) << 4U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir
                [5U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
               [5U]]) << 5U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir
                [6U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
               [6U]]) << 6U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0x7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir
                [7U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
               [7U]]) << 7U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__reg_predicate__DOT__queues___05Frecv___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_predicate___05Fmsg;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xfeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector) 
                    | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xfdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (2U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector) 
                    | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xfbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (4U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector) 
                    | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xf7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (8U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector) 
                    | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (0x10U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector) 
                       | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (0x20U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector) 
                       | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (0x40U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector) 
                       | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0x7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (0x80U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector) 
                       | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval[0U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval[1U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval[2U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval[3U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval[4U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval[5U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval[6U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval[7U] = 0U;
    if (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 9U))))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval[0U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__send_required_vector));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval[1U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval[2U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval[3U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval[4U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval[5U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval[6U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval[7U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 7U));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[1U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[2U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[3U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[4U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[5U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[6U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[7U] = 0ULL;
    if (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 9U))))) {
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__send_required_vector))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [0U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
                                                      [0U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
                                                            [0U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 1U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[1U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [1U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
                                                      [1U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[1U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [1U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
                                                            [1U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 2U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[2U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [2U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
                                                      [2U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[2U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [2U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
                                                            [2U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 3U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[3U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [3U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
                                                      [3U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[3U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [3U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
                                                            [3U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 4U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[4U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [4U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
                                                      [4U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[4U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [4U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
                                                            [4U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 5U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[5U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [5U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
                                                      [5U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[5U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [5U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
                                                            [5U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 6U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[6U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [6U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
                                                      [6U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[6U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [6U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
                                                            [6U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 7U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[7U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [7U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
                                                      [7U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[7U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [7U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar__DOT__in_dir_local
                                                            [7U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__reg_predicate__DOT__queues___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fval[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fval[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fval[6U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fval[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fmsg[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fmsg[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fmsg[6U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fmsg[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__tile_out_or_link___05Frecv_xbar___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__tile_out_or_link___05Frecv_xbar___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__tile_out_or_link___05Frecv_xbar___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__tile_out_or_link___05Frecv_xbar___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fval
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fval
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fval
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fval
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__tile_out_or_link___05Frecv_xbar___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__tile_out_or_link___05Frecv_xbar___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__tile_out_or_link___05Frecv_xbar___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__tile_out_or_link___05Frecv_xbar___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05Finport_valid[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05Finport_valid[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05Finport_valid[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05Finport_valid[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05Finport_wdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05Finport_wdata[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05Finport_wdata[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05Finport_wdata[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg
        [3U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__337(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__337\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_predicate_vector = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_predicate___05Fmsg = 0U;
    if ((0x100U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__reg_file___05Frdata
         [0U][3U])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_predicate___05Fmsg = 0U;
    }
    if (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 9U))))) {
        if ((0x10000U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__reg_file___05Frdata
             [0U][1U])) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
                = (2U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_predicate___05Fmsg));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_predicate_vector 
                = ((0xeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_predicate_vector)) 
                   | (1U & (IData)((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__routing_crossbar__recv_data___05Fmsg
                                    [0U] >> 2U))));
        }
        if ((0x20000U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__reg_file___05Frdata
             [0U][1U])) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
                = (2U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_predicate___05Fmsg));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_predicate_vector 
                = ((0xdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_predicate_vector)) 
                   | (2U & ((IData)((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__routing_crossbar__recv_data___05Fmsg
                                     [1U] >> 2U)) << 1U)));
        }
        if ((0x40000U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__reg_file___05Frdata
             [0U][1U])) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
                = (2U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_predicate___05Fmsg));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_predicate_vector 
                = ((0xbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_predicate_vector)) 
                   | (4U & ((IData)((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__routing_crossbar__recv_data___05Fmsg
                                     [2U] >> 2U)) << 2U)));
        }
        if ((0x80000U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__reg_file___05Frdata
             [0U][1U])) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
                = (2U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_predicate___05Fmsg));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_predicate_vector 
                = ((7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_predicate_vector)) 
                   | (8U & ((IData)((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__routing_crossbar__recv_data___05Fmsg
                                     [3U] >> 2U)) << 3U)));
        }
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
            = ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_predicate___05Fmsg)) 
               | (0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_predicate_vector)));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xfeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | ((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir
               [0U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_val
              [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
              [0U]]));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xfdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir
                [1U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
               [1U]]) << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xfbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir
                [2U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
               [2U]]) << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xf7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir
                [3U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
               [3U]]) << 3U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir
                [4U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
               [4U]]) << 4U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir
                [5U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
               [5U]]) << 5U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir
                [6U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
               [6U]]) << 6U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0x7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir
                [7U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
               [7U]]) << 7U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__reg_predicate__DOT__queues___05Frecv___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_predicate___05Fmsg;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xfeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector) 
                    | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xfdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (2U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector) 
                    | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xfbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (4U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector) 
                    | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xf7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (8U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector) 
                    | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (0x10U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector) 
                       | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (0x20U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector) 
                       | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (0x40U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector) 
                       | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0x7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (0x80U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector) 
                       | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval[0U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval[1U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval[2U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval[3U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval[4U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval[5U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval[6U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval[7U] = 0U;
    if (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 9U))))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval[0U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__send_required_vector));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval[1U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval[2U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval[3U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval[4U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval[5U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval[6U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval[7U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 7U));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[1U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[2U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[3U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[4U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[5U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[6U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[7U] = 0ULL;
    if (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 9U))))) {
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__send_required_vector))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [0U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
                                                      [0U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
                                                            [0U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 1U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[1U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [1U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
                                                      [1U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[1U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [1U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
                                                            [1U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 2U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[2U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [2U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
                                                      [2U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[2U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [2U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
                                                            [2U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 3U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[3U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [3U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
                                                      [3U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[3U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [3U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
                                                            [3U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 4U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[4U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [4U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
                                                      [4U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[4U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [4U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
                                                            [4U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 5U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[5U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [5U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
                                                      [5U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[5U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [5U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
                                                            [5U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 6U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[6U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [6U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
                                                      [6U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[6U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [6U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
                                                            [6U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 7U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[7U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [7U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
                                                      [7U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[7U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [7U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar__DOT__in_dir_local
                                                            [7U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__reg_predicate__DOT__queues___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fval[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fval[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fval[6U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fval[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fmsg[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fmsg[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fmsg[6U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fmsg[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__tile_out_or_link___05Frecv_xbar___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__tile_out_or_link___05Frecv_xbar___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__tile_out_or_link___05Frecv_xbar___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__tile_out_or_link___05Frecv_xbar___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fval
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fval
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fval
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fval
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__tile_out_or_link___05Frecv_xbar___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__tile_out_or_link___05Frecv_xbar___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__tile_out_or_link___05Frecv_xbar___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__tile_out_or_link___05Frecv_xbar___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05Finport_valid[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05Finport_valid[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05Finport_valid[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05Finport_valid[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05Finport_wdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05Finport_wdata[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05Finport_wdata[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05Finport_wdata[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg
        [3U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__338(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__338\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_predicate_vector = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_predicate___05Fmsg = 0U;
    if ((0x100U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__reg_file___05Frdata
         [0U][3U])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_predicate___05Fmsg = 0U;
    }
    if (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 9U))))) {
        if ((0x10000U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__reg_file___05Frdata
             [0U][1U])) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
                = (2U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_predicate___05Fmsg));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_predicate_vector 
                = ((0xeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_predicate_vector)) 
                   | (1U & (IData)((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__routing_crossbar__recv_data___05Fmsg
                                    [0U] >> 2U))));
        }
        if ((0x20000U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__reg_file___05Frdata
             [0U][1U])) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
                = (2U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_predicate___05Fmsg));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_predicate_vector 
                = ((0xdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_predicate_vector)) 
                   | (2U & ((IData)((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__routing_crossbar__recv_data___05Fmsg
                                     [1U] >> 2U)) << 1U)));
        }
        if ((0x40000U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__reg_file___05Frdata
             [0U][1U])) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
                = (2U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_predicate___05Fmsg));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_predicate_vector 
                = ((0xbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_predicate_vector)) 
                   | (4U & ((IData)((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__routing_crossbar__recv_data___05Fmsg
                                     [2U] >> 2U)) << 2U)));
        }
        if ((0x80000U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__reg_file___05Frdata
             [0U][1U])) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
                = (2U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_predicate___05Fmsg));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_predicate_vector 
                = ((7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_predicate_vector)) 
                   | (8U & ((IData)((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__routing_crossbar__recv_data___05Fmsg
                                     [3U] >> 2U)) << 3U)));
        }
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
            = ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_predicate___05Fmsg)) 
               | (0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_predicate_vector)));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xfeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | ((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir
               [0U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_val
              [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
              [0U]]));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xfdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir
                [1U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
               [1U]]) << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xfbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir
                [2U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
               [2U]]) << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xf7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir
                [3U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
               [3U]]) << 3U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir
                [4U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
               [4U]]) << 4U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir
                [5U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
               [5U]]) << 5U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir
                [6U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
               [6U]]) << 6U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0x7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir
                [7U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
               [7U]]) << 7U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__reg_predicate__DOT__queues___05Frecv___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_predicate___05Fmsg;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xfeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector) 
                    | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xfdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (2U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector) 
                    | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xfbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (4U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector) 
                    | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xf7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (8U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector) 
                    | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (0x10U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector) 
                       | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (0x20U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector) 
                       | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (0x40U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector) 
                       | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0x7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (0x80U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector) 
                       | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval[0U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval[1U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval[2U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval[3U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval[4U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval[5U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval[6U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval[7U] = 0U;
    if (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 9U))))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval[0U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval[1U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval[2U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval[3U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval[4U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval[5U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval[6U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval[7U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 7U));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[1U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[2U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[3U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[4U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[5U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[6U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[7U] = 0ULL;
    if (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 9U))))) {
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [0U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
                                                      [0U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
                                                            [0U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 1U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[1U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [1U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
                                                      [1U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[1U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [1U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
                                                            [1U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 2U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[2U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [2U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
                                                      [2U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[2U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [2U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
                                                            [2U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 3U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[3U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [3U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
                                                      [3U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[3U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [3U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
                                                            [3U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 4U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[4U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [4U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
                                                      [4U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[4U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [4U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
                                                            [4U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 5U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[5U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [5U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
                                                      [5U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[5U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [5U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
                                                            [5U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 6U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[6U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [6U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
                                                      [6U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[6U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [6U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
                                                            [6U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 7U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[7U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [7U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
                                                      [7U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[7U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [7U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar__DOT__in_dir_local
                                                            [7U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__reg_predicate__DOT__queues___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fval[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fval[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fval[6U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fval[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fmsg[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fmsg[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fmsg[6U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fmsg[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__tile_out_or_link___05Frecv_xbar___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__tile_out_or_link___05Frecv_xbar___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__tile_out_or_link___05Frecv_xbar___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__tile_out_or_link___05Frecv_xbar___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fval
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fval
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fval
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fval
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__tile_out_or_link___05Frecv_xbar___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__tile_out_or_link___05Frecv_xbar___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__tile_out_or_link___05Frecv_xbar___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__tile_out_or_link___05Frecv_xbar___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05Finport_valid[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05Finport_valid[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05Finport_valid[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05Finport_valid[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05Finport_wdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05Finport_wdata[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05Finport_wdata[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05Finport_wdata[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg
        [3U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__339(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__339\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->recv_data_on_boundary_south___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_data___05Frdy
        [0U][1U];
    vlTOPp->recv_data_on_boundary_west___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_data___05Frdy
        [0U][2U];
    vlTOPp->recv_data_on_boundary_south___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_data___05Frdy
        [1U][1U];
    vlTOPp->recv_data_on_boundary_east___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_data___05Frdy
        [1U][3U];
    vlTOPp->recv_data_on_boundary_north___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_data___05Frdy
        [2U][0U];
    vlTOPp->recv_data_on_boundary_west___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_data___05Frdy
        [2U][2U];
    vlTOPp->recv_data_on_boundary_north___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_data___05Frdy
        [3U][0U];
    vlTOPp->recv_data_on_boundary_east___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_data___05Frdy
        [3U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Fsend_data___05Frdy[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_data___05Frdy
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Fsend_data___05Frdy[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_data___05Frdy
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Fsend_data___05Frdy[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_data___05Frdy
        [3U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Fsend_data___05Frdy[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_data___05Frdy
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Fsend_data___05Frdy[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_data___05Frdy
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Fsend_data___05Frdy[2U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_data___05Frdy
        [3U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Fsend_data___05Frdy[3U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_data___05Frdy
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Fsend_data___05Frdy[3U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_data___05Frdy
        [2U][3U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__340(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__340\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_predicate_vector = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_predicate___05Fmsg = 0U;
    if ((0x100U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Frdata
         [0U][3U])) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_predicate___05Fmsg = 0U;
    }
    if (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 9U))))) {
        if ((0x10000U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Frdata
             [0U][1U])) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
                = (2U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_predicate___05Fmsg));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_predicate_vector 
                = ((0xeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_predicate_vector)) 
                   | (1U & (IData)((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__routing_crossbar__recv_data___05Fmsg
                                    [0U] >> 2U))));
        }
        if ((0x20000U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Frdata
             [0U][1U])) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
                = (2U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_predicate___05Fmsg));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_predicate_vector 
                = ((0xdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_predicate_vector)) 
                   | (2U & ((IData)((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__routing_crossbar__recv_data___05Fmsg
                                     [1U] >> 2U)) << 1U)));
        }
        if ((0x40000U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Frdata
             [0U][1U])) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
                = (2U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_predicate___05Fmsg));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_predicate_vector 
                = ((0xbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_predicate_vector)) 
                   | (4U & ((IData)((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__routing_crossbar__recv_data___05Fmsg
                                     [2U] >> 2U)) << 2U)));
        }
        if ((0x80000U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Frdata
             [0U][1U])) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
                = (2U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_predicate___05Fmsg));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_predicate_vector 
                = ((7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_predicate_vector)) 
                   | (8U & ((IData)((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__routing_crossbar__recv_data___05Fmsg
                                     [3U] >> 2U)) << 3U)));
        }
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_predicate___05Fmsg 
            = ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_predicate___05Fmsg)) 
               | (0U != (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_predicate_vector)));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xfeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | ((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
               [0U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_val
              [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
              [0U]]));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xfdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
                [1U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
               [1U]]) << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xfbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
                [2U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
               [2U]]) << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xf7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
                [3U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
               [3U]]) << 3U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
                [4U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
               [4U]]) << 4U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
                [5U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
               [5U]]) << 5U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0xbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
                [6U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
               [6U]]) << 6U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector 
        = ((0x7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
           | (((0U >= vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir
                [7U]) | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_val
               [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
               [7U]]) << 7U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__reg_predicate__DOT__queues___05Frecv___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_predicate___05Fmsg;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xfeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector) 
                    | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xfdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (2U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector) 
                    | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xfbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (4U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector) 
                    | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xf7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (8U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector) 
                    | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (0x10U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector) 
                       | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (0x20U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector) 
                       | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0xbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (0x40U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector) 
                       | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector 
        = ((0x7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_or_prologue_allowing_vector)) 
           | (0x80U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector) 
                       | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__prologue_allowing_vector))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval[0U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval[1U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval[2U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval[3U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval[4U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval[5U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval[6U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval[7U] = 0U;
    if (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 9U))))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval[0U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__send_required_vector));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval[1U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval[2U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval[3U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval[4U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval[5U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval[6U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval[7U] 
            = ((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
               & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__send_required_vector) 
                  >> 7U));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[1U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[2U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[3U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[4U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[5U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[6U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[7U] = 0ULL;
    if (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Frecv_opt___05Fval) 
         & (0U != (0x3fU & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__reg_file___05Frdata
                            [0U][3U] >> 9U))))) {
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__send_required_vector))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[0U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [0U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                                                      [0U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[0U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                                                            [0U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 1U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[1U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [1U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                                                      [1U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[1U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [1U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                                                            [1U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 2U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[2U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [2U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                                                      [2U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[2U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [2U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                                                            [2U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 3U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[3U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [3U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                                                      [3U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[3U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [3U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                                                            [3U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 4U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[4U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [4U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                                                      [4U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[4U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [4U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                                                            [4U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 5U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[5U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [5U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                                                      [5U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[5U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [5U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                                                            [5U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 6U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[6U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [6U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                                                      [6U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[6U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [6U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                                                            [6U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
        if (((0xffU == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_valid_vector)) 
             & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__send_required_vector) 
                >> 7U))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[7U] 
                = ((7ULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [7U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_msg
                                                      [
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                                                      [7U]] 
                                                      >> 3U)))) 
                             << 3U));
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg[7U] 
                = ((0x7fffffffbULL & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
                    [7U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__recv_data_msg
                                                            [
                                                            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar__DOT__in_dir_local
                                                            [7U]] 
                                                            >> 2U))))) 
                             << 2U));
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__reg_predicate__DOT__queues___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fval[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fval[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fval[6U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fval[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fval
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fmsg[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fmsg[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fmsg[6U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fmsg[7U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellout__routing_crossbar__send_data___05Fmsg
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__tile_out_or_link___05Frecv_xbar___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__tile_out_or_link___05Frecv_xbar___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__tile_out_or_link___05Frecv_xbar___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__tile_out_or_link___05Frecv_xbar___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fval
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fval
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fval
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fval
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__tile_out_or_link___05Frecv_xbar___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__tile_out_or_link___05Frecv_xbar___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__tile_out_or_link___05Frecv_xbar___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__tile_out_or_link___05Frecv_xbar___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [6U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__routing_crossbar___05Fsend_data___05Fmsg
        [7U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster___05Frecv_data_from_routing_crossbar___05Fmsg
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05Finport_valid[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05Finport_valid[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05Finport_valid[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05Finport_valid[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05Finport_wdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05Finport_wdata[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05Finport_wdata[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05Finport_wdata[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT____Vcellinp__register_cluster__recv_data_from_routing_crossbar___05Fmsg
        [3U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__341(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__341\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__send_to_mem_store_request_queue__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__send_to_mem_store_request_queue__DOT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__send_to_mem_store_request_queue__DOT__queues___05Fsend___05Frdy
           [0U]);
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__342(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__342\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__send_to_mem_load_request_queue__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__send_to_mem_load_request_queue__DOT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__send_to_mem_load_request_queue__DOT__queues___05Fsend___05Frdy
           [0U]);
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__343(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__343\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx21 = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout 
        = vlTOPp->__Vtable21_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx21];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder__DOT__encode__DOT__unnamedblk1__DOT__i 
        = vlTOPp->__Vtable21_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder__DOT__encode__DOT__unnamedblk1__DOT__i
        [vlTOPp->__Vtableidx21];
    if ((5U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout][0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout][1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout][2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout][3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout][4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout][5U];
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][0U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][1U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][2U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][3U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][4U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][5U] = 0U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__344(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__344\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx22 = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout 
        = vlTOPp->__Vtable22_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx22];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder__DOT__encode__DOT__unnamedblk1__DOT__i 
        = vlTOPp->__Vtable22_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder__DOT__encode__DOT__unnamedblk1__DOT__i
        [vlTOPp->__Vtableidx22];
    if ((5U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout][0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout][1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout][2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout][3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout][4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout][5U];
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][0U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][1U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][2U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][3U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][4U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][5U] = 0U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__345(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__345\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fval[2U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx23 = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout 
        = vlTOPp->__Vtable23_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx23];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder__DOT__encode__DOT__unnamedblk1__DOT__i 
        = vlTOPp->__Vtable23_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder__DOT__encode__DOT__unnamedblk1__DOT__i
        [vlTOPp->__Vtableidx23];
    if ((5U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout][0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout][1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout][2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout][3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout][4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout][5U];
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][0U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][1U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][2U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][3U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][4U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][5U] = 0U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__346(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__346\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx30 = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout 
        = vlTOPp->__Vtable30_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx30];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder__DOT__encode__DOT__unnamedblk1__DOT__i 
        = vlTOPp->__Vtable30_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder__DOT__encode__DOT__unnamedblk1__DOT__i
        [vlTOPp->__Vtableidx30];
    if ((5U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout][0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout][1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout][2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout][3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout][4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout][5U];
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][0U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][1U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][2U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][3U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][4U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][5U] = 0U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__347(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__347\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx31 = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout 
        = vlTOPp->__Vtable31_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx31];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder__DOT__encode__DOT__unnamedblk1__DOT__i 
        = vlTOPp->__Vtable31_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder__DOT__encode__DOT__unnamedblk1__DOT__i
        [vlTOPp->__Vtableidx31];
    if ((5U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout][0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout][1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout][2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout][3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout][4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout][5U];
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][0U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][1U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][2U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][3U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][4U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][5U] = 0U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__348(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__348\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fval[2U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx32 = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout 
        = vlTOPp->__Vtable32_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx32];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder__DOT__encode__DOT__unnamedblk1__DOT__i 
        = vlTOPp->__Vtable32_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder__DOT__encode__DOT__unnamedblk1__DOT__i
        [vlTOPp->__Vtableidx32];
    if ((5U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout][0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout][1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout][2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout][3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout][4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout][5U];
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][0U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][1U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][2U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][3U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][4U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][5U] = 0U;
    }
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__349(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__349\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx39 = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout 
        = vlTOPp->__Vtable39_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx39];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder__DOT__encode__DOT__unnamedblk1__DOT__i 
        = vlTOPp->__Vtable39_CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder__DOT__encode__DOT__unnamedblk1__DOT__i
        [vlTOPp->__Vtableidx39];
    if ((5U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout][0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout][1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout][2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout][3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout][4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout][5U];
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][0U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][1U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][2U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][3U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][4U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][5U] = 0U;
    }
}
