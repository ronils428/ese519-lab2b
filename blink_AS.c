/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pico/stdlib.h"
#include <stdio.h>

//#define PICO_DEFAULT_LED_PIN A0
#define LED_PIN 29
#ifndef PICO_DEFAULT_LED_PIN
#warning blink example requires a board with a regular LED
#else

int main() {

	stdio_init_all();
	int num;
    //const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    while (true) {
		scanf("%d", &num);
		if (num==1)
		{
			gpio_put(LED_PIN, 1);
            sleep_ms(500);
			printf("\nHigh!");
		}
		else
		{
			printf("\nLow!");
			gpio_put(LED_PIN, 0);
			sleep_ms(250);
		}
    }
}
#endif