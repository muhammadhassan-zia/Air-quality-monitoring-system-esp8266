# Air Quality Monitoring System

## Overview
This project is an IoT-based Air Quality Monitoring System designed to monitor environmental conditions in real time using sensor-based data acquisition and wireless communication.

## Features
- Measures temperature and humidity using DHT11
- Detects air quality and gas concentration using MQ-135 sensor
- Displays real-time data on LCD
- Enables wireless data transmission via ESP8266

## Components Used
- NodeMCU (ESP8266)
- MQ-135 Gas Sensor
- DHT11 Temperature & Humidity Sensor
- LCD Display
- Power Supply and supporting components

## Working Principle
The MQ-135 and DHT11 sensors collect environmental data such as gas concentration, temperature, and humidity. This data is processed by the ESP8266 microcontroller, which then displays it on an LCD screen and can transmit it wirelessly for remote monitoring.

## Functionality
- Reads temperature and humidity from DHT11 sensor
- Measures air quality using MQ-135 gas sensor
- Processes sensor data using ESP8266
- Displays output on LCD in real time
- Supports wireless monitoring via WiFi

## My Contribution
- Designed and implemented the complete system
- Integrated sensors with NodeMCU
- Developed embedded code for data acquisition and processing
- Performed testing and basic calibration of sensors

## Applications
- Air pollution monitoring
- Smart city systems
- Environmental data analysis
- Indoor air quality monitoring

## Code
The ESP8266 code for sensor data acquisition and processing is available in the `code/` folder.

## Output
The system successfully monitors environmental parameters and displays real-time values on the LCD. It can also transmit data wirelessly for remote monitoring applications.

## Circuit Diagram
![Circuit](Circuit-diagram.jfif)

## Hardware Setup
![Setup](images/hardware.jfif)
