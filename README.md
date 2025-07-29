# 🚨 ESP32-Based IoT Black Box System

This project implements a lightweight **IoT Black Box** system using the **ESP32** microcontroller. It is designed for **drones, rocketry, or CubeSat** experimental systems where real-time environmental and motion monitoring is essential.

---

## 📦 System Overview

This IoT system continuously monitors:

- 🌡️ **Temperature** and **Humidity** using a DHT22 sensor  
- 📈 **Acceleration and movement** using MPU6050 IMU  
- 📺 Displays real-time data on an OLED  
- 🔔 Raises **alerts** using a **buzzer** and **LED** on threshold breaches

---

## 🎯 Purpose

- ✅ Acts as a **miniature black box** for test flights and lab payloads  
- ✅ Provides **live readings** on environment and motion  
- ✅ Gives **visual and audio alerts** on critical thresholds  
- ✅ Helps in **diagnostics and safety validation** during field testing

---

## 🌍 Importance

- 🛰️ **Essential for Experimental Space Hardware**  
   Real-time diagnostics for CubeSat or drone safety testing.

- 🌡️ **Environmental Monitoring**  
   Useful in payload tests, lab simulations, and harsh conditions.

- 📉 **Impact/Crash Detection**  
   Detects strong jerks, indicating falls or crashes.

- ♻️ **Reusable & Extendable**  
   Easily add GPS, altitude (BMP390), or SD logging features.

---

## ⚙️ Hardware Used

| Component          | Role                              |
|-------------------|-----------------------------------|
| **ESP32 Dev Board**| Main microcontroller               |
| **DHT22**          | Temperature & Humidity sensor      |
| **MPU6050**        | Accelerometer + Gyroscope          |
| **SSD1306 OLED**   | Live data display (I2C)            |
| **LED + Buzzer**   | Alert indicators                   |
| Optional           | BMP390 (Altitude), GPS NEO-6M      |

---

## 🔔 Alert Conditions

The system raises alerts (LED & Buzzer ON) when:
- Temperature > **40°C**
- Acceleration on X or Y axis > **±10 m/s²**

---

## 🖥️ Simulation

🔗 **Run on Wokwi**:  
👉 [Click to Open Simulation](https://wokwi.com/projects/437651755421167617)

No hardware? No problem! Use Wokwi to simulate and test this system online.

---

## 🚀 Features

- Real-time data on:
  - Temperature (°C)
  - Humidity (%)
  - Acceleration (X and Y axes)
- OLED shows `ALERT` or `NORMAL` status
- LED and Buzzer activate during abnormal conditions
- Fully modular – sensors can be added or replaced

---

## 🛠️ Setup Instructions

### ✅ On Wokwi
1. Open the simulation link above
2. Click **"Start Simulation"**
3. View outputs on the OLED and serial monitor

### 🖥️ On Real Hardware
1. Install required Arduino libraries:
   - `Adafruit_SSD1306`
   - `Adafruit_GFX`
   - `Adafruit_MPU6050`
   - `Adafruit_Sensor`
   - `DHT sensor library`
2. Flash code to ESP32 via Arduino IDE
3. Connect sensors as per your schematic
4. Power on and observe the behavior

---

## 💡 Future Ideas

- 🔍 Add **GPS (NEO-6M)** for location tracking  
- 💾 Log data on **SD card**  
- 📶 Send alerts via **Wi-Fi / LoRa**  
- 🧭 Add **BMP390** for altitude monitoring

---

## 👩‍🚀 Project Credits

- 👩‍💻 **Intern**: Sindhu Yesilanka  
- 🛰️ **Internship**: India Space Lab – Summer Internship 2025  
- 🔬 **Domain**: Embedded Systems, IoT, Aerospace  

---

## 📜 License

This project is open-source under the [MIT License](LICENSE)

---

