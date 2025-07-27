# Black-box-iot-system
# 🚀 ESP32-Based IoT Black Box System

This project is a **smart black box** system built using an **ESP32** microcontroller, designed for drones, rockets, and CubeSat prototype testing. It detects critical events like **abnormal temperature, shock, or vibration** using onboard sensors and gives real-time alerts via an **OLED display, LED, and buzzer**.

## 🎯 Objective

To develop a compact monitoring system that logs and alerts critical data such as:
- Sudden acceleration (jerks, crashes)
- High temperature
- Status visibility on OLED
- Alerts via LED and buzzer

This system can be integrated into experimental aerospace or robotic devices for **safety diagnostics**.

---

## 🔧 Hardware Components

| Component           | Description                        |
|---------------------|------------------------------------|
| ESP32 Dev Module    | Main microcontroller               |
| DHT22               | Temperature & Humidity sensor      |
| MPU6050             | Accelerometer and Gyroscope        |
| SSD1306 OLED        | 128x64 OLED Display (I2C)          |
| LED + Buzzer        | Visual and audio alerts            |
| Optional (Extendable)| BMP390 (Pressure), NEO-6M (GPS)  |

---

## 🖥️ Features

- Displays **temperature**, **humidity**, and **acceleration (X/Y)** values
- Alerts if:
  - Temperature > 40°C
  - Sudden motion detected (acceleration > threshold)
- OLED display shows real-time status: `ALERT` or `NORMAL`
- Modular design (future support for GPS, pressure sensors)

---

## 📷 Wokwi Simulation

🔗 [Click to Open Simulation](https://wokwi.com/projects/437651755421167617)

No hardware? No problem — test the full system using Wokwi's online simulator!

---

## 📦 Installation

1. Open the [Wokwi link](https://wokwi.com/projects/437651755421167617)
2. Modify code if needed and test using virtual components
3. If using locally:
   - Install libraries: `Adafruit_SSD1306`, `Adafruit_MPU6050`, `Adafruit_Sensor`, `DHT`
   - Flash to ESP32 via Arduino IDE or PlatformIO

---

## 💡 Future Enhancements

- Add SD card support for data logging
- Add GPS module (NEO-6M) for location tracking
- Use LoRa or WiFi to send alerts remotely
- Integrate BMP390 for altitude detection

---

## 👩‍🚀 About the Project

- 👨‍💻 Intern: [Your Name]
- 🛰️ Internship: India Space Lab Summer Internship 2025
- 🧪 Category: Embedded Systems, IoT, Aerospace

---

## 📜 License

This project is open source and free to use under the [MIT License](LICENSE).


