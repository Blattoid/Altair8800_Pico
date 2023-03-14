#include <stdio.h>
#include "pico/stdlib.h"

#include "instructions.h"
extern Opcode instruction_set[];

/*
// Front Panel button pin mappings
#define SHIFT_BTN 0
#define STOPorGO_BTN 1
#define SINGLEorDEPOSIT_BTN 2
#define EXAMINEorDEPOSITNEXT_BTN 3

// Front Panel bus pin mappings
#define ADDR_BUS 4 // MSB
#define ADDR_BUS_WIDTH 12 // Limited by number of GPIO
#define DATA_BUS 20 // 8 bits wide
#define STATUSLED_BUS 16 // Front panel status LEDs
#define STATUSLED_BUS_WIDTH 4

// How much RAM should be available to the system
#define MEMORY_SIZE 256
*/

#define DATA_BTN 0
#define CLK_BTN 1
#define OUT_BUS 2

void irq_clk_rise(uint gpio, uint32_t events);

int main() {
  // Initialise USB serial
  stdio_init_all();
  printf("Booted\n");

  // Enable the onboard LED to show the code has uploaded
  const uint LED_PIN = PICO_DEFAULT_LED_PIN;
  gpio_init(LED_PIN);
  gpio_set_dir(LED_PIN, GPIO_OUT);
  gpio_put(LED_PIN, 1);

  // Configure GPIO
  char inputs[2] = {DATA_BTN, CLK_BTN};
  for (char i=0; i<sizeof(inputs); i++) {
    char pin = inputs[i];
    gpio_init(pin);
    gpio_set_dir(pin, GPIO_IN);
    //gpio_pull_up(pin);
  }
  for (char i=0; i<4; i++) {
    char pin = OUT_BUS+i;
    gpio_init(pin);
    gpio_set_dir(pin, GPIO_OUT);
    gpio_put(pin, 0);
  }

  // Setup IRQs
  gpio_set_irq_enabled_with_callback(
    CLK_BTN, GPIO_IRQ_EDGE_RISE, true, &irq_clk_rise);


  Opcode opcode;
  while (true) {
   for (int i=0; i<256; i++) {
     opcode = instruction_set[i];
     printf("%s %d %d %#08x\n", opcode.name, opcode.length, opcode.cycles, opcode.execute);
   }
  }

  // This should never be reached
  return 0;
}

void irq_clk_rise(uint gpio, uint32_t events) {
  printf("IRQ! d=%d\n", gpio_get(DATA_BTN));
}