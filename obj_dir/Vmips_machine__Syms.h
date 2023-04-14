// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMIPS_MACHINE__SYMS_H_
#define VERILATED_VMIPS_MACHINE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmips_machine.h"

// INCLUDE MODULE CLASSES
#include "Vmips_machine___024root.h"

// SYMS CLASS (contains all model state)
class Vmips_machine__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmips_machine* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmips_machine___024root        TOP;

    // CONSTRUCTORS
    Vmips_machine__Syms(VerilatedContext* contextp, const char* namep, Vmips_machine* modelp);
    ~Vmips_machine__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
