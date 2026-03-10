#include <stdio.h>
#include "config.h"
#include "sensor.h"
#include "control.h"

/*
    For a real microcontroller project, hardware setup functions
    like ADC_init(), GPIO_init(), Serial_init() would go here.
*/

int main(void) {
    int adcValue;
    float voltage;
    float temperature;

    while (1) {
        adcValue = read_adc();
        voltage = adc_to_voltage(adcValue);
        temperature = voltage_to_temperature(voltage);

        printf("Temperature: %.2f C\n", temperature);

        if (temperature > TEMPERATURE_THRESHOLD) {
            led_on();
        } else {
            led_off();
        }

        delay_ms(1000);
    }

    return 0;
}
