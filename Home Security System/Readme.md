# Home Security System using Arduino

A simple home security system built with Arduino that detects nearby objects using an HC-SR04 ultrasonic sensor and triggers visual and audible alerts when an intrusion is detected.

## Features

* Real-time distance monitoring
* Intrusion detection using an ultrasonic sensor
* LCD display for instant status updates
* Buzzer alarm for audible alerts
* Adjustable detection threshold
* Simple and low-cost hardware setup

## Components Used

* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* 16x2 LCD Display
* Buzzer
* Jumper Wires
* Breadboard

## How It Works

The ultrasonic sensor continuously measures the distance between itself and nearby objects.

When an object enters the configured detection range:

1. The Arduino identifies the intrusion.
2. A warning message is displayed on the LCD.
3. The buzzer is activated to alert nearby users.
4. The system continues monitoring until the object leaves the detection zone.

## Demo Video
D:\Arduino Projects\demo.mp4

## Live Demo

Test the project here: https://wokwi.com/projects/466817892221573121

## Installation

1. Clone this repository.
2. Open the `.ino` file in the Arduino IDE.
3. Connect the components according to the circuit diagram.
4. Upload the code to the Arduino board.
5. Power the system and start monitoring.

## Project Structure

```text
Home-Security-System/
├── HomeSecuritySystem.ino
├── README.md
└── assets/
```

## Future Improvements

* Mobile notifications
* GSM/SMS alerts
* Wi-Fi monitoring dashboard
* Motion logging
* Camera integration
* Remote arming/disarming

## License

This project is open-source and available under the MIT License.
