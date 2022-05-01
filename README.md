# weather-station

This repoistory holds my current project for designing a home monitoring solution for temperature, humidity, and eventually the status of the plants in my office. Eventually, I would like to use an ESP32 or similar Wi-Fi enabled chip to host a small webserver or send notifications to alert me when desired specifications are met.

## Features
- measure temperature in Fahrenheit
- measure humidity
- display these measurements visually

## Goal Features
- measure soil moisture
- alert when soil is too dry
- alert when temperature is below a set value
- alert when temperature is above a set value
- alert when humidity is above a set value

# Parts List (continually updated)
- Arduino Nano (Atmega 168P)
- LCD1602 Module
- DHT11 Sensor
- Many jumper wires (for the time being)

# Schematic
All of the schematics can be found in the [`sch/`](sch/) directory.

# Code

