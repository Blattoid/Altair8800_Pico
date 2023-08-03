#include <stdio.h>
#include "altair_cpu.h"
#include "instructions_impl.h"

#define INSTR_DEBUG // Uncomment for verbose logging of each instruction

// The M register "contains" the indirect lookup of HL
#define reg_M memory[(reg_H<<8)+reg_L]

/*** Opcode implementations ***/
int opcode_ACI_d8() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ACI_d8' not implemented.\n");
  #endif
}

int opcode_ADC_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADC_A' not implemented.\n");
  #endif
}

int opcode_ADC_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADC_B' not implemented.\n");
  #endif
}

int opcode_ADC_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADC_C' not implemented.\n");
  #endif
}

int opcode_ADC_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADC_D' not implemented.\n");
  #endif
}

int opcode_ADC_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADC_E' not implemented.\n");
  #endif
}

int opcode_ADC_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADC_H' not implemented.\n");
  #endif
}

int opcode_ADC_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADC_L' not implemented.\n");
  #endif
}

int opcode_ADC_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADC_M' not implemented.\n");
  #endif
}

int opcode_ADD_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADD_A' not implemented.\n");
  #endif
}

int opcode_ADD_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADD_B' not implemented.\n");
  #endif
}

int opcode_ADD_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADD_C' not implemented.\n");
  #endif
}

int opcode_ADD_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADD_D' not implemented.\n");
  #endif
}

int opcode_ADD_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADD_E' not implemented.\n");
  #endif
}

int opcode_ADD_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADD_H' not implemented.\n");
  #endif
}

int opcode_ADD_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADD_L' not implemented.\n");
  #endif
}

int opcode_ADD_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADD_M' not implemented.\n");
  #endif
}

int opcode_ADI_d8() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ADI_d8' not implemented.\n");
  #endif
}

int opcode_ANA_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ANA_A' not implemented.\n");
  #endif
}

int opcode_ANA_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ANA_B' not implemented.\n");
  #endif
}

int opcode_ANA_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ANA_C' not implemented.\n");
  #endif
}

int opcode_ANA_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ANA_D' not implemented.\n");
  #endif
}

int opcode_ANA_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ANA_E' not implemented.\n");
  #endif
}

int opcode_ANA_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ANA_H' not implemented.\n");
  #endif
}

int opcode_ANA_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ANA_L' not implemented.\n");
  #endif
}

int opcode_ANA_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ANA_M' not implemented.\n");
  #endif
}

int opcode_ANI_d8() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ANI_d8' not implemented.\n");
  #endif
}

int opcode_CALL_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CALL_a16' not implemented.\n");
  #endif
}

int opcode_CC_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CC_a16' not implemented.\n");
  #endif
}

int opcode_CMA() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CMA' not implemented.\n");
  #endif
}

int opcode_CMC() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CMC' not implemented.\n");
  #endif
}

int opcode_CMP_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CMP_A' not implemented.\n");
  #endif
}

int opcode_CMP_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CMP_B' not implemented.\n");
  #endif
}

int opcode_CMP_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CMP_C' not implemented.\n");
  #endif
}

int opcode_CMP_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CMP_D' not implemented.\n");
  #endif
}

int opcode_CMP_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CMP_E' not implemented.\n");
  #endif
}

int opcode_CMP_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CMP_H' not implemented.\n");
  #endif
}

int opcode_CMP_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CMP_L' not implemented.\n");
  #endif
}

int opcode_CMP_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CMP_M' not implemented.\n");
  #endif
}

int opcode_CM_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CM_a16' not implemented.\n");
  #endif
}

int opcode_CNC_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CNC_a16' not implemented.\n");
  #endif
}

int opcode_CNZ_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CNZ_a16' not implemented.\n");
  #endif
}

int opcode_CPE_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CPE_a16' not implemented.\n");
  #endif
}

int opcode_CPI_d8() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CPI_d8' not implemented.\n");
  #endif
}

int opcode_CPO_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CPO_a16' not implemented.\n");
  #endif
}

int opcode_CP_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CP_a16' not implemented.\n");
  #endif
}

int opcode_CZ_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_CZ_a16' not implemented.\n");
  #endif
}

int opcode_DAA() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DAA' not implemented.\n");
  #endif
}

int opcode_DAD_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DAD_B' not implemented.\n");
  #endif
}

int opcode_DAD_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DAD_D' not implemented.\n");
  #endif
}

int opcode_DAD_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DAD_H' not implemented.\n");
  #endif
}

int opcode_DAD_SP() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DAD_SP' not implemented.\n");
  #endif
}

int opcode_DCR_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DCR_A' not implemented.\n");
  #endif
}

int opcode_DCR_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DCR_B' not implemented.\n");
  #endif
}

int opcode_DCR_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DCR_C' not implemented.\n");
  #endif
}

int opcode_DCR_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DCR_D' not implemented.\n");
  #endif
}

int opcode_DCR_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DCR_E' not implemented.\n");
  #endif
}

int opcode_DCR_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DCR_H' not implemented.\n");
  #endif
}

int opcode_DCR_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DCR_L' not implemented.\n");
  #endif
}

int opcode_DCR_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DCR_M' not implemented.\n");
  #endif
}

int opcode_DCX_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DCX_B' not implemented.\n");
  #endif
}

int opcode_DCX_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DCX_D' not implemented.\n");
  #endif
}

int opcode_DCX_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DCX_H' not implemented.\n");
  #endif
}

int opcode_DCX_SP() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DCX_SP' not implemented.\n");
  #endif
}

int opcode_DI() {
  #ifdef INSTR_DEBUG
    printf("'opcode_DI' not implemented.\n");
  #endif
}

int opcode_EI() {
  #ifdef INSTR_DEBUG
    printf("'opcode_EI' not implemented.\n");
  #endif
}

int opcode_HLT() {
  // This should probably set some flag like "is_running" to false, as currently
  // the CPU is being stepped by the main function, rather than running continuously.
  for (char i=0; i<22; i++) {
    printf("[%04X] %d (%s)\n", i, memory[i], instruction_set[memory[i]].name);
  }
  for (;;) {} // Halt the entire program
}

int opcode_INR_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_INR_A' not implemented.\n");
  #endif
}

int opcode_INR_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_INR_B' not implemented.\n");
  #endif
}

int opcode_INR_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_INR_C' not implemented.\n");
  #endif
}

int opcode_INR_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_INR_D' not implemented.\n");
  #endif
}

int opcode_INR_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_INR_E' not implemented.\n");
  #endif
}

int opcode_INR_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_INR_H' not implemented.\n");
  #endif
}

int opcode_INR_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_INR_L' not implemented.\n");
  #endif
}

int opcode_INR_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_INR_M' not implemented.\n");
  #endif
}

int opcode_INX_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_INX_B' not implemented.\n");
  #endif
}

int opcode_INX_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_INX_D' not implemented.\n");
  #endif
}

int opcode_INX_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_INX_H' not implemented.\n");
  #endif
}

int opcode_INX_SP() {
  #ifdef INSTR_DEBUG
    printf("'opcode_INX_SP' not implemented.\n");
  #endif
}

int opcode_IN_d8() {
  #ifdef INSTR_DEBUG
    printf("'opcode_IN_d8' not implemented.\n");
  #endif
}

int opcode_JC_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_JC_a16' not implemented.\n");
  #endif
}

int opcode_JMP_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_JMP_a16' not implemented.\n");
  #endif
}

int opcode_JM_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_JM_a16' not implemented.\n");
  #endif
}

int opcode_JNC_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_JNC_a16' not implemented.\n");
  #endif
}

int opcode_JNZ_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_JNZ_a16' not implemented.\n");
  #endif
}

int opcode_JPE_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_JPE_a16' not implemented.\n");
  #endif
}

int opcode_JPO_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_JPO_a16' not implemented.\n");
  #endif
}

int opcode_JP_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_JP_a16' not implemented.\n");
  #endif
}

int opcode_JZ_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_JZ_a16' not implemented.\n");
  #endif
}

int opcode_LDAX_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_LDAX_B' not implemented.\n");
  #endif
}

int opcode_LDAX_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_LDAX_D' not implemented.\n");
  #endif
}

int opcode_LDA_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_LDA_a16' not implemented.\n");
  #endif
}

int opcode_LHLD_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_LHLD_a16' not implemented.\n");
  #endif
}

int opcode_LXI_B_d16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_LXI_B_d16' not implemented.\n");
  #endif
}

int opcode_LXI_D_d16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_LXI_D_d16' not implemented.\n");
  #endif
}

int opcode_LXI_H_d16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_LXI_H_d16' not implemented.\n");
  #endif
}

int opcode_LXI_SP_d16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_LXI_SP_d16' not implemented.\n");
  #endif
}

int opcode_MOV_A_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_A_A' not implemented.\n");
  #endif
}

int opcode_MOV_A_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_A_B' not implemented.\n");
  #endif
}

int opcode_MOV_A_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_A_C' not implemented.\n");
  #endif
}

int opcode_MOV_A_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_A_D' not implemented.\n");
  #endif
}

int opcode_MOV_A_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_A_E' not implemented.\n");
  #endif
}

int opcode_MOV_A_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_A_H' not implemented.\n");
  #endif
}

int opcode_MOV_A_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_A_L' not implemented.\n");
  #endif
}

int opcode_MOV_A_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_A_M' not implemented.\n");
  #endif
}

int opcode_MOV_B_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_B_A' not implemented.\n");
  #endif
}

int opcode_MOV_B_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_B_B' not implemented.\n");
  #endif
}

int opcode_MOV_B_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_B_C' not implemented.\n");
  #endif
}

int opcode_MOV_B_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_B_D' not implemented.\n");
  #endif
}

int opcode_MOV_B_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_B_E' not implemented.\n");
  #endif
}

int opcode_MOV_B_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_B_H' not implemented.\n");
  #endif
}

int opcode_MOV_B_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_B_L' not implemented.\n");
  #endif
}

int opcode_MOV_B_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_B_M' not implemented.\n");
  #endif
}

int opcode_MOV_C_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_C_A' not implemented.\n");
  #endif
}

int opcode_MOV_C_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_C_B' not implemented.\n");
  #endif
}

int opcode_MOV_C_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_C_C' not implemented.\n");
  #endif
}

int opcode_MOV_C_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_C_D' not implemented.\n");
  #endif
}

int opcode_MOV_C_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_C_E' not implemented.\n");
  #endif
}

int opcode_MOV_C_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_C_H' not implemented.\n");
  #endif
}

int opcode_MOV_C_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_C_L' not implemented.\n");
  #endif
}

int opcode_MOV_C_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_C_M' not implemented.\n");
  #endif
}

int opcode_MOV_D_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_D_A' not implemented.\n");
  #endif
}

int opcode_MOV_D_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_D_B' not implemented.\n");
  #endif
}

int opcode_MOV_D_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_D_C' not implemented.\n");
  #endif
}

int opcode_MOV_D_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_D_D' not implemented.\n");
  #endif
}

int opcode_MOV_D_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_D_E' not implemented.\n");
  #endif
}

int opcode_MOV_D_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_D_H' not implemented.\n");
  #endif
}

int opcode_MOV_D_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_D_L' not implemented.\n");
  #endif
}

int opcode_MOV_D_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_D_M' not implemented.\n");
  #endif
}

int opcode_MOV_E_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_E_A' not implemented.\n");
  #endif
}

int opcode_MOV_E_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_E_B' not implemented.\n");
  #endif
}

int opcode_MOV_E_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_E_C' not implemented.\n");
  #endif
}

int opcode_MOV_E_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_E_D' not implemented.\n");
  #endif
}

int opcode_MOV_E_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_E_E' not implemented.\n");
  #endif
}

int opcode_MOV_E_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_E_H' not implemented.\n");
  #endif
}

int opcode_MOV_E_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_E_L' not implemented.\n");
  #endif
}

int opcode_MOV_E_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_E_M' not implemented.\n");
  #endif
}

int opcode_MOV_H_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_H_A' not implemented.\n");
  #endif
}

int opcode_MOV_H_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_H_B' not implemented.\n");
  #endif
}

int opcode_MOV_H_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_H_C' not implemented.\n");
  #endif
}

int opcode_MOV_H_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_H_D' not implemented.\n");
  #endif
}

int opcode_MOV_H_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_H_E' not implemented.\n");
  #endif
}

int opcode_MOV_H_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_H_H' not implemented.\n");
  #endif
}

int opcode_MOV_H_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_H_L' not implemented.\n");
  #endif
}

int opcode_MOV_H_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_H_M' not implemented.\n");
  #endif
}

int opcode_MOV_L_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_L_A' not implemented.\n");
  #endif
}

int opcode_MOV_L_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_L_B' not implemented.\n");
  #endif
}

int opcode_MOV_L_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_L_C' not implemented.\n");
  #endif
}

int opcode_MOV_L_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_L_D' not implemented.\n");
  #endif
}

int opcode_MOV_L_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_L_E' not implemented.\n");
  #endif
}

int opcode_MOV_L_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_L_H' not implemented.\n");
  #endif
}

int opcode_MOV_L_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_L_L' not implemented.\n");
  #endif
}

int opcode_MOV_L_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_L_M' not implemented.\n");
  #endif
}

int opcode_MOV_M_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_M_A' not implemented.\n");
  #endif
}

int opcode_MOV_M_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_M_B' not implemented.\n");
  #endif
}

int opcode_MOV_M_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_M_C' not implemented.\n");
  #endif
}

int opcode_MOV_M_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_M_D' not implemented.\n");
  #endif
}

int opcode_MOV_M_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_M_E' not implemented.\n");
  #endif
}

int opcode_MOV_M_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_M_H' not implemented.\n");
  #endif
}

int opcode_MOV_M_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_MOV_M_L' not implemented.\n");
  #endif
}

int opcode_MVI_A_d8() {
  reg_A = reg_IR[1];
  #ifdef INSTR_DEBUG
  printf("reg_A=%i\n", reg_A);
  #endif
}

int opcode_MVI_B_d8() {
  reg_B = reg_IR[1];
  #ifdef INSTR_DEBUG
  printf("reg_B=%i\n", reg_B);
  #endif
}

int opcode_MVI_C_d8() {
  reg_C = reg_IR[1];
  #ifdef INSTR_DEBUG
  printf("reg_C=%i\n", reg_C);
  #endif
}

int opcode_MVI_D_d8() {
  reg_D = reg_IR[1];
  #ifdef INSTR_DEBUG
  printf("reg_D=%i\n", reg_D);
  #endif
}

int opcode_MVI_E_d8() {
  reg_E = reg_IR[1];
  #ifdef INSTR_DEBUG
  printf("reg_E=%i\n", reg_E);
  #endif
}

int opcode_MVI_H_d8() {
  reg_H = reg_IR[1];
  #ifdef INSTR_DEBUG
  printf("reg_H=%i\n", reg_H);
  #endif
}

int opcode_MVI_L_d8() {
  reg_L= reg_IR[1];
  #ifdef INSTR_DEBUG
  printf("reg_L=%i\n", reg_L);
  #endif
}

int opcode_MVI_M_d8() {
  #ifdef INSTR_DEBUG
  printf("HL->%d\n", reg_M);
  #endif
  reg_M = reg_IR[1];
  #ifdef INSTR_DEBUG
  printf("HL->%d\n", reg_M);
  #endif
}

int opcode_NOP() {
  // No Operation - Do nothing and waste some cycles
}

int opcode_ORA_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ORA_A' not implemented.\n");
  #endif
}

int opcode_ORA_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ORA_B' not implemented.\n");
  #endif
}

int opcode_ORA_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ORA_C' not implemented.\n");
  #endif
}

int opcode_ORA_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ORA_D' not implemented.\n");
  #endif
}

int opcode_ORA_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ORA_E' not implemented.\n");
  #endif
}

int opcode_ORA_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ORA_H' not implemented.\n");
  #endif
}

int opcode_ORA_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ORA_L' not implemented.\n");
  #endif
}

int opcode_ORA_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ORA_M' not implemented.\n");
  #endif
}

int opcode_ORI_d8() {
  #ifdef INSTR_DEBUG
    printf("'opcode_ORI_d8' not implemented.\n");
  #endif
}

int opcode_OUT_d8() {
  #ifdef INSTR_DEBUG
    printf("'opcode_OUT_d8' not implemented.\n");
  #endif
}

int opcode_PCHL() {
  #ifdef INSTR_DEBUG
    printf("'opcode_PCHL' not implemented.\n");
  #endif
}

int opcode_POP_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_POP_B' not implemented.\n");
  #endif
}

int opcode_POP_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_POP_D' not implemented.\n");
  #endif
}

int opcode_POP_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_POP_H' not implemented.\n");
  #endif
}

int opcode_POP_PSW() {
  #ifdef INSTR_DEBUG
    printf("'opcode_POP_PSW' not implemented.\n");
  #endif
}

int opcode_PUSH_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_PUSH_B' not implemented.\n");
  #endif
}

int opcode_PUSH_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_PUSH_D' not implemented.\n");
  #endif
}

int opcode_PUSH_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_PUSH_H' not implemented.\n");
  #endif
}

int opcode_PUSH_PSW() {
  #ifdef INSTR_DEBUG
    printf("'opcode_PUSH_PSW' not implemented.\n");
  #endif
}

int opcode_RAL() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RAL' not implemented.\n");
  #endif
}

int opcode_RAR() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RAR' not implemented.\n");
  #endif
}

int opcode_RC() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RC' not implemented.\n");
  #endif
}

int opcode_RET() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RET' not implemented.\n");
  #endif
}

int opcode_RLC() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RLC' not implemented.\n");
  #endif
}

int opcode_RM() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RM' not implemented.\n");
  #endif
}

int opcode_RNC() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RNC' not implemented.\n");
  #endif
}

int opcode_RNZ() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RNZ' not implemented.\n");
  #endif
}

int opcode_RP() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RP' not implemented.\n");
  #endif
}

int opcode_RPE() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RPE' not implemented.\n");
  #endif
}

int opcode_RPO() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RPO' not implemented.\n");
  #endif
}

int opcode_RRC() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RRC' not implemented.\n");
  #endif
}

int opcode_RST_0() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RST_0' not implemented.\n");
  #endif
}

int opcode_RST_1() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RST_1' not implemented.\n");
  #endif
}

int opcode_RST_2() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RST_2' not implemented.\n");
  #endif
}

int opcode_RST_3() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RST_3' not implemented.\n");
  #endif
}

int opcode_RST_4() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RST_4' not implemented.\n");
  #endif
}

int opcode_RST_5() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RST_5' not implemented.\n");
  #endif
}

int opcode_RST_6() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RST_6' not implemented.\n");
  #endif
}

int opcode_RST_7() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RST_7' not implemented.\n");
  #endif
}

int opcode_RZ() {
  #ifdef INSTR_DEBUG
    printf("'opcode_RZ' not implemented.\n");
  #endif
}

int opcode_SBB_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SBB_A' not implemented.\n");
  #endif
}

int opcode_SBB_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SBB_B' not implemented.\n");
  #endif
}

int opcode_SBB_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SBB_C' not implemented.\n");
  #endif
}

int opcode_SBB_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SBB_D' not implemented.\n");
  #endif
}

int opcode_SBB_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SBB_E' not implemented.\n");
  #endif
}

int opcode_SBB_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SBB_H' not implemented.\n");
  #endif
}

int opcode_SBB_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SBB_L' not implemented.\n");
  #endif
}

int opcode_SBB_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SBB_M' not implemented.\n");
  #endif
}

int opcode_SBI_d8() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SBI_d8' not implemented.\n");
  #endif
}

int opcode_SHLD_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SHLD_a16' not implemented.\n");
  #endif
}

int opcode_SPHL() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SPHL' not implemented.\n");
  #endif
}

int opcode_STAX_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_STAX_B' not implemented.\n");
  #endif
}

int opcode_STAX_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_STAX_D' not implemented.\n");
  #endif
}

int opcode_STA_a16() {
  #ifdef INSTR_DEBUG
    printf("'opcode_STA_a16' not implemented.\n");
  #endif
}

int opcode_STC() {
  #ifdef INSTR_DEBUG
    printf("'opcode_STC' not implemented.\n");
  #endif
}

int opcode_SUB_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SUB_A' not implemented.\n");
  #endif
}

int opcode_SUB_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SUB_B' not implemented.\n");
  #endif
}

int opcode_SUB_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SUB_C' not implemented.\n");
  #endif
}

int opcode_SUB_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SUB_D' not implemented.\n");
  #endif
}

int opcode_SUB_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SUB_E' not implemented.\n");
  #endif
}

int opcode_SUB_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SUB_H' not implemented.\n");
  #endif
}

int opcode_SUB_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SUB_L' not implemented.\n");
  #endif
}

int opcode_SUB_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SUB_M' not implemented.\n");
  #endif
}

int opcode_SUI_d8() {
  #ifdef INSTR_DEBUG
    printf("'opcode_SUI_d8' not implemented.\n");
  #endif
}

int opcode_XCHG() {
  #ifdef INSTR_DEBUG
    printf("'opcode_XCHG' not implemented.\n");
  #endif
}

int opcode_XRA_A() {
  #ifdef INSTR_DEBUG
    printf("'opcode_XRA_A' not implemented.\n");
  #endif
}

int opcode_XRA_B() {
  #ifdef INSTR_DEBUG
    printf("'opcode_XRA_B' not implemented.\n");
  #endif
}

int opcode_XRA_C() {
  #ifdef INSTR_DEBUG
    printf("'opcode_XRA_C' not implemented.\n");
  #endif
}

int opcode_XRA_D() {
  #ifdef INSTR_DEBUG
    printf("'opcode_XRA_D' not implemented.\n");
  #endif
}

int opcode_XRA_E() {
  #ifdef INSTR_DEBUG
    printf("'opcode_XRA_E' not implemented.\n");
  #endif
}

int opcode_XRA_H() {
  #ifdef INSTR_DEBUG
    printf("'opcode_XRA_H' not implemented.\n");
  #endif
}

int opcode_XRA_L() {
  #ifdef INSTR_DEBUG
    printf("'opcode_XRA_L' not implemented.\n");
  #endif
}

int opcode_XRA_M() {
  #ifdef INSTR_DEBUG
    printf("'opcode_XRA_M' not implemented.\n");
  #endif
}

int opcode_XRI_d8() {
  #ifdef INSTR_DEBUG
    printf("'opcode_XRI_d8' not implemented.\n");
  #endif
}

int opcode_XTHL() {
  #ifdef INSTR_DEBUG
    printf("'opcode_XTHL' not implemented.\n");
  #endif
}
