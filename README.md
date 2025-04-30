# 6DOF-Robotic-Arm-ROS2 
# 6-DOF Robotic Arm using Arduino, NEMA 17, and DRV Drivers

This repository contains the code, design files, and documentation for a **6-DOF robotic arm** controlled by an **Arduino** microcontroller. The arm utilizes **NEMA 17 stepper motors** and **DRV stepper motor drivers** for precise control and movement.

## Project Overview

The aim of this project is to build a **6 degrees of freedom (DOF)** robotic arm capable of performing precise and repeatable movements. The arm is controlled by an **Arduino** board and powered by **NEMA 17 stepper motors**, which are driven by **DRV drivers** for reliable and accurate motion control.

The robotic arm can be used for various tasks such as pick-and-place operations, object manipulation, and educational purposes in the field of robotics and automation.

## Hardware Components

### 1. **Arduino Microcontroller**
- **Arduino Uno / Mega / Due** 
- Controls the stepper motors via driver modules and handles logic for inverse kinematics

### 2. **Stepper Motors**
- **NEMA 17 Stepper Motors** (x6)
  - Provides high torque and precision for joint movement
  - 1.8-degree step angle

### 3. **Motor Drivers**
- **DRV8825 Stepper Motor Drivers** (x6)
  - Controls the stepper motors by regulating current and step pulses from the Arduino

### 4. **Power Supply**
- **12V DC Power Supply** 

### 5. **Mechanical Parts**
- **3D Printed Parts** for arm structure, joints, and mounting brackets
- **Bearings**, **Screws**, and **Nuts** for assembly
- **Linkages** and **End-Effector** (customizable as per application)

### 6. **Additional Components**
- **End-Effector**: Gripper or tool 
- **Wires**, **Connectors**, and **Power Distribution Board**

## Software Architecture

### 1. **Programming Language**:
- **Arduino C++** 

### 2. **Control Logic**:
- **Stepper Motor Control**: Using `AccelStepper` library to control motor speed and position.
- **Inverse Kinematics**: Calculates the required angles for each joint based on the desired position of the end-effector.
- **PID Control**: Optional control for more precise positioning.

### 3. **Libraries Used**:
- `AccelStepper` – For smooth and precise stepper motor control
- `Servo` – For controlling any servos in the system (if applicable)
- `Math` – For performing inverse kinematics calculations


