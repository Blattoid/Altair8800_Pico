#include <stdio.h>
#include "altair_cpu.h"

// System memory
char memory[MEMORY_SIZE];
// CPU registers
char instruction_reg;
char program_counter_reg;

void cpu_step() {
  // Fetch
  char instruction_reg = memory[program_counter_reg];
  // Decode
  Opcode op = instruction_set[instruction_reg];
  printf("[%d] %s %d %d %#08x\n", instruction_reg, op.name, op.length, op.cycles, op.execute);
  // Execute
  program_counter_reg += op.length;
  op.execute();
}