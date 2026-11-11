# Joystick Analog and Digital Read

## Description
This Arduino project reads the X-axis and Y-axis values of a joystick using analog input pins and detects the push button state using a digital input pin.

The readings are displayed on the Serial Monitor at a baud rate of 9600.

## Components Required
- Arduino UNO
- Joystick Module
- Jumper Wires

## Pin Configuration
- VRx → A0
- VRy → A2
- SW → D9
- VCC → 5V
- GND → GND

## Features
- Reads X-axis values (0–1023).
- Reads Y-axis values (0–1023).
- Detects joystick button press and release.
- Uses internal pull-up resistor.
- Displays readings on the Serial Monitor.

## Output
The joystick axis values and switch state are displayed in the Serial Monitor.