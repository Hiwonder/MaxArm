# MaxArm

English | [中文](README_cn.md)


## Product Overview

### About MaxArm

MaxArm is a desktop robotic arm powered by an ESP32 microcontroller, featuring built-in Wi-Fi and Bluetooth. It supports both MicroPython and Arduino development, making it accessible to beginners while remaining capable enough for advanced projects.

Beyond standard robotic arm operations, MaxArm is designed as an open development platform. Pair it with the sensor expansion kit to explore color sorting, ultrasonic detection, touch and sound sensing, and AI vision applications. The full source code and libraries are open-source, with comprehensive tutorials covering everything from hardware basics to inverse kinematics.

Whether you're a student, maker, or educator — MaxArm gives you a structured, expandable foundation to build real robotics projects.


### The Core: A Flexible Hardware Platform Built for Makers

MaxArm's hardware is designed around accessibility without sacrificing capability.

**ESP32 at the Heart**: The main controller is an ESP32, offering dual-core processing, Wi-Fi, and Bluetooth connectivity out of the box. This means wireless control via smartphone or PC is built in — no extra hardware needed.

**Dual Programming Environments**: Full support for both MicroPython and Arduino IDE. Beginners can start with Python's readable syntax; experienced developers can drop into Arduino's C++ for tighter hardware control. Both environments come with ready-to-use library files.

**Suction-Based End Effector**: The arm uses a pneumatic suction nozzle driven by a pump and solenoid valve, enabling reliable pick-and-place operations. The end effector is interchangeable, supporting custom tooling for different tasks.

**Expansion-Ready Design**: Multiple expansion ports on the body allow easy connection to sensor modules — ultrasonic, infrared, color, touch, light, sound, and more. The sensor expansion kit unlocks a full suite of interactive applications.

### The Software Stack: From Basics to AI Vision

MaxArm ships with a complete library ecosystem covering hardware drivers, kinematics, and sensor integration.

**Hardware Abstraction Libraries**: Pre-built libraries for bus servos (`LobotSerialServoControl`), PWM servos, buzzer, suction nozzle, and ultrasonic modules mean you spend time on your application logic, not low-level driver code.

**Inverse Kinematics Engine**: The `ESPMax` library implements inverse kinematics, letting you command the arm by target XYZ coordinates rather than individual joint angles. This dramatically simplifies complex motion programming.

**Sensor Integration**: The codebase includes ready-to-run examples for APDS-9960 color sensing, ultrasonic distance measurement, dual infrared detection, touch sensing, light sensing, and sound sensing — all wired up to arm control logic.

**AI Vision Module**: Paired with the HiWonder vision module, MaxArm supports face recognition, mask detection, color tracking, garbage classification, and more — bringing machine learning inference directly into physical manipulation tasks.


### What You Can Build

A structured learning path takes you from unboxing to advanced applications:

**Hardware Basics** — LED blink, button detection, buzzer control, PWM servo control (single and multi), bus servo control (position and speed), suction nozzle operation, ADC voltage reading, UART communication, timer usage.

**Sensor Applications** — Ultrasonic pick-and-place, ultrasonic palletizing, color detection, color sorting, infrared detection & control, dual infrared sorting, touch sensor placement, light sensor placement, sound sensor placement, ultrasonic + digital display.

**AI Vision Applications** — Color tracking & sorting, face recognition with fan tracking, mask detection, garbage classification.

**PS2 Gamepad Control** — Control the arm in real time using a PS2 wireless gamepad (Python only).

**Inverse Kinematics** — Coordinate-based arm positioning and path planning using the built-in IK solver.

## Official Resources

### Official Hiwonder

- **Official Website**: [https://www.hiwonder.com/](https://www.hiwonder.com/)
- **Product Page**: [https://www.hiwonder.com/products/maxarm](https://www.hiwonder.com/products/maxarm)
- **Official Documentation**: [https://docs.hiwonder.com/projects/MaxArm/en/latest/](https://docs.hiwonder.com/projects/MaxArm/en/latest/)
- **Technical Support**: support@hiwonder.com

## Getting Started

### Hardware Requirements

- MaxArm robotic arm
- 12V 5A power adapter
- Micro-USB cable (for programming)
- Sensor expansion kit (optional, for sensor/AI applications)

### Software Setup

1. Install [Arduino IDE](https://www.arduino.cc/en/software) or [Thonny](https://thonny.org/) (for MicroPython)
2. Add ESP32 board support to Arduino IDE
3. Open any `.ino` sketch from the `Arduino/` directory
4. Select the correct COM port and upload

Refer to the [official documentation](https://docs.hiwonder.com/projects/MaxArm/en/latest/) for detailed setup instructions.

## Repository Structure

```
MaxArm/
├── Arduino/
│   ├── hardware_basics/         # Hardware basics examples
│   ├── sensor_applications/     # Sensor application examples
│   └── ai_vision/               # AI vision examples
└── Python/
    ├── hardware_basics/         # Hardware basics examples
    ├── sensor_applications/     # Sensor application examples
    ├── ps2_gamepad_control/     # PS2 gamepad control
    └── ai_vision/               # AI vision examples
```

## Community & Support

- **GitHub Issues**: Report bugs and request features
- **Email Support**: support@hiwonder.com
- **Documentation**: Comprehensive guides and tutorials

## License

This project is open-source and available for educational and research purposes.

---

**Hiwonder** - Empowering Innovation in Robotics Education
