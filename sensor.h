#ifndef SENSOR_H
#define SENSOR_H

int read_adc(void);
float adc_to_voltage(int adcValue);
float voltage_to_temperature(float voltage);

#endif
