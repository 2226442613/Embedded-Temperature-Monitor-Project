# Temperature Monitor Embedded System Project

## Overview
This project is a simple microcontroller-based embedded system that monitors temperature using an LM35 temperature sensor. The program reads the sensor value, converts it into voltage, then converts the voltage into temperature in degrees Celsius. If the temperature exceeds a preset threshold, an LED warning is activated.

This project is designed to demonstrate basic embedded systems concepts in electrical engineering, including analog sensor interfacing, ADC conversion, threshold-based control, and modular programming in C.

---

## Features
- Reads temperature from an LM35 sensor
- Converts ADC value into voltage
- Converts voltage into temperature in degrees Celsius
- Turns warning LED on when temperature is above threshold
- Modular C code separated into multiple files

---

## File Description

### `main.c`
Main application loop.  
Handles:
- reading sensor data
- processing the value
- checking threshold
- controlling LED output

### `config.h`
Stores project constants such as:
- ADC reference voltage
- ADC maximum value
- temperature threshold

### `sensor.h`
Header file for sensor-related functions.

### `sensor.c`
Implements sensor processing functions:
- ADC reading
- ADC to voltage conversion
- voltage to temperature conversion

### `control.h`
Header file for LED and delay control functions.

### `control.c`
Implements output control functions:
- LED on
- LED off
- delay placeholder

---

## Hardware Components
- Microcontroller board (Arduino Uno, STM32, or similar)
- LM35 temperature sensor
- LED
- 220 ohm resistor
- Breadboard
- Jumper wires

---

## Circuit Connections

### LM35
- Pin 1 -> 5V
- Pin 2 -> Analog input (for example A0)
- Pin 3 -> GND

### LED
- Microcontroller digital output pin -> 220 ohm resistor -> LED -> GND

---

## How It Works
1. The microcontroller reads the analog voltage from the LM35 sensor.
2. The ADC value is converted into a voltage.
3. The voltage is converted into temperature using the LM35 scale factor.
4. If temperature is greater than the threshold, the LED turns on.
5. Otherwise, the LED remains off.

---

## Temperature Conversion
The LM35 outputs:

- 10 mV per degree Celsius

So:

- 0.25 V = 25°C
- 0.30 V = 30°C
- 0.40 V = 40°C

Formula used:

Temperature (°C) = Voltage × 100

---

## Notes
This version contains placeholder functions for ADC input, LED control, and delay.  
For real hardware:
- replace `read_adc()` with actual ADC code
- replace `led_on()` and `led_off()` with GPIO control
- replace `delay_ms()` with a hardware timer or software delay

---

## Future Improvements
- Add LCD or OLED display
- Add buzzer alarm
- Add fan control using a transistor or MOSFET
- Log temperature data to serial monitor or SD card
- Add buttons to adjust threshold

---

## Educational Value
This project demonstrates:
- embedded C programming
- modular code design
- analog-to-digital conversion
- sensor calibration concepts
- basic control logic

It is a good beginner electrical engineering project for learning embedded systems.

---

## Author
Jerry Cui
