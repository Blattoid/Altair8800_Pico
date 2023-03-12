#include <stdio.h>
#include "pico/stdlib.h"

#define DATA_PIN 3
#define CLK_PIN 2
#define OUT1_PIN 0
#define OUT2_PIN 1

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
  char outputs[2] = {OUT1_PIN, OUT2_PIN};
  for (char i=0; i<sizeof(outputs); i++) {
    char pin = outputs[i];
    gpio_init(pin);
    gpio_set_dir(pin, GPIO_OUT);
    gpio_put(pin, 0);
  }
  char inputs[2] = {DATA_PIN, CLK_PIN};
  for (char i=0; i<sizeof(inputs); i++) {
    char pin = inputs[i];
    gpio_init(pin);
    gpio_set_dir(pin, GPIO_IN);
    gpio_pull_up(pin);
  }

  while (true) {
     bool d = gpio_get(DATA_PIN);
     bool c = gpio_get(CLK_PIN);
     printf("d=%d c=%d\r", d,c);
     gpio_put(OUT1_PIN, d);
     gpio_put(OUT2_PIN, c);
  }

  // This should never be reached
  return 0;
}
