#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

typedef struct {
  char name[10]; // Opcode name
  char length; // How many bytes of memory the instruction uses,
  int cycles;  // Base number of cycles required for this instruction. It will always take this long to execute.
  char extra_cycles; // Some instructions can conditionally take more cycles - this is the number of additional cycles.
  bool* execute; // Returns True if the instruction took extra cycles to execute.
} Opcode;

void opcode_NOP();
void opcode_UNDEF();

#endif // INSTRUCTIONS_H

