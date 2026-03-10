#include "sensor.h"
#include "config.h"

/*
    Simulated ADC reading.
    Replace this with real microcontroller ADC code later.
*/
int read_adc(void) {
    return 61;  
    /*
        Example:
        voltage = 61 * (5.0 / 1023.0) ≈ 0.298 V
        temperature ≈ 29.8 C
    */
}

float adc_to_voltage(int adcValue) {
    return adcValue * (ADC_REFERENCE_VOLTAGE / ADC_MAX_VALUE);
}

float voltage_to_temperature(float voltage) {
    /*
        LM35 outputs 10 mV per degree C
        so:
        temperature = voltage / 0.01 = voltage * 100
    */
    return voltage * 100.0f;
}
