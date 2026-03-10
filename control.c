#include <stdio.h>
#include "control.h"

void led_on(void) {
    printf("LED ON: Temperature too high!\n");
}

void led_off(void) {
    printf("LED OFF: Temperature normal.\n");
}

void delay_ms(int ms) {
    /*
        Placeholder delay function.
        Replace with real delay function for your microcontroller.
    */
    (void)ms;
}
