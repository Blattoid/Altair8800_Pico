#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

typedef struct {
  char name[10]; // Opcode name
  char length; // How many bytes of memory the instruction uses,
  int cycles;  // Base number of cycles required for this instruction. It will always take this long to execute.
  bool slow; // Some instructions can conditionally use 6 more cycles to
  bool* execute; // Returns True if the instruction took an extra 6cycles to execute.
} Opcode;

bool opcode_NOP();
bool opcode_UNDEF();

#endif // INSTRUCTIONS_H

