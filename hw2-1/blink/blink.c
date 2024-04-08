/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pico/stdlib.h"

int main() {
#ifndef PICO_DEFAULT_LED_PIN
#warning blink example requires a board with a regular LED
#else
    const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    unsigned short v[100];
    for (i=0;i<100;i++){
        v[i] = sin(2*pi*2*i/100);
    }
    while (true) {
        gpio_put(LED_PIN, 1);
        sleep_ms(250);
        gpio_put(LED_PIN, 0);
        sleep_ms(250);

        cs_low
        send_v(v[i])
        cs_higb
        delay .01 seconds
    }
#endif
}

send_v(volt){
    char c1, char c2
    c1 = 0b1111<<4|(volt>>6)
    c2 = volt & 0b0011111111
    spi_write(c1)
    spi_write(c2)

}
