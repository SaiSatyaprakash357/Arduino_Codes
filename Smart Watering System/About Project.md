# Smart Window Plant Watering System

This project implements an **automated plant watering system** using **Arduino Uno**, a **soil moisture sensor**, and a **photoresistor (LDR)** to intelligently maintain optimal soil moisture levels in a window plant pot.

The system operates based on two environmental parameters:
1. **Soil moisture level** — measured using an analog soil moisture sensor.
2. **Ambient light level** — measured using a photoresistor in a voltage divider circuit.

## Features
- Waters the plant **only during daylight hours**.
- Maintains soil moisture between **500 and 700 analog units**.
- Uses a **servo motor** to actuate a watering valve or pump.
- Prevents watering at night to reduce fungal risks and conserve water.

## System Components
- Arduino Uno
- Soil moisture sensor
- Photoresistor (LDR) + 10kΩ resistor (voltage divider)
- Servo motor (for controlling water valve)
- Power source

## Logic
- If **light > 500** and **moisture < 500** → the servo opens the valve to water the plant.
- If **light < 500** or **moisture > 700** → the servo closes the valve.
- The system runs continuously with periodic updates.

## Applications
- Automated indoor plant care
- Smart home gardening
- Water-efficient irrigation systems

## Live Simulation
https://www.tinkercad.com/things/d7jhhPbr6TQ-smart-watering-system?sharecode=E2ZLbNRzlKoEK0qeQ9P6GkxJ9Djip1MydDW0oTqTX8M


*Developed for the IEEE SEED 2025 event: "OMG! Watt A Circuit! (Circuit Design)".*
