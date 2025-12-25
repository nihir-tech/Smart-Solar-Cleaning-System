# ☀️ Smart Solar Cleaning System

![Arduino](https://img.shields.io/badge/Arduino-UNO-blue)
![Project](https://img.shields.io/badge/Project-IoT%20%7C%20Embedded-green)
![Status](https://img.shields.io/badge/Status-Working-success)

## 📌 Overview
The **Smart Solar Cleaning System** is an **automatic cleaning solution** designed to improve solar panel efficiency by detecting dust accumulation and cleaning the panel **only during daytime** using a water pump and wiper mechanism.

This system helps reduce manual effort, maintenance cost, and power loss caused by dust on solar panels.

---

## 🎯 Objective
- Detect dust accumulation on solar panels
- Automatically clean the panel when dust is detected
- Operate only during daytime to save power
- Improve overall solar panel efficiency

---

## ⚙️ Components Used
- **Arduino UNO**
- **Dust Sensor (GP2Y1010AU0F)**
- **LDR Module**
- **Relay Module**
- **Motor Driver**
- **DC Gear Motor**
- **Water Pump**
- **Breadboard**
- **Jumper Wires**
- **Dummy Solar Panel**
- **Power Supply (5V & 12V)**

---

## 🧠 Working Principle
1. The **dust sensor continuously monitors** the dust level on the solar panel.
2. When dust crosses a **predefined threshold**, the system checks for **daylight using the LDR sensor**.
3. If it is **daytime**, the Arduino activates:
   - The **water pump** to spray water  
   - The **DC motor** to move the wiper
4. The wiper cleans the surface of the panel effectively.
5. Once cleaning is completed, the system automatically turns OFF.

🔹 The system **does not operate at night**, ensuring power efficiency.

---

## ✨ Features
- Fully **automatic operation**
- Daylight-based activation
- Efficient dust detection
- Low power consumption
- Reduces manual cleaning effort
- Simple and cost-effective design

---

## 🚀 Applications
- Residential solar panels
- Commercial solar plants
- Industrial rooftop solar systems
- Remote solar installations

---

## 🛠️ Technology Stack
- **Microcontroller:** Arduino UNO  
- **Programming Language:** Arduino (C/C++)  
- **Domain:** Embedded Systems / IoT  

---

## 🔮 Future Improvements
- IoT-based monitoring (WiFi / GSM)
- Mobile app integration
- Solar efficiency tracking
- Water usage optimization
- Weather-based automation

---

## 👨‍💻 Author
**Nihir Sartanpara**  
B.Tech IT Student  
Embedded Systems & IoT Enthusiast

---

## 📄 License
This project is currently **unlicensed**.  
You may add an **MIT License** for open-source usage.

---

⭐ If you found this project useful, consider giving it a **star**!
