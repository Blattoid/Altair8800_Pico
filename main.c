#include <stdio.h>
#include "pico/stdlib.h"

int main() {
    stdio_init_all();

    const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    char blink = 0;

    while (true) {
        printf("Hello, world!\n");
        blink ^= 1;
        gpio_put(LED_PIN, blink);
        sleep_ms(1000);
    }
    return 0;
}
