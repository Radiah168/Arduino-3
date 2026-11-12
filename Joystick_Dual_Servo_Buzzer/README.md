# Joystick Controlled Dual Servo with Buzzer

## Project Description
This project uses an Arduino Uno, a joystick module, two servo motors, and a buzzer. The joystick controls the movement of two servo motors along the X and Y axes. The joystick's push-button switch is used to control the buzzer.

## Components Used
- Arduino Uno
- Joystick Module
- 2 Servo Motors (SG90)
- Buzzer
- Breadboard
- Jumper Wires
- USB Cable

## Working Principle
- The joystick provides analog X and Y axis values.
- Arduino reads these values through A0 and A2 pins.
- The analog values are converted into angles between 0° and 180°.
- Two servo motors move according to the joystick direction.
- When the joystick switch is pressed, the buzzer turns ON.
- When the switch is released, the buzzer turns OFF.

## Pin Configuration

| Component | Arduino Pin |
|---|---|
| Joystick X-axis | A0 |
| Joystick Y-axis | A2 |
| Joystick Switch | D9 |
| X-axis Servo | D4 |
| Y-axis Servo | D3 |
| Buzzer | D7 |

## Library Used
- Servo.h

## Baud Rate
9600 bps