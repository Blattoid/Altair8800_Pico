#ifndef INSTRUCTIONS_IMPL_H
#define INSTRUCTIONS_IMPL_H

#define OPCODE_EXTRA_CYCLES 6 // Some instructions take extra cycles. Specifically, 6 cycles. Figured I'd best make it a constant.
int opcode_UNDEF(); // Delete this after

// List of opcode implementations
int opcode_NOP();
// ... [255 more]

#endif