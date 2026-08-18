# ♿ Bluetooth-Controlled Wheelchair Prototype

<p align="center">
  <img src="working-prototype.jpg" alt="Working Prototype" width="500">
</p>

<p align="center">
  <b>Arduino-based Bluetooth-controlled mobility prototype using Arduino Uno, HC-05 and L298N motor driver.</b>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Platform-Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white">
  <img src="https://img.shields.io/badge/Language-C%2FC%2B%2B-blue?style=for-the-badge">
  <img src="https://img.shields.io/badge/Communication-Bluetooth-orange?style=for-the-badge">
  <img src="https://img.shields.io/badge/Project-Embedded%20Systems-green?style=for-the-badge">
</p>

---

## 📌 Project Overview

The **Bluetooth-Controlled Wheelchair Prototype** is an embedded systems project designed to demonstrate wireless movement control of a four-wheel mobility platform.

The system uses an **Arduino Uno** as the main controller. An **HC-05 Bluetooth module** receives commands wirelessly from the **Serial Bluetooth Terminal** application on a smartphone. The Arduino processes these commands and controls the motors through an **L298N motor driver**.

The prototype supports:

- ⬆️ Forward movement
- ⬇️ Backward movement
- ⬅️ Left turn
- ➡️ Right turn
- 🛑 Stop

---

## ✨ Features

- 📱 Bluetooth-based wireless control
- 🤖 Arduino Uno microcontroller
- 📡 HC-05 Bluetooth communication
- ⚙️ L298N motor driver
- 🔋 Battery-powered operation
- 🎮 Simple character-based control
- ⏱️ Fixed-duration movement control
- 🔧 Low-cost embedded system implementation

---

## 🧰 Components Used

| Component | Purpose |
|---|---|
| Arduino Uno | Main microcontroller |
| HC-05 Bluetooth Module | Wireless communication |
| L298N Motor Driver | Motor control |
| DC Motors | Movement |
| Battery | Power supply |
| Buck Converter | Voltage regulation |
| Serial Bluetooth Terminal | Sending control commands |
| Chassis & Wheels | Mechanical platform |
| Connecting Wires | Electrical connections |

---

## ⚙️ Working Principle

The system works in the following sequence:

```text
Smartphone
    │
    │ Bluetooth
    ▼
HC-05 Bluetooth Module
    │
    │ Serial Commands
    ▼
Arduino Uno
    │
    │ Control Signals
    ▼
L298N Motor Driver
    │
    ▼
DC Motors
    │
    ▼
Wheelchair Prototype Movement
