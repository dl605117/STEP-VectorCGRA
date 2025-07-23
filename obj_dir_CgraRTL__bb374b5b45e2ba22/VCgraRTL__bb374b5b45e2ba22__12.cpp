// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCgraRTL__bb374b5b45e2ba22.h for the primary calling header

#include "VCgraRTL__bb374b5b45e2ba22.h"
#include "VCgraRTL__bb374b5b45e2ba22__Syms.h"

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__428(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__428\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__send___05Fen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Fsend___05Fen
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__send___05Fen[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Fsend___05Fen
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__send___05Fen[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Fsend___05Fen
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [0U] & (0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [0U] & (1U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [0U] & (2U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [0U] & (3U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [0U] & (4U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [0U] & (5U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [1U] & (0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [1U] & (1U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [1U] & (2U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [1U] & (3U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [1U] & (4U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [1U] & (5U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [2U] & (0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [2U] & (1U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [2U] & (2U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [2U] & (3U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [2U] & (4U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [2U] & (5U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__send___05Fen
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__send___05Fen
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__send___05Fen
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[2U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[2U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[2U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[2U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[2U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [2U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[3U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[3U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [2U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[4U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[4U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[4U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [2U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[5U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[5U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[5U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [2U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F0__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F0__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F0__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F1__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F1__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F1__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F2__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F2__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F2__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [2U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F3__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [3U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F3__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [3U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F3__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [3U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F4__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [4U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F4__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [4U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F4__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [4U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F5__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [5U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F5__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [5U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F5__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [5U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F0__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F0__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F0__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F1__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F1__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F1__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F2__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F2__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F2__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F3__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F3__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F3__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F4__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F4__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F4__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F5__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F5__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F5__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy[0U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy[1U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy[2U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy[3U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy[4U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy[5U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F0__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F0__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F1__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F1__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F2__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F2__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F0__send___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F0__send___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F0__recv___05Fyum[0U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F0__send___05Fval
           [0U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F0__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F0__recv___05Fyum[1U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F0__send___05Fval
           [1U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F0__send___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F1__send___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F1__send___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F1__recv___05Fyum[0U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F1__send___05Fval
           [0U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F1__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F1__recv___05Fyum[1U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F1__send___05Fval
           [1U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F1__send___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F2__send___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F2__send___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F2__recv___05Fyum[0U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F2__send___05Fval
           [0U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F2__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F2__recv___05Fyum[1U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F2__send___05Fval
           [1U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F2__send___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F0__recv___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F0__recv___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F1__recv___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F1__recv___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F2__recv___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F2__recv___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[0U][0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[0U][0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[0U][1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[0U][1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[0U][2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[0U][2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum
        [2U][1U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__429(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__429\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__send___05Fen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Fsend___05Fen
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__send___05Fen[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Fsend___05Fen
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__send___05Fen[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Fsend___05Fen
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [0U] & (0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [0U] & (1U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [0U] & (2U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [0U] & (3U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [0U] & (4U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [0U] & (5U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [1U] & (0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [1U] & (1U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [1U] & (2U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [1U] & (3U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [1U] & (4U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [1U] & (5U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [2U] & (0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [2U] & (1U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [2U] & (2U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [2U] & (3U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [2U] & (4U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [2U] & (5U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__send___05Fen
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__send___05Fen
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__send___05Fen
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[2U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[2U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[2U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[2U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[2U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [2U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[3U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[3U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [2U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[4U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[4U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[4U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [2U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[5U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[5U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[5U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [2U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F0__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F0__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F0__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F1__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F1__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F1__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F2__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F2__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F2__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [2U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F3__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [3U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F3__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [3U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F3__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [3U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F4__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [4U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F4__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [4U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F4__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [4U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F5__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [5U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F5__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [5U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F5__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [5U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F0__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F0__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F0__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F1__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F1__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F1__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F2__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F2__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F2__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F3__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F3__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F3__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F4__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F4__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F4__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F5__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F5__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F5__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy[0U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy[1U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy[2U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy[3U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy[4U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy[5U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F0__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F0__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F1__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F1__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F2__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F2__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F0__send___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F0__send___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F0__recv___05Fyum[0U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F0__send___05Fval
           [0U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F0__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F0__recv___05Fyum[1U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F0__send___05Fval
           [1U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F0__send___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F1__send___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F1__send___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F1__recv___05Fyum[0U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F1__send___05Fval
           [0U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F1__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F1__recv___05Fyum[1U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F1__send___05Fval
           [1U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F1__send___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F2__send___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F2__send___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F2__recv___05Fyum[0U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F2__send___05Fval
           [0U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F2__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F2__recv___05Fyum[1U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F2__send___05Fval
           [1U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F2__send___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F0__recv___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F0__recv___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F1__recv___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F1__recv___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F2__recv___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F2__recv___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[1U][0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[1U][0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[1U][1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[1U][1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[1U][2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[1U][2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum
        [2U][1U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__430(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__430\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__send___05Fen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Fsend___05Fen
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__send___05Fen[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Fsend___05Fen
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__send___05Fen[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Fsend___05Fen
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [0U] & (0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [0U] & (1U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [0U] & (2U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [0U] & (3U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [0U] & (4U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [0U] & (5U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [1U] & (0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [1U] & (1U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [1U] & (2U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [1U] & (3U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [1U] & (4U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [1U] & (5U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [2U] & (0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [2U] & (1U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [2U] & (2U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [2U] & (3U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [2U] & (4U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [2U] & (5U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__send___05Fen
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__send___05Fen
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[2U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__send___05Fen
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[2U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[2U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[2U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[2U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[2U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [2U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[3U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[3U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [2U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[4U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[4U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[4U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [2U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[5U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[5U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[5U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [2U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F0__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F0__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F0__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F1__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F1__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F1__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F2__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F2__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F2__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [2U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F3__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [3U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F3__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [3U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F3__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [3U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F4__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [4U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F4__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [4U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F4__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [4U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F5__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [5U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F5__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [5U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F5__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [5U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F0__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F0__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F0__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F1__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F1__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F1__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F2__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F2__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F2__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F3__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F3__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F3__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F4__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F4__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F4__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F5__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F5__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F5__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy[0U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy[1U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy[2U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy[3U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy[4U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy[5U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F0__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F0__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F1__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F1__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F2__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F2__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F0__send___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F0__send___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F0__recv___05Fyum[0U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F0__send___05Fval
           [0U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F0__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F0__recv___05Fyum[1U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F0__send___05Fval
           [1U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F0__send___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F1__send___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F1__send___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F1__recv___05Fyum[0U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F1__send___05Fval
           [0U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F1__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F1__recv___05Fyum[1U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F1__send___05Fval
           [1U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F1__send___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F2__send___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F2__send___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F2__recv___05Fyum[0U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F2__send___05Fval
           [0U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F2__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F2__recv___05Fyum[1U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F2__send___05Fval
           [1U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F2__send___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F0__recv___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F0__recv___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F1__recv___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F1__recv___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F2__recv___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F2__recv___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[2U][0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[2U][0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[2U][1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[2U][1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[2U][2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[2U][2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum
        [2U][1U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__431(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__431\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__send___05Fen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Fsend___05Fen
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__send___05Fen[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Fsend___05Fen
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__send___05Fen[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Fsend___05Fen
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [0U] & (0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F0__recv___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [0U] & (1U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F0__recv___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [0U] & (2U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F0__recv___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [0U] & (3U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F0__recv___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [0U] & (4U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F0__recv___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [0U] & (5U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F0__recv___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [1U] & (0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F1__recv___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [1U] & (1U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F1__recv___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [1U] & (2U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F1__recv___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [1U] & (3U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F1__recv___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [1U] & (4U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F1__recv___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [1U] & (5U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F1__recv___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [2U] & (0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F2__recv___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [2U] & (1U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F2__recv___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [2U] & (2U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F2__recv___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [2U] & (3U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F2__recv___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [2U] & (4U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F2__recv___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Frdy
           [2U] & (5U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F2__recv___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__send___05Fen
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[3U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__send___05Fen
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[3U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__send___05Fen
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[2U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[2U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[2U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy[2U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[2U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [2U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[3U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[3U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [2U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[4U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[4U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[4U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [2U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[5U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[5U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy[5U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Frecv___05Frdy
        [2U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F0__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F0__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F0__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F1__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F1__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F1__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F2__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F2__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F2__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [2U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F3__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [3U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F3__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [3U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F3__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [3U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F4__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [4U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F4__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [4U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F4__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [4U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F5__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [5U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F5__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [5U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F5__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Fsend___05Frdy
        [5U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F0__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F0__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F0__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F0__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F0__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F0__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F0__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F0__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F0__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F1__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F1__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F1__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F1__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F1__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F1__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F1__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F1__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F1__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F2__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F2__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F2__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F2__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F2__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F2__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F2__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F2__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F2__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F3__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F3__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F3__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F3__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F3__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F3__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F3__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F3__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F3__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F4__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F4__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F4__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F4__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F4__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F4__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F4__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F4__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F4__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F5__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F5__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F5__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F5__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F5__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F5__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F5__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F5__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__route_units___05F5__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Frecv___05Frdy[0U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F0__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F0__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F0__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Frecv___05Frdy[1U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F1__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F1__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F1__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Frecv___05Frdy[2U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F2__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F2__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F2__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Frecv___05Frdy[3U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F3__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F3__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F3__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Frecv___05Frdy[4U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F4__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F4__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F4__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Frecv___05Frdy[5U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F5__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F5__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05F5__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Fsend___05Frdy[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Fsend___05Frdy[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Fsend___05Frdy[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Fsend___05Frdy[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Frecv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Fsend___05Frdy[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Frecv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Fsend___05Frdy[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__route_units___05Frecv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F0__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Fsend___05Frdy
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F0__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Fsend___05Frdy
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F1__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Fsend___05Frdy
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F1__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Fsend___05Frdy
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F2__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Fsend___05Frdy
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F2__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Fsend___05Frdy
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F0__send___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F0__send___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F0__recv___05Fyum[0U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F0__send___05Fval
           [0U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F0__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F0__recv___05Fyum[1U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F0__send___05Fval
           [1U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F0__send___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F1__send___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F1__send___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F1__recv___05Fyum[0U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F1__send___05Fval
           [0U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F1__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F1__recv___05Fyum[1U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F1__send___05Fval
           [1U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F1__send___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F2__send___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F2__send___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F2__recv___05Fyum[0U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F2__send___05Fval
           [0U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F2__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F2__recv___05Fyum[1U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F2__send___05Fval
           [1U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellinp__input_units___05F2__send___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Frecv___05Fyum[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F0__recv___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Frecv___05Fyum[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F0__recv___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Frecv___05Fyum[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F1__recv___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Frecv___05Fyum[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F1__recv___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Frecv___05Fyum[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F2__recv___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Frecv___05Fyum[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__input_units___05F2__recv___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__recv___05Fyum[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Frecv___05Fyum
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__recv___05Fyum[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Frecv___05Fyum
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__recv___05Fyum[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Frecv___05Fyum
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__recv___05Fyum[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Frecv___05Fyum
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__recv___05Fyum[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Frecv___05Fyum
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__recv___05Fyum[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05Frecv___05Fyum
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[3U][0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__recv___05Fyum
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[3U][0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__recv___05Fyum
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[3U][1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__recv___05Fyum
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[3U][1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__recv___05Fyum
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[3U][2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__recv___05Fyum
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[3U][2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F3__recv___05Fyum
        [2U][1U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__432(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__432\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__send___05Fen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Fsend___05Fen
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__send___05Fen[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Fsend___05Fen
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__send___05Fen[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Fsend___05Fen
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [0U] & (0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F0__recv___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [0U] & (1U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F0__recv___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [0U] & (2U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F0__recv___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [0U] & (3U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F0__recv___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [0U] & (4U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F0__recv___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [0U] & (5U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F0__recv___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [1U] & (0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F1__recv___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [1U] & (1U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F1__recv___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [1U] & (2U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F1__recv___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [1U] & (3U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F1__recv___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [1U] & (4U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F1__recv___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [1U] & (5U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F1__recv___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [2U] & (0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F2__recv___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [2U] & (1U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F2__recv___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [2U] & (2U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F2__recv___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [2U] & (3U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F2__recv___05Frdy[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [2U] & (4U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F2__recv___05Frdy[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Frdy
           [2U] & (5U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F2__recv___05Frdy[5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[4U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__send___05Fen
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[4U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__send___05Fen
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[4U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__send___05Fen
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[2U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[2U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[2U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy[2U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[2U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [2U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[3U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[3U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [2U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[4U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[4U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[4U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [2U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[5U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[5U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy[5U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Frecv___05Frdy
        [2U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F0__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F0__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F0__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F1__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F1__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F1__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F2__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F2__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F2__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [2U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F3__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [3U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F3__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [3U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F3__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [3U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F4__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [4U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F4__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [4U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F4__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [4U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F5__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [5U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F5__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [5U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F5__send___05Frdy[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Fsend___05Frdy
        [5U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F0__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F0__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F0__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F0__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F0__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F0__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F0__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F0__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F0__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F1__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F1__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F1__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F1__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F1__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F1__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F1__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F1__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F1__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F2__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F2__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F2__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F2__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F2__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F2__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F2__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F2__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F2__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F3__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F3__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F3__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F3__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F3__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F3__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F3__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F3__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F3__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F4__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F4__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F4__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F4__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F4__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F4__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F4__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F4__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F4__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F5__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F5__DOT__send_rdy)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F5__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F5__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F5__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F5__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F5__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F5__DOT__send_rdy)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__route_units___05F5__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Frecv___05Frdy[0U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F0__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F0__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F0__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Frecv___05Frdy[1U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F1__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F1__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F1__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Frecv___05Frdy[2U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F2__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F2__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F2__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Frecv___05Frdy[3U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F3__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F3__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F3__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Frecv___05Frdy[4U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F4__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F4__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F4__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Frecv___05Frdy[5U] 
        = ((2U >= (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F5__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F5__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05F5__DOT__out_dir)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Fsend___05Frdy[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Fsend___05Frdy[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Fsend___05Frdy[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Fsend___05Frdy[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Frecv___05Frdy
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Fsend___05Frdy[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Frecv___05Frdy
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Fsend___05Frdy[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__route_units___05Frecv___05Frdy
        [5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F0__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Fsend___05Frdy
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F0__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Fsend___05Frdy
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F1__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Fsend___05Frdy
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F1__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Fsend___05Frdy
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F2__send___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Fsend___05Frdy
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F2__send___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Fsend___05Frdy
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F0__send___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F0__send___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F0__recv___05Fyum[0U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F0__send___05Fval
           [0U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F0__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F0__recv___05Fyum[1U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F0__send___05Fval
           [1U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F0__send___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F1__send___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F1__send___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F1__recv___05Fyum[0U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F1__send___05Fval
           [0U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F1__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F1__recv___05Fyum[1U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F1__send___05Fval
           [1U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F1__send___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F2__send___05Frdy
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F2__send___05Frdy
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F2__recv___05Fyum[0U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F2__send___05Fval
           [0U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F2__send___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F2__recv___05Fyum[1U] 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F2__send___05Fval
           [1U] & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellinp__input_units___05F2__send___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Frecv___05Fyum[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F0__recv___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Frecv___05Fyum[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F0__recv___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Frecv___05Fyum[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F1__recv___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Frecv___05Fyum[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F1__recv___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Frecv___05Fyum[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F2__recv___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Frecv___05Fyum[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__input_units___05F2__recv___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__recv___05Fyum[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Frecv___05Fyum
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__recv___05Fyum[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Frecv___05Fyum
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__recv___05Fyum[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Frecv___05Fyum
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__recv___05Fyum[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Frecv___05Fyum
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__recv___05Fyum[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Frecv___05Fyum
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__recv___05Fyum[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05Frecv___05Fyum
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[4U][0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__recv___05Fyum
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[4U][0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__recv___05Fyum
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[4U][1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__recv___05Fyum
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[4U][1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__recv___05Fyum
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[4U][2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__recv___05Fyum
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[4U][2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__routers___05F4__recv___05Fyum
        [2U][1U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__433(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__433\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount))][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount))][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount))][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount))][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount))][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount))][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__434(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__434\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount))][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount))][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount))][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount))][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount))][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount))][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__435(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__435\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount))][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount))][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount))][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount))][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount))][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount))][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__436(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__436\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount))][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount))][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount))][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount))][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount))][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount))][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__437(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__437\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount))][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount))][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount))][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount))][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount))][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount))][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__438(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__438\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount))][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount))][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount))][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount))][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount))][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount))][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__439(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__439\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fcount))][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fcount))][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fcount))][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fcount))][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fcount))][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fcount))][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__440(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__440\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fcount))][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fcount))][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fcount))][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fcount))][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fcount))][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fcount))][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__441(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__441\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fcount))][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fcount))][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fcount))][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fcount))][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fcount))][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fcount))][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__442(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__442\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fcount))][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fcount))][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fcount))][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fcount))][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fcount))][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fcount))][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__443(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__443\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Frecv___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Frecv___05Fmsg[1U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Frecv___05Fmsg[2U] = 0ULL;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Frecv___05Fmsg[3U] = 0ULL;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__init_mem_done) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Frecv___05Fmsg[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellinp__data_mem__recv_wdata___05Fmsg
            [0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Frecv___05Fmsg[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellinp__data_mem__recv_wdata___05Fmsg
            [1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Frecv___05Fmsg[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellinp__data_mem__recv_wdata___05Fmsg
            [2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Frecv___05Fmsg[3U] 
            = (0x7ffffffffULL & (((QData)((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__send_to_mem_store_request_queue__DOT__queues___05Fsend___05Fmsg
                                                  [0U][5U])) 
                                  << 0x27U) | (((QData)((IData)(
                                                                vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__send_to_mem_store_request_queue__DOT__queues___05Fsend___05Fmsg
                                                                [0U][4U])) 
                                                << 7U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__send_to_mem_store_request_queue__DOT__queues___05Fsend___05Fmsg
                                                                  [0U][3U])) 
                                                  >> 0x19U))));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F0__DOT__q__DOT__bypass_mux___05Fin_[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F1__DOT__q__DOT__bypass_mux___05Fin_[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Frecv___05Fmsg
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F2__DOT__q__DOT__bypass_mux___05Fin_[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Frecv___05Fmsg
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F3__DOT__q__DOT__bypass_mux___05Fin_[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Frecv___05Fmsg
        [3U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__444(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__444\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fen[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fen[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fen[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fen[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fen[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fen[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen
        [3U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fen[4U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen
        [3U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fen[3U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen
        [4U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fen[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen
        [4U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fen[4U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen
        [2U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen
        [3U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen
        [4U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [0U][2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [0U][2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [1U][2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [1U][2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [2U][2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [2U][2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [3U][2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum[3U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [3U][2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum[4U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [4U][2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum[4U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [4U][2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[0U][1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [1U][0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[0U][1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [1U][0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[1U][0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [0U][1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[1U][0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [0U][1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[1U][1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [2U][0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[1U][1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [2U][0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[2U][0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [1U][1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[2U][0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [1U][1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[2U][1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [3U][0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[2U][1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [3U][0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[3U][0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [2U][1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[3U][0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [2U][1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[3U][1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [4U][0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[3U][1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [4U][0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[4U][0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [3U][1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[4U][0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [3U][1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[4U][1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [0U][0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[4U][1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [0U][0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[0U][0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [4U][1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Fsend___05Fyum[0U][0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum
        [4U][1U][1U];
    if ((1U & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
               [0U]))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__up_enq__DOT__unnamedblk3__DOT__i = 2U;
    }
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
        [0U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__up_enq__DOT__unnamedblk2__DOT__i = 2U;
    }
    if ((1U & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
               [1U]))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__up_enq__DOT__unnamedblk3__DOT__i = 2U;
    }
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
        [1U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__up_enq__DOT__unnamedblk2__DOT__i = 2U;
    }
    if ((1U & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
               [2U]))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__up_enq__DOT__unnamedblk3__DOT__i = 2U;
    }
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
        [2U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__up_enq__DOT__unnamedblk2__DOT__i = 2U;
    }
    if ((1U & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
               [3U]))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__up_enq__DOT__unnamedblk3__DOT__i = 2U;
    }
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
        [3U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__up_enq__DOT__unnamedblk2__DOT__i = 2U;
    }
    if ((1U & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
               [4U]))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__up_enq__DOT__unnamedblk3__DOT__i = 2U;
    }
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
        [4U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__up_enq__DOT__unnamedblk2__DOT__i = 2U;
    }
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
        [0U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fval[0U] 
            = (1U & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
                     [0U][5U]));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fval[1U] 
            = (1U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
               [0U][5U]);
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fval[0U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fval[1U] = 0U;
    }
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
        [1U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fval[0U] 
            = (1U & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
                     [1U][5U]));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fval[1U] 
            = (1U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
               [1U][5U]);
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fval[0U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fval[1U] = 0U;
    }
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
        [2U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fval[0U] 
            = (1U & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
                     [2U][5U]));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fval[1U] 
            = (1U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
               [2U][5U]);
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fval[0U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fval[1U] = 0U;
    }
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
        [3U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fval[0U] 
            = (1U & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
                     [3U][5U]));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fval[1U] 
            = (1U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
               [3U][5U]);
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fval[0U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fval[1U] = 0U;
    }
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
        [4U]) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fval[0U] 
            = (1U & (~ vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
                     [4U][5U]));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fval[1U] 
            = (1U & vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
               [4U][5U]);
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fval[0U] = 0U;
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fval[1U] = 0U;
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F0__send___05Fyum[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F0__send___05Fyum[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F1__send___05Fyum[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F1__send___05Fyum[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F2__send___05Fyum[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F2__send___05Fyum[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F3__send___05Fyum[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum
        [3U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F3__send___05Fyum[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum
        [3U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F4__send___05Fyum[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum
        [4U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F4__send___05Fyum[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum
        [4U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fincr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F0__send___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F0__DOT__credit___05Fincr[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F0__send___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fincr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F1__send___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F1__DOT__credit___05Fincr[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F1__send___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fincr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F2__send___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F2__DOT__credit___05Fincr[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F2__send___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fincr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F3__send___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fincr[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F3__send___05Fyum
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fincr[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F4__send___05Fyum
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fincr[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellinp__recv_adp___05F4__send___05Fyum
        [1U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__445(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__445\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F0__DOT__q__DOT____Vcellinp__bypass_mux__in_[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F0__DOT__q__DOT__bypass_mux___05Fin_
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F0__DOT__q__DOT____Vcellinp__bypass_mux__in_[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F0__DOT__q__DOT__bypass_mux___05Fin_
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F0__DOT__q__DOT____Vcellinp__bypass_mux__in_
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F0__DOT__q__DOT__full];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__446(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__446\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F1__DOT__q__DOT____Vcellinp__bypass_mux__in_[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F1__DOT__q__DOT__bypass_mux___05Fin_
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F1__DOT__q__DOT____Vcellinp__bypass_mux__in_[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F1__DOT__q__DOT__bypass_mux___05Fin_
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Fsend___05Fmsg[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F1__DOT__q__DOT____Vcellinp__bypass_mux__in_
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F1__DOT__q__DOT__full];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__447(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__447\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F2__DOT__q__DOT____Vcellinp__bypass_mux__in_[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F2__DOT__q__DOT__bypass_mux___05Fin_
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F2__DOT__q__DOT____Vcellinp__bypass_mux__in_[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F2__DOT__q__DOT__bypass_mux___05Fin_
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Fsend___05Fmsg[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F2__DOT__q__DOT____Vcellinp__bypass_mux__in_
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F2__DOT__q__DOT__full];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__448(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__448\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F3__DOT__q__DOT____Vcellinp__bypass_mux__in_[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F3__DOT__q__DOT__bypass_mux___05Fin_
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F3__DOT__q__DOT____Vcellinp__bypass_mux__in_[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F3__DOT__q__DOT__bypass_mux___05Fin_
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Fsend___05Fmsg[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F3__DOT__q__DOT____Vcellinp__bypass_mux__in_
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05F3__DOT__q__DOT__full];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__449(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__449\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fval
           [0U] & (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fval
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__ctrl___05Fsend_val;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__450(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__450\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fval
           [1U] & (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fval
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__ctrl___05Fsend_val;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen
        [0U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__451(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__451\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fval
           [0U] & (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fval
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__ctrl___05Fsend_val;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__452(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__452\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fval
           [1U] & (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fval
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__ctrl___05Fsend_val;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen
        [0U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__453(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__453\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fval
           [0U] & (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fval
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fsend_val;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__454(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__454\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fval
           [1U] & (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fval
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fsend_val;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen
        [0U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__455(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__455\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fval
           [0U] & (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fcount)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fval
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fsend_val;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__456(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__456\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fval
           [1U] & (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fcount)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fval
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fsend_val;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen
        [0U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__457(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__457\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fval
           [0U] & (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fcount)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fval
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fsend_val;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__458(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__458\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer 
        = (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fval
           [1U] & (2U > (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fcount)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fval
           [1U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fsend_val;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen
        [0U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_combo__TOP__459(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_combo__TOP__459\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp7044[4];
    WData/*127:0*/ __Vtemp7045[4];
    // Body
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__init_mem_done) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__reg_file___05Fwdata[0U][0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Fsend___05Fmsg
            [(3U & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                    [0U] >> 0xeU))];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__reg_file___05Fwdata[1U][0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Fsend___05Fmsg
            [(3U & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                    [1U] >> 0xeU))];
    } else {
        if ((0U >= (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__init_mem_addr)))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__reg_file___05Fwdata[0U][0U] 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__preload_data_per_bank
                [0U][(1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__init_mem_addr))];
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__reg_file___05Fwdata[1U][0U] 
                = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__preload_data_per_bank
                [1U][(1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__init_mem_addr))];
        } else {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__reg_file___05Fwdata[0U][0U] = 0ULL;
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__reg_file___05Fwdata[1U][0U] = 0ULL;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[0U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[1U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[2U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[3U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[4U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[5U] = 0U;
    if (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__init_mem_done) {
        __Vtemp7044[0U] = 0U;
        __Vtemp7044[1U] = 0U;
        __Vtemp7044[2U] = 0U;
        __Vtemp7044[3U] = (0x1fc0000U & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                         [2U] << 0xdU));
        VL_EXTEND_WW(123,121, __Vtemp7045, __Vtemp7044);
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[0U] 
            = __Vtemp7045[0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[1U] 
            = __Vtemp7045[1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[2U] 
            = __Vtemp7045[2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[3U] 
            = ((0xf8000000U & ((IData)((0x1ffffffffULL 
                                        & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Fsend___05Fmsg
                                           [(3U & (
                                                   vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                                   [2U] 
                                                   >> 0xeU))] 
                                           >> 2U))) 
                               << 0x1bU)) | __Vtemp7045[3U]);
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[4U] 
            = (0xc0000000U | ((0x7ffffffU & ((IData)(
                                                     (0x1ffffffffULL 
                                                      & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Fsend___05Fmsg
                                                         [
                                                         (3U 
                                                          & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                                             [2U] 
                                                             >> 0xeU))] 
                                                         >> 2U))) 
                                             >> 5U)) 
                              | (0xf8000000U & ((IData)(
                                                        ((0x1ffffffffULL 
                                                          & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__recv_wdata_bypass_q___05Fsend___05Fmsg
                                                             [
                                                             (3U 
                                                              & (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                                                 [2U] 
                                                                 >> 0xeU))] 
                                                             >> 2U)) 
                                                         >> 0x20U)) 
                                                << 0x1bU))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[5U] 
            = (((IData)(vlTOPp->cgra_id) << 0x18U) 
               | ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__idTo2d_x_lut
                   [vlTOPp->cgra_id] << 0x14U) | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__idTo2d_y_lut
                                                  [vlTOPp->cgra_id] 
                                                  << 0x13U)));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT____Vcellinp__reg_file___05F0__wdata[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__reg_file___05Fwdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT____Vcellinp__reg_file___05F1__wdata[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem__DOT__reg_file___05Fwdata
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05Frecv___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05Frecv___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05Frecv___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05Frecv___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05Frecv___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05Frecv___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05Frecv___05Fmsg
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05Frecv___05Fmsg
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05Frecv___05Fmsg
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05Frecv___05Fmsg
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05Frecv___05Fmsg
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05Frecv___05Fmsg
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__controller__DOT__recv_from_tile_store_request_pkt_queue__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__460(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__460\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter___05Freqs 
        = ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter___05Freqs)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fval
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter___05Freqs 
        = ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter___05Freqs)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fval
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int 
        = ((0xcU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter___05Freqs));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter___05Freqs) 
              << 2U));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__461(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__461\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter___05Freqs 
        = ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter___05Freqs)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fval
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter___05Freqs 
        = ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter___05Freqs)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fval
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int 
        = ((0xcU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter___05Freqs));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter___05Freqs) 
              << 2U));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__462(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__462\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter___05Freqs 
        = ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter___05Freqs)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fval
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter___05Freqs 
        = ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter___05Freqs)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fval
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int 
        = ((0xcU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter___05Freqs));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter___05Freqs) 
              << 2U));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__463(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__463\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter___05Freqs 
        = ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter___05Freqs)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fval
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter___05Freqs 
        = ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter___05Freqs)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fval
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int 
        = ((0xcU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter___05Freqs));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter___05Freqs) 
              << 2U));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__464(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__464\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter___05Freqs 
        = ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter___05Freqs)) 
           | vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fval
           [0U]);
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter___05Freqs 
        = ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter___05Freqs)) 
           | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fval
              [1U] << 1U));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int 
        = ((0xcU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int)) 
           | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter___05Freqs));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int 
        = ((3U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int)) 
           | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter___05Freqs) 
              << 2U));
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__465(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__465\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT____Vlvbound1 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT____Vlvbound1) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT____Vlvbound1 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT____Vlvbound1) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT____Vlvbound1 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills 
            = ((0x17U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT____Vlvbound1) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills 
            = ((0x17U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT____Vlvbound1 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills 
            = ((0xfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT____Vlvbound1) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills 
            = ((0xfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__grants_int)) 
           | (1U & ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__priority_int))
                     ? (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int)
                     : ((~ (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills)) 
                        & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int)))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__grants_int)) 
           | (2U & (((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__priority_int))
                      ? ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int) 
                         >> 1U) : ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills) 
                                       >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int) 
                                                  >> 1U))) 
                    << 1U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__grants_int)) 
           | (4U & (((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__priority_int))
                      ? ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int) 
                         >> 2U) : ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills) 
                                       >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int) 
                                                  >> 2U))) 
                    << 2U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__grants_int 
        = ((7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__grants_int)) 
           | (8U & (((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__priority_int))
                      ? ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int) 
                         >> 3U) : ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__kills) 
                                       >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__reqs_int) 
                                                  >> 3U))) 
                    << 3U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter___05Fgrants 
        = ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter___05Fgrants)) 
           | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__grants_int) 
                    | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__grants_int) 
                       >> 2U))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter___05Fgrants 
        = ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter___05Fgrants)) 
           | (2U & ((0xfffffffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__grants_int)) 
                    | (0x3ffffffeU & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__grants_int) 
                                      >> 2U)))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((2U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter___05Fgrants) 
                  << 1U)) | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter___05Fgrants) 
                                   >> 1U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__send_adp___05F0__send___05Fval 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter___05Fgrants));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__encoder___05Fout = 0U;
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter___05Fgrants))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__encoder___05Fout = 0U;
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__arbiter___05Fgrants))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__encoder___05Fout = 1U;
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__send_adp___05F0__send___05Fval;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__encoder___05Fout][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__encoder___05Fout][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__encoder___05Fout][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__encoder___05Fout][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__encoder___05Fout][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__encoder___05Fout][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__466(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__466\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT____Vlvbound1 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills 
            = ((0x1dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT____Vlvbound1) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills 
            = ((0x1dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT____Vlvbound1 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills 
            = ((0x1bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT____Vlvbound1) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills 
            = ((0x1bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT____Vlvbound1 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills 
            = ((0x17U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT____Vlvbound1) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills 
            = ((0x17U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT____Vlvbound1 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills 
            = ((0xfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT____Vlvbound1) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills 
            = ((0xfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__grants_int)) 
           | (1U & ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__priority_int))
                     ? (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int)
                     : ((~ (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills)) 
                        & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int)))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__grants_int)) 
           | (2U & (((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__priority_int))
                      ? ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int) 
                         >> 1U) : ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills) 
                                       >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int) 
                                                  >> 1U))) 
                    << 1U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__grants_int)) 
           | (4U & (((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__priority_int))
                      ? ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int) 
                         >> 2U) : ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills) 
                                       >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int) 
                                                  >> 2U))) 
                    << 2U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__grants_int 
        = ((7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__grants_int)) 
           | (8U & (((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__priority_int))
                      ? ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int) 
                         >> 3U) : ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__kills) 
                                       >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__reqs_int) 
                                                  >> 3U))) 
                    << 3U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter___05Fgrants 
        = ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter___05Fgrants)) 
           | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__grants_int) 
                    | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__grants_int) 
                       >> 2U))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter___05Fgrants 
        = ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter___05Fgrants)) 
           | (2U & ((0xfffffffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__grants_int)) 
                    | (0x3ffffffeU & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__grants_int) 
                                      >> 2U)))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((2U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter___05Fgrants) 
                  << 1U)) | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter___05Fgrants) 
                                   >> 1U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__send_adp___05F1__send___05Fval 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter___05Fgrants));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__encoder___05Fout = 0U;
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter___05Fgrants))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__encoder___05Fout = 0U;
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__arbiter___05Fgrants))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__encoder___05Fout = 1U;
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__send_adp___05F1__send___05Fval;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__encoder___05Fout][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__encoder___05Fout][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__encoder___05Fout][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__encoder___05Fout][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__encoder___05Fout][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__encoder___05Fout][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__467(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__467\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT____Vlvbound1 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills 
            = ((0x1dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT____Vlvbound1) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills 
            = ((0x1dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT____Vlvbound1 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills 
            = ((0x1bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT____Vlvbound1) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills 
            = ((0x1bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT____Vlvbound1 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills 
            = ((0x17U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT____Vlvbound1) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills 
            = ((0x17U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT____Vlvbound1 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills 
            = ((0xfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT____Vlvbound1) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills 
            = ((0xfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__grants_int)) 
           | (1U & ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__priority_int))
                     ? (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int)
                     : ((~ (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills)) 
                        & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int)))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__grants_int)) 
           | (2U & (((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__priority_int))
                      ? ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int) 
                         >> 1U) : ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills) 
                                       >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int) 
                                                  >> 1U))) 
                    << 1U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__grants_int)) 
           | (4U & (((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__priority_int))
                      ? ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int) 
                         >> 2U) : ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills) 
                                       >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int) 
                                                  >> 2U))) 
                    << 2U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__grants_int 
        = ((7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__grants_int)) 
           | (8U & (((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__priority_int))
                      ? ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int) 
                         >> 3U) : ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__kills) 
                                       >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__reqs_int) 
                                                  >> 3U))) 
                    << 3U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter___05Fgrants 
        = ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter___05Fgrants)) 
           | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__grants_int) 
                    | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__grants_int) 
                       >> 2U))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter___05Fgrants 
        = ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter___05Fgrants)) 
           | (2U & ((0xfffffffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__grants_int)) 
                    | (0x3ffffffeU & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__grants_int) 
                                      >> 2U)))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((2U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter___05Fgrants) 
                  << 1U)) | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter___05Fgrants) 
                                   >> 1U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__send_adp___05F2__send___05Fval 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter___05Fgrants));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__encoder___05Fout = 0U;
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter___05Fgrants))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__encoder___05Fout = 0U;
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__arbiter___05Fgrants))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__encoder___05Fout = 1U;
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__send_adp___05F2__send___05Fval;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__encoder___05Fout][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__encoder___05Fout][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[2U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__encoder___05Fout][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[2U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__encoder___05Fout][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[2U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__encoder___05Fout][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[2U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__encoder___05Fout][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__468(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__468\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT____Vlvbound1 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills 
            = ((0x1dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT____Vlvbound1) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills 
            = ((0x1dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT____Vlvbound1 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills 
            = ((0x1bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT____Vlvbound1) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills 
            = ((0x1bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT____Vlvbound1 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills 
            = ((0x17U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT____Vlvbound1) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills 
            = ((0x17U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT____Vlvbound1 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills 
            = ((0xfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT____Vlvbound1) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills 
            = ((0xfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__grants_int 
        = ((0xeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__grants_int)) 
           | (1U & ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__priority_int))
                     ? (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int)
                     : ((~ (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills)) 
                        & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int)))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__grants_int 
        = ((0xdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__grants_int)) 
           | (2U & (((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__priority_int))
                      ? ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int) 
                         >> 1U) : ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills) 
                                       >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int) 
                                                  >> 1U))) 
                    << 1U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__grants_int 
        = ((0xbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__grants_int)) 
           | (4U & (((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__priority_int))
                      ? ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int) 
                         >> 2U) : ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills) 
                                       >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int) 
                                                  >> 2U))) 
                    << 2U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__grants_int 
        = ((7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__grants_int)) 
           | (8U & (((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__priority_int))
                      ? ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int) 
                         >> 3U) : ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__kills) 
                                       >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__reqs_int) 
                                                  >> 3U))) 
                    << 3U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter___05Fgrants 
        = ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter___05Fgrants)) 
           | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__grants_int) 
                    | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__grants_int) 
                       >> 2U))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter___05Fgrants 
        = ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter___05Fgrants)) 
           | (2U & ((0xfffffffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__grants_int)) 
                    | (0x3ffffffeU & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__grants_int) 
                                      >> 2U)))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((2U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter___05Fgrants) 
                  << 1U)) | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter___05Fgrants) 
                                   >> 1U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__send_adp___05F3__send___05Fval 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter___05Fgrants));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__encoder___05Fout = 0U;
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter___05Fgrants))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__encoder___05Fout = 0U;
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__arbiter___05Fgrants))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__encoder___05Fout = 1U;
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__send_adp___05F3__send___05Fval;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__encoder___05Fout][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[3U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__encoder___05Fout][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[3U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__encoder___05Fout][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[3U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__encoder___05Fout][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[3U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__encoder___05Fout][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[3U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__encoder___05Fout][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__469(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__469\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT____Vlvbound1 
            = (1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills 
            = ((0x1dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT____Vlvbound1) 
                  << 1U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills 
            = ((0x1dU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT____Vlvbound1 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills 
            = ((0x1bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT____Vlvbound1) 
                  << 2U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills 
            = ((0x1bU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT____Vlvbound1 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills 
            = ((0x17U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT____Vlvbound1) 
                  << 3U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills 
            = ((0x17U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT____Vlvbound1 
            = (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills 
            = ((0xfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT____Vlvbound1) 
                  << 4U));
    } else {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills 
            = ((0xfU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__grants_int 
        = ((0xeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__grants_int)) 
           | (1U & ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__priority_int))
                     ? (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int)
                     : ((~ (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills)) 
                        & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int)))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__grants_int 
        = ((0xdU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__grants_int)) 
           | (2U & (((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__priority_int))
                      ? ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int) 
                         >> 1U) : ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills) 
                                       >> 1U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int) 
                                                  >> 1U))) 
                    << 1U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__grants_int 
        = ((0xbU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__grants_int)) 
           | (4U & (((4U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__priority_int))
                      ? ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int) 
                         >> 2U) : ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills) 
                                       >> 2U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int) 
                                                  >> 2U))) 
                    << 2U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__grants_int 
        = ((7U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__grants_int)) 
           | (8U & (((8U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__priority_int))
                      ? ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int) 
                         >> 3U) : ((~ ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__kills) 
                                       >> 3U)) & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__reqs_int) 
                                                  >> 3U))) 
                    << 3U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter___05Fgrants 
        = ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter___05Fgrants)) 
           | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__grants_int) 
                    | ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__grants_int) 
                       >> 2U))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter___05Fgrants 
        = ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter___05Fgrants)) 
           | (2U & ((0xfffffffeU & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__grants_int)) 
                    | (0x3ffffffeU & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__grants_int) 
                                      >> 2U)))));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((2U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter___05Fgrants) 
                  << 1U)) | (1U & ((IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter___05Fgrants) 
                                   >> 1U)));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__send_adp___05F4__send___05Fval 
        = (0U < (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter___05Fgrants));
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__encoder___05Fout = 0U;
    if ((1U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter___05Fgrants))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__encoder___05Fout = 0U;
    }
    if ((2U & (IData)(vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__arbiter___05Fgrants))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__encoder___05Fout = 1U;
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fval[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT____Vcellout__send_adp___05F4__send___05Fval;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[4U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__encoder___05Fout][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[4U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__encoder___05Fout][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[4U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__encoder___05Fout][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[4U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__encoder___05Fout][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[4U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__encoder___05Fout][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg[4U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Fmsg
        [vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__encoder___05Fout][5U];
}

VL_INLINE_OPT void VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__470(VCgraRTL__bb374b5b45e2ba22__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraRTL__bb374b5b45e2ba22::_multiclk__TOP__470\n"); );
    VCgraRTL__bb374b5b45e2ba22* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fval[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fval
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[2U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [2U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[2U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [2U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[2U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [2U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[2U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [2U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [3U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[3U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [3U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[3U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [3U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[3U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [3U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[3U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [3U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[3U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [3U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[4U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [4U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[4U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [4U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[4U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [4U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[4U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [4U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[4U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [4U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg[4U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring__DOT__send_adp___05Fsend___05Fmsg
        [4U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fval[4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fval
        [4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[2U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [2U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[2U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [2U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[2U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [2U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[2U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [2U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [3U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[3U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [3U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[3U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [3U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[3U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [3U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[3U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [3U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[3U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [3U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[4U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [4U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[4U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [4U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[4U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [4U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[4U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [4U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[4U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [4U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg[4U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT____Vcellout__ctrl_ring__send___05Fmsg
        [4U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval[0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fval
        [0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval[1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fval
        [1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval[2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fval
        [2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval[3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fval
        [3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[1U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [1U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[1U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [1U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[1U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [1U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[1U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [1U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[1U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [1U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[1U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [1U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[2U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [2U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[2U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [2U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[2U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [2U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[2U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [2U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[2U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [2U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[2U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [2U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[3U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [3U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[3U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [3U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[3U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [3U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[3U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [3U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[3U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [3U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg[3U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__ctrl_ring___05Fsend___05Fmsg
        [3U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[0U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[1U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[2U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[3U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[4U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[5U] = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
         [0U] & (((((((3U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [0U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [0U][4U] >> 0x1cU)))) 
                      | (4U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [0U][5U] << 4U) 
                                        | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                           [0U][4U] 
                                           >> 0x1cU))))) 
                     | (5U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                        [0U][5U] << 4U) 
                                       | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                          [0U][4U] 
                                          >> 0x1cU))))) 
                    | (6U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [0U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [0U][4U] >> 0x1cU))))) 
                   | (7U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                      [0U][5U] << 4U) 
                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                        [0U][4U] >> 0x1cU))))) 
                  | (8U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                     [0U][5U] << 4U) 
                                    | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [0U][4U] >> 0x1cU))))) 
                 | (0U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                    [0U][5U] << 4U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                      [0U][4U] >> 0x1cU))))))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [0U][0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [0U][1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [0U][2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [0U][3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [0U][4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [0U][5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[0U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[1U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[2U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[3U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[4U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[5U] = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
         [1U] & (((((((3U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [1U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [1U][4U] >> 0x1cU)))) 
                      | (4U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [1U][5U] << 4U) 
                                        | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                           [1U][4U] 
                                           >> 0x1cU))))) 
                     | (5U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                        [1U][5U] << 4U) 
                                       | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                          [1U][4U] 
                                          >> 0x1cU))))) 
                    | (6U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [1U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [1U][4U] >> 0x1cU))))) 
                   | (7U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                      [1U][5U] << 4U) 
                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                        [1U][4U] >> 0x1cU))))) 
                  | (8U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                     [1U][5U] << 4U) 
                                    | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [1U][4U] >> 0x1cU))))) 
                 | (0U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                    [1U][5U] << 4U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                      [1U][4U] >> 0x1cU))))))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [1U][0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [1U][1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [1U][2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [1U][3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [1U][4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [1U][5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[0U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[1U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[2U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[3U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[4U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[5U] = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
         [2U] & (((((((3U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [2U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [2U][4U] >> 0x1cU)))) 
                      | (4U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [2U][5U] << 4U) 
                                        | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                           [2U][4U] 
                                           >> 0x1cU))))) 
                     | (5U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                        [2U][5U] << 4U) 
                                       | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                          [2U][4U] 
                                          >> 0x1cU))))) 
                    | (6U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [2U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [2U][4U] >> 0x1cU))))) 
                   | (7U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                      [2U][5U] << 4U) 
                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                        [2U][4U] >> 0x1cU))))) 
                  | (8U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                     [2U][5U] << 4U) 
                                    | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [2U][4U] >> 0x1cU))))) 
                 | (0U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                    [2U][5U] << 4U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                      [2U][4U] >> 0x1cU))))))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [2U][0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [2U][1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [2U][2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [2U][3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [2U][4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [2U][5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[0U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[1U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[2U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[3U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[4U] = 0U;
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[5U] = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
         [3U] & (((((((3U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [3U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [3U][4U] >> 0x1cU)))) 
                      | (4U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [3U][5U] << 4U) 
                                        | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                           [3U][4U] 
                                           >> 0x1cU))))) 
                     | (5U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                        [3U][5U] << 4U) 
                                       | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                          [3U][4U] 
                                          >> 0x1cU))))) 
                    | (6U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [3U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [3U][4U] >> 0x1cU))))) 
                   | (7U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                      [3U][5U] << 4U) 
                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                        [3U][4U] >> 0x1cU))))) 
                  | (8U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                     [3U][5U] << 4U) 
                                    | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [3U][4U] >> 0x1cU))))) 
                 | (0U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                    [3U][5U] << 4U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                      [3U][4U] >> 0x1cU))))))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[0U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [3U][0U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[1U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [3U][1U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[2U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [3U][2U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[3U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [3U][3U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[4U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [3U][4U];
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[5U] 
            = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
            [3U][5U];
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fval = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
         [0U] & (((((((3U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [0U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [0U][4U] >> 0x1cU)))) 
                      | (4U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [0U][5U] << 4U) 
                                        | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                           [0U][4U] 
                                           >> 0x1cU))))) 
                     | (5U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                        [0U][5U] << 4U) 
                                       | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                          [0U][4U] 
                                          >> 0x1cU))))) 
                    | (6U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [0U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [0U][4U] >> 0x1cU))))) 
                   | (7U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                      [0U][5U] << 4U) 
                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                        [0U][4U] >> 0x1cU))))) 
                  | (8U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                     [0U][5U] << 4U) 
                                    | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [0U][4U] >> 0x1cU))))) 
                 | (0U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                    [0U][5U] << 4U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                      [0U][4U] >> 0x1cU))))))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fval = 1U;
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fval = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
         [1U] & (((((((3U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [1U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [1U][4U] >> 0x1cU)))) 
                      | (4U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [1U][5U] << 4U) 
                                        | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                           [1U][4U] 
                                           >> 0x1cU))))) 
                     | (5U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                        [1U][5U] << 4U) 
                                       | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                          [1U][4U] 
                                          >> 0x1cU))))) 
                    | (6U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [1U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [1U][4U] >> 0x1cU))))) 
                   | (7U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                      [1U][5U] << 4U) 
                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                        [1U][4U] >> 0x1cU))))) 
                  | (8U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                     [1U][5U] << 4U) 
                                    | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [1U][4U] >> 0x1cU))))) 
                 | (0U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                    [1U][5U] << 4U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                      [1U][4U] >> 0x1cU))))))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fval = 1U;
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fval = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
         [2U] & (((((((3U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [2U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [2U][4U] >> 0x1cU)))) 
                      | (4U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [2U][5U] << 4U) 
                                        | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                           [2U][4U] 
                                           >> 0x1cU))))) 
                     | (5U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                        [2U][5U] << 4U) 
                                       | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                          [2U][4U] 
                                          >> 0x1cU))))) 
                    | (6U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [2U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [2U][4U] >> 0x1cU))))) 
                   | (7U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                      [2U][5U] << 4U) 
                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                        [2U][4U] >> 0x1cU))))) 
                  | (8U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                     [2U][5U] << 4U) 
                                    | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [2U][4U] >> 0x1cU))))) 
                 | (0U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                    [2U][5U] << 4U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                      [2U][4U] >> 0x1cU))))))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fval = 1U;
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fval = 0U;
    if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
         [3U] & (((((((3U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [3U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [3U][4U] >> 0x1cU)))) 
                      | (4U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [3U][5U] << 4U) 
                                        | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                           [3U][4U] 
                                           >> 0x1cU))))) 
                     | (5U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                        [3U][5U] << 4U) 
                                       | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                          [3U][4U] 
                                          >> 0x1cU))))) 
                    | (6U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [3U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [3U][4U] >> 0x1cU))))) 
                   | (7U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                      [3U][5U] << 4U) 
                                     | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                        [3U][4U] >> 0x1cU))))) 
                  | (8U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                     [3U][5U] << 4U) 
                                    | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [3U][4U] >> 0x1cU))))) 
                 | (0U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                    [3U][5U] << 4U) 
                                   | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                      [3U][4U] >> 0x1cU))))))) {
        vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fval = 1U;
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__const_mem___05Frecv_const___05Fmsg = 0ULL;
    if ((1U & (~ (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
                  [0U] & (((((((3U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [0U][5U] 
                                                << 4U) 
                                               | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [0U][4U] 
                                                  >> 0x1cU)))) 
                               | (4U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [0U][5U] 
                                                  << 4U) 
                                                 | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                    [0U][4U] 
                                                    >> 0x1cU))))) 
                              | (5U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                 [0U][5U] 
                                                 << 4U) 
                                                | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                   [0U][4U] 
                                                   >> 0x1cU))))) 
                             | (6U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [0U][5U] 
                                                << 4U) 
                                               | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [0U][4U] 
                                                  >> 0x1cU))))) 
                            | (7U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                               [0U][5U] 
                                               << 4U) 
                                              | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                 [0U][4U] 
                                                 >> 0x1cU))))) 
                           | (8U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                              [0U][5U] 
                                              << 4U) 
                                             | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [0U][4U] 
                                                >> 0x1cU))))) 
                          | (0U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                             [0U][5U] 
                                             << 4U) 
                                            | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                               [0U][4U] 
                                               >> 0x1cU))))))))) {
        if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
             [0U] & (0xdU == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [0U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [0U][4U] >> 0x1cU)))))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__const_mem___05Frecv_const___05Fmsg 
                = (0x7ffffffffULL & (((QData)((IData)(
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                      [0U][5U])) 
                                      << 0x27U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                                    [0U][4U])) 
                                                    << 7U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                                      [0U][3U])) 
                                                      >> 0x19U))));
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__const_mem___05Frecv_const___05Fval = 0U;
    if ((1U & (~ (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
                  [0U] & (((((((3U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [0U][5U] 
                                                << 4U) 
                                               | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [0U][4U] 
                                                  >> 0x1cU)))) 
                               | (4U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [0U][5U] 
                                                  << 4U) 
                                                 | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                    [0U][4U] 
                                                    >> 0x1cU))))) 
                              | (5U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                 [0U][5U] 
                                                 << 4U) 
                                                | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                   [0U][4U] 
                                                   >> 0x1cU))))) 
                             | (6U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [0U][5U] 
                                                << 4U) 
                                               | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [0U][4U] 
                                                  >> 0x1cU))))) 
                            | (7U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                               [0U][5U] 
                                               << 4U) 
                                              | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                 [0U][4U] 
                                                 >> 0x1cU))))) 
                           | (8U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                              [0U][5U] 
                                              << 4U) 
                                             | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [0U][4U] 
                                                >> 0x1cU))))) 
                          | (0U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                             [0U][5U] 
                                             << 4U) 
                                            | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                               [0U][4U] 
                                               >> 0x1cU))))))))) {
        if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
             [0U] & (0xdU == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [0U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [0U][4U] >> 0x1cU)))))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__const_mem___05Frecv_const___05Fval = 1U;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__const_mem___05Frecv_const___05Fmsg = 0ULL;
    if ((1U & (~ (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
                  [1U] & (((((((3U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [1U][5U] 
                                                << 4U) 
                                               | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [1U][4U] 
                                                  >> 0x1cU)))) 
                               | (4U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [1U][5U] 
                                                  << 4U) 
                                                 | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                    [1U][4U] 
                                                    >> 0x1cU))))) 
                              | (5U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                 [1U][5U] 
                                                 << 4U) 
                                                | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                   [1U][4U] 
                                                   >> 0x1cU))))) 
                             | (6U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [1U][5U] 
                                                << 4U) 
                                               | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [1U][4U] 
                                                  >> 0x1cU))))) 
                            | (7U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                               [1U][5U] 
                                               << 4U) 
                                              | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                 [1U][4U] 
                                                 >> 0x1cU))))) 
                           | (8U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                              [1U][5U] 
                                              << 4U) 
                                             | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [1U][4U] 
                                                >> 0x1cU))))) 
                          | (0U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                             [1U][5U] 
                                             << 4U) 
                                            | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                               [1U][4U] 
                                               >> 0x1cU))))))))) {
        if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
             [1U] & (0xdU == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [1U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [1U][4U] >> 0x1cU)))))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__const_mem___05Frecv_const___05Fmsg 
                = (0x7ffffffffULL & (((QData)((IData)(
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                      [1U][5U])) 
                                      << 0x27U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                                    [1U][4U])) 
                                                    << 7U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                                      [1U][3U])) 
                                                      >> 0x19U))));
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__const_mem___05Frecv_const___05Fval = 0U;
    if ((1U & (~ (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
                  [1U] & (((((((3U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [1U][5U] 
                                                << 4U) 
                                               | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [1U][4U] 
                                                  >> 0x1cU)))) 
                               | (4U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [1U][5U] 
                                                  << 4U) 
                                                 | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                    [1U][4U] 
                                                    >> 0x1cU))))) 
                              | (5U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                 [1U][5U] 
                                                 << 4U) 
                                                | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                   [1U][4U] 
                                                   >> 0x1cU))))) 
                             | (6U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [1U][5U] 
                                                << 4U) 
                                               | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [1U][4U] 
                                                  >> 0x1cU))))) 
                            | (7U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                               [1U][5U] 
                                               << 4U) 
                                              | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                 [1U][4U] 
                                                 >> 0x1cU))))) 
                           | (8U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                              [1U][5U] 
                                              << 4U) 
                                             | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [1U][4U] 
                                                >> 0x1cU))))) 
                          | (0U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                             [1U][5U] 
                                             << 4U) 
                                            | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                               [1U][4U] 
                                               >> 0x1cU))))))))) {
        if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
             [1U] & (0xdU == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [1U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [1U][4U] >> 0x1cU)))))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__const_mem___05Frecv_const___05Fval = 1U;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__const_mem___05Frecv_const___05Fmsg = 0ULL;
    if ((1U & (~ (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
                  [2U] & (((((((3U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [2U][5U] 
                                                << 4U) 
                                               | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [2U][4U] 
                                                  >> 0x1cU)))) 
                               | (4U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [2U][5U] 
                                                  << 4U) 
                                                 | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                    [2U][4U] 
                                                    >> 0x1cU))))) 
                              | (5U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                 [2U][5U] 
                                                 << 4U) 
                                                | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                   [2U][4U] 
                                                   >> 0x1cU))))) 
                             | (6U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [2U][5U] 
                                                << 4U) 
                                               | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [2U][4U] 
                                                  >> 0x1cU))))) 
                            | (7U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                               [2U][5U] 
                                               << 4U) 
                                              | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                 [2U][4U] 
                                                 >> 0x1cU))))) 
                           | (8U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                              [2U][5U] 
                                              << 4U) 
                                             | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [2U][4U] 
                                                >> 0x1cU))))) 
                          | (0U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                             [2U][5U] 
                                             << 4U) 
                                            | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                               [2U][4U] 
                                               >> 0x1cU))))))))) {
        if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
             [2U] & (0xdU == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [2U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [2U][4U] >> 0x1cU)))))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__const_mem___05Frecv_const___05Fmsg 
                = (0x7ffffffffULL & (((QData)((IData)(
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                      [2U][5U])) 
                                      << 0x27U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                                    [2U][4U])) 
                                                    << 7U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                                      [2U][3U])) 
                                                      >> 0x19U))));
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__const_mem___05Frecv_const___05Fval = 0U;
    if ((1U & (~ (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
                  [2U] & (((((((3U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [2U][5U] 
                                                << 4U) 
                                               | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [2U][4U] 
                                                  >> 0x1cU)))) 
                               | (4U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [2U][5U] 
                                                  << 4U) 
                                                 | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                    [2U][4U] 
                                                    >> 0x1cU))))) 
                              | (5U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                 [2U][5U] 
                                                 << 4U) 
                                                | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                   [2U][4U] 
                                                   >> 0x1cU))))) 
                             | (6U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [2U][5U] 
                                                << 4U) 
                                               | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [2U][4U] 
                                                  >> 0x1cU))))) 
                            | (7U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                               [2U][5U] 
                                               << 4U) 
                                              | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                 [2U][4U] 
                                                 >> 0x1cU))))) 
                           | (8U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                              [2U][5U] 
                                              << 4U) 
                                             | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [2U][4U] 
                                                >> 0x1cU))))) 
                          | (0U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                             [2U][5U] 
                                             << 4U) 
                                            | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                               [2U][4U] 
                                               >> 0x1cU))))))))) {
        if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
             [2U] & (0xdU == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [2U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [2U][4U] >> 0x1cU)))))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__const_mem___05Frecv_const___05Fval = 1U;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__const_mem___05Frecv_const___05Fmsg = 0ULL;
    if ((1U & (~ (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
                  [3U] & (((((((3U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [3U][5U] 
                                                << 4U) 
                                               | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [3U][4U] 
                                                  >> 0x1cU)))) 
                               | (4U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [3U][5U] 
                                                  << 4U) 
                                                 | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                    [3U][4U] 
                                                    >> 0x1cU))))) 
                              | (5U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                 [3U][5U] 
                                                 << 4U) 
                                                | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                   [3U][4U] 
                                                   >> 0x1cU))))) 
                             | (6U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [3U][5U] 
                                                << 4U) 
                                               | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [3U][4U] 
                                                  >> 0x1cU))))) 
                            | (7U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                               [3U][5U] 
                                               << 4U) 
                                              | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                 [3U][4U] 
                                                 >> 0x1cU))))) 
                           | (8U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                              [3U][5U] 
                                              << 4U) 
                                             | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [3U][4U] 
                                                >> 0x1cU))))) 
                          | (0U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                             [3U][5U] 
                                             << 4U) 
                                            | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                               [3U][4U] 
                                               >> 0x1cU))))))))) {
        if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
             [3U] & (0xdU == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [3U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [3U][4U] >> 0x1cU)))))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__const_mem___05Frecv_const___05Fmsg 
                = (0x7ffffffffULL & (((QData)((IData)(
                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                      [3U][5U])) 
                                      << 0x27U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                                    [3U][4U])) 
                                                    << 7U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                                      [3U][3U])) 
                                                      >> 0x19U))));
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__const_mem___05Frecv_const___05Fval = 0U;
    if ((1U & (~ (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
                  [3U] & (((((((3U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [3U][5U] 
                                                << 4U) 
                                               | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [3U][4U] 
                                                  >> 0x1cU)))) 
                               | (4U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [3U][5U] 
                                                  << 4U) 
                                                 | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                    [3U][4U] 
                                                    >> 0x1cU))))) 
                              | (5U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                 [3U][5U] 
                                                 << 4U) 
                                                | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                   [3U][4U] 
                                                   >> 0x1cU))))) 
                             | (6U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [3U][5U] 
                                                << 4U) 
                                               | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                  [3U][4U] 
                                                  >> 0x1cU))))) 
                            | (7U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                               [3U][5U] 
                                               << 4U) 
                                              | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                 [3U][4U] 
                                                 >> 0x1cU))))) 
                           | (8U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                              [3U][5U] 
                                              << 4U) 
                                             | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                                [3U][4U] 
                                                >> 0x1cU))))) 
                          | (0U == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                             [3U][5U] 
                                             << 4U) 
                                            | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                               [3U][4U] 
                                               >> 0x1cU))))))))) {
        if ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fval
             [3U] & (0xdU == (0xfU & ((vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                       [3U][5U] << 4U) 
                                      | (vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05Frecv_from_controller_pkt___05Fmsg
                                         [3U][4U] >> 0x1cU)))))) {
            vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__const_mem___05Frecv_const___05Fval = 1U;
        }
    }
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem___05Frecv_pkt_from_controller___05Fmsg[5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraRTL___05Fbb374b5b45e2ba22__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_pkt_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
}
