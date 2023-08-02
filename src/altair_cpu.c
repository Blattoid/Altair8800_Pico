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
char reg_IR[3];
char reg_SP;
char reg_PC;

void cpu_step() {
  // Fetch opcode byte into Instruction Register
  reg_IR[0] = memory[reg_PC];
  // Decode
  Opcode op = instruction_set[reg_IR[0]];
  printf("[%d] %s ", reg_PC, op.name);
  // Copy any arguments into Instruction Register
  //char i = 1;
  for (char i=1; i<op.length; i++) { 
    reg_IR[i] = memory[reg_PC+i];
    printf("%d ", reg_IR[i]);
  }
  printf("\n");
  // Execute
  reg_PC += op.length;
  op.execute();
}