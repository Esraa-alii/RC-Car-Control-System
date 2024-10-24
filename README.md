# RC Car Control System

This project is an embedded system application for controlling an RC car. The car's movements are controlled via UART commands, and the direction of motion is handled by DC motors. The system is programmed on a microcontroller that interfaces with the motors and UART communication.

## Features

- **Forward Movement**: Car moves forward when receiving the command `F` or `f`.
- **Backward Movement**: Car moves backward when receiving the command `B` or `b`.
- **Turn Right**: Car turns right when receiving the command `R` or `r`.
- **Turn Left**: Car turns left when receiving the command `L` or `l`.
- **Stop**: Car stops when receiving the command `S` or `s`.

## Project Structure

- **`DIO`**: Handles the digital input/output operations for the microcontroller pins.
- **`UART`**: Manages UART communication between the system and an external controller (e.g., a remote or PC).
- **`DCMOTOR`**: Controls the motors' forward, backward, left, right, and stop functions.

## Code Overview

The main code initializes the required modules (DIO, UART, and DC Motor) and continuously listens for incoming UART commands to adjust the car's movement accordingly.

### Main Loop

- The system continuously reads a command from UART using `UART_u8RX()`.
- Depending on the command received, the car will:
  - Move forward (`F` or `f`)
  - Move backward (`B` or `b`)
  - Turn right (`R` or `r`)
  - Turn left (`L` or `l`)
  - Stop (`S` or `s`)

## Hardware Requirements

- **Microcontroller**: Compatible with UART and capable of controlling DC motors (e.g., AVR, PIC, STM32, etc.).
- **DC Motors**: For driving the wheels of the RC car.
- **Motor Driver**: To interface between the microcontroller and the motors.
- **UART Interface**: To send control commands from a remote device.

## How to Use

1. **Setup the microcontroller** with the required hardware (DC motors, motor driver, UART communication).
2. **Compile and flash** the provided code onto the microcontroller.
3. Use a UART-capable device (such as a PC or Bluetooth module) to send commands to the RC car:
   - `F`/`f`: Move forward
   - `B`/`b`: Move backward
   - `R`/`r`: Turn right
   - `L`/`l`: Turn left
   - `S`/`s`: Stop the car

