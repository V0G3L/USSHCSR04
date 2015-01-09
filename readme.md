# Arduino library to controll a HCSR-04 Ultrasonic sensor

This is a school project an currently under construction!

Version: 0.1

## Summary

This is a library for the Arduino that interfaces with the HCSR-04 Ultrasonicsensor.

## Getting Started

### Software

Download the archive from [GitHub](https://github.com/V0G3L/USSHCSR04), decompress it, and move the "USSHCSR04" folder into the "libraries" subdirectory inside your Arduino sketchbook directory. You can view your sketchbook location by selecting File->Preferences in the Arduino environment; if there is not already a "libraries" folder in that location, you should create it yourself. After installing the library, restart the Arduino environment so it can find the QuadVNH3SP30MotorDriver library.

### Hardware

You can get the HCSR-04 Ultrasonic sensors at http://www.amazon.de/Ultraschall--HC-SR04-Abstand-Messung-Wandler/dp/B00BIZQWYE/ref=sr_1_2?ie=UTF8&qid=1420811719&sr=8-2&keywords=hc+sr04

## Library Reference


- ```USSHCSR-04(unsigned char trigPin, unsigned char echoPin)```Default constructor, the pins for Trigger and Echo are assigned here

- ```void init()```Initialize pinModes.


- ```int measure()```Gives back the time the sound needs in ms.

## Version History
