#include <stdio.h>
#include "altair_cpu.h"

// System memory
char memory[MEMORY_SIZE];
// CPU registers
char reg_Flags;
char reg_A;
char reg_B;
char reg_C;
char reg_D;
char reg_E;
char reg_H;
char reg_L;
char reg_SP;
char reg_PC;

void cpu_step() {
  // Fetch
  char instruction = memory[reg_PC];
  // Decode
  Opcode op = instruction_set[instruction];
  printf("[%d] %s ", reg_PC, op.name);
  // Execute
  reg_PC += op.length;
  op.execute();
}