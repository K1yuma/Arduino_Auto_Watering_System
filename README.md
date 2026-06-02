# Plant Test - Automatic Plant Watering System

This project is an Arduino-based automatic plant watering system that monitors soil moisture levels using a soil moisture sensor and displays the status on an I2C LCD.

## Features
- Real-time soil moisture monitoring.
- Status display on a 16x2 I2C LCD.
- Automatic watering control based on moisture thresholds.

## Components
- Arduino Uno (or compatible)
- I2C LCD 16x2 (Address: 0x27)
- Soil Moisture Sensor
- Relay Module or Water Pump (connected to digital pins)
- Jumper wires

## Project Schematic
Add your project schematic image or link here:
![Project Schematic](path/to/your/schematic.png)

## Wiring
The following table describes the wiring connections for the project:

| Component | Arduino Pin | Description |
|-----------|-------------|-------------|
| **Soil Sensor** | A0 | Analog Output |
| **I2C LCD** | SDA (A4) | Serial Data |
| **I2C LCD** | SCL (A5) | Serial Clock |
| **I2C LCD** | VCC | 5V |
| **I2C LCD** | GND | Ground |
| **Output 1** | Pin 7 | Control Pin (e.g., Pump/Relay) |
| **Output 2** | Pin 8 | Control Pin (e.g., Status LED) |
| **Output 3** | Pin 9 | Control Pin (e.g., Status LED) |

## Usage
1. Connect the components as per the wiring table.
2. Open `plant_test.ino` in the Arduino IDE.
3. Install the `LiquidCrystal_I2C` library.
4. Upload the code to your Arduino.
5. Monitor the LCD for moisture levels and watering status.
