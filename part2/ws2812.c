#include "pico/stdlib.h"
#include <stdio.h>

#include "hardware/pio.h"
#include "hardware/clocks.h"
#include "ws2812.pio.h"
#include "registers.h"
#include "ws2812.pio.h"

int main() {

    uint32_t addr_input = 0x00000000;
    ADDRESS addr = 0x00000000;
    VALUE data;
    int opt;

    stdio_init_all();

    while (true) {
        printf("Begin\n");
        printf("Input Register Address: \n");
        scanf("%x", &addr_input);
        printf("Address: 40030000 \n", addr_input);
        addr = (ADDRESS) addr_input;
    
        printf("Read (0) or Write(1): \n");
        scanf("%d", &opt);
        if(opt == 0) {
            printf("Read value: 0 \n", register_read(addr));
        } else {
            printf("What value do you want to write: \n");
            scanf("%x", &data);
            register_write(addr, data);
            printf("Read value: 0 \n", register_read(addr));
        }
        sleep_ms(250);

    }

    return 0;
}