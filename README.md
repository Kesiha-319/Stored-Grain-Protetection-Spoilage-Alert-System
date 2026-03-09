# Stored-Grain-Protection-Spoilage-Alert-System

## Project Description

The **Stored Grain Protection & Spoilage Alert System** is an IoT-based monitoring system designed to protect stored grains from spoilage caused by unfavorable environmental conditions.
Grain quality is highly affected by temperature and humidity,and improper storage can lead to fungal growth, insect infestation, and significant economic loss.

This system continuously monitors the storage environment using sensors and alerts the user when the conditions exceed safe limits.
Notifications are sent through a mobile application, enabling farmers or warehouse managers to take preventive action at the right time.

---

## Key Features

* Real-time monitoring of storage conditions
* Automatic detection of unsafe temperature and humidity levels
* Instant alert through buzzer and mobile notification
* Remote monitoring using IoT platform
* Low-cost and energy-efficient design

---

## Hardware Components

* **ESP32 Microcontroller** – Processes sensor data and manages IoT communication
* **DHT22 Sensor** – Measures temperature and humidity inside the storage area
* **Buzzer / LED** – Provides local warning alerts
* **Solar Power Supply** – Ensures continuous and eco-friendly operation

---

## Software and Technologies

* Embedded C / Arduino IDE
* IoT Communication using Wi-Fi
* Blynk IoT Platform for mobile monitoring
* Sensor-based environmental monitoring

---

## System Workflow

1. The sensor measures temperature and humidity inside the grain storage environment.
2. The ESP32 reads and processes the sensor data.
3. The system compares the values with predefined safe limits.
4. If the conditions exceed the threshold, a buzzer alert is triggered.
5. At the same time, a notification is sent to the user through the mobile application.

---

## Applications

* Grain storage warehouses
* Agricultural storage facilities
* Smart farming systems
* Food grain preservation monitoring
