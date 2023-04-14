// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmips_machine.h"
#include "Vmips_machine__Syms.h"

//============================================================
// Constructors

Vmips_machine::Vmips_machine(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vmips_machine__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_b{vlSymsp->TOP.rst_b}
    , rootp{&(vlSymsp->TOP)}
{
}

Vmips_machine::Vmips_machine(const char* _vcname__)
    : Vmips_machine(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vmips_machine::~Vmips_machine() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmips_machine___024root___eval_initial(Vmips_machine___024root* vlSelf);
void Vmips_machine___024root___eval_settle(Vmips_machine___024root* vlSelf);
void Vmips_machine___024root___eval(Vmips_machine___024root* vlSelf);
#ifdef VL_DEBUG
void Vmips_machine___024root___eval_debug_assertions(Vmips_machine___024root* vlSelf);
#endif  // VL_DEBUG
void Vmips_machine___024root___final(Vmips_machine___024root* vlSelf);

static void _eval_initial_loop(Vmips_machine__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmips_machine___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmips_machine___024root___eval_settle(&(vlSymsp->TOP));
        Vmips_machine___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vmips_machine::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmips_machine::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmips_machine___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmips_machine___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

//============================================================
// Invoke final blocks

void Vmips_machine::final() {
    Vmips_machine___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vmips_machine::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vmips_machine::name() const {
    return vlSymsp->name();
}
