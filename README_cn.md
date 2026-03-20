# MaxArm

[English](README.md) | 中文


## 产品概述

### 关于MaxArm

MaxArm是一款以ESP32为主控的桌面机械臂，内置Wi-Fi和蓝牙，同时支持MicroPython和Arduino两种开发方式，兼顾初学者的易用性与进阶开发的灵活性。

除了传统桌面机械臂的基础操作功能，MaxArm更定位为一个开放的二次开发平台。搭配传感器拓展包，可实现颜色分拣、超声波检测、触控感应、声音感应、AI视觉等多种应用。全部源码和库文件开源，并配备从硬件基础到逆运动学的完整教程体系。

无论你是学生、创客还是教育工作者，MaxArm都提供了一条结构清晰、可持续拓展的机器人项目实践路径。


### 核心：为创客打造的灵活硬件平台

MaxArm的硬件设计以易用性为前提，同时不牺牲能力上限。

**ESP32主控**：核心控制器采用ESP32，提供双核处理能力，并内置Wi-Fi和蓝牙。这意味着通过手机或电脑进行无线控制是原生支持的，无需额外硬件。

**双开发环境**：完整支持MicroPython和Arduino IDE。初学者可以从Python简洁的语法入手；有经验的开发者可以切换到Arduino的C++进行更底层的硬件控制。两套环境均配备了开箱即用的库文件。

**气泵吸嘴末端执行器**：机械臂采用气泵和电磁阀驱动的气动吸嘴，实现可靠的抓取与放置操作。末端执行器可更换，支持针对不同任务的定制工具。

**拓展接口设计**：机身预留多个拓展接口，可轻松接入各类传感器模块——超声波、红外、颜色、触控、光线、声音等。传感器拓展包解锁完整的互动应用套件。

### 软件生态：从基础到AI视觉

MaxArm附带完整的库文件生态，覆盖硬件驱动、运动学计算和传感器集成。

**硬件抽象库**：总线舵机（`LobotSerialServoControl`）、PWM舵机、蜂鸣器、吸嘴、超声波模块均有预置库文件，让你专注于应用逻辑，而非底层驱动。

**逆运动学引擎**：`ESPMax`库内置逆运动学实现，支持通过目标XYZ坐标直接控制机械臂，而无需手动计算各关节角度，大幅简化复杂运动的编程难度。

**传感器集成**：代码库包含APDS-9960颜色传感、超声波测距、双红外检测、触控感应、光线感应、声音感应等即用型示例，全部与机械臂控制逻辑深度整合。

**AI视觉模块**：配合幻尔视觉模块，MaxArm支持人脸识别、口罩检测、颜色追踪、垃圾分类等功能，将机器学习推理能力直接引入物理操控任务。


### 你能做什么

结构化的学习路径带你从开箱到高阶应用：

**硬件基础** — LED闪烁、按键检测、蜂鸣器控制、PWM舵机控制（单个/多个）、总线舵机控制（位置/速度）、气泵吸嘴操作、ADC电压读取、串口通信、定时器使用。

**传感器玩法** — 超声波检测吸取、超声波检测码垛、颜色识别、颜色分拣、红外检测控制、双红外检测分拣、触控摆放、光线感应摆放、声音感应摆放、超声波+数码管显示。

**AI视觉玩法** — 颜色追踪及分拣、人脸识别+风扇开启及追踪、口罩识别、垃圾分类。

**PS2手柄控制** — 使用PS2无线手柄实时控制机械臂运动（仅Python版本）。

**逆运动学** — 基于XYZ坐标的机械臂定位与路径规划，使用内置IK求解器实现。

## 官方资源

### 幻尔科技官方

- **官方网站**: [https://www.hiwonder.com/](https://www.hiwonder.com/)
- **产品页面**: [https://www.hiwonder.com/products/maxarm](https://www.hiwonder.com/products/maxarm)
- **官方文档**: [https://docs.hiwonder.com/projects/MaxArm/en/latest/](https://docs.hiwonder.com/projects/MaxArm/en/latest/)
- **技术支持**: support@hiwonder.com

## 快速开始

### 硬件准备

- MaxArm机械臂
- 12V 5A电源适配器
- Micro-USB数据线（用于烧录程序）
- 传感器拓展包（可选，用于传感器/AI视觉玩法）

### 软件环境搭建

1. 安装 [Arduino IDE](https://www.arduino.cc/en/software) 或 [Thonny](https://thonny.org/)（MicroPython开发）
2. 在Arduino IDE中添加ESP32开发板支持
3. 打开 `Arduino/` 目录下任意 `.ino` 示例工程
4. 选择正确的COM端口并上传程序

详细搭建步骤请参考[官方文档](https://docs.hiwonder.com/projects/MaxArm/en/latest/)。

## 仓库结构

```
MaxArm/
├── Arduino/
│   ├── hardware_basics/         # 硬件基础示例
│   ├── sensor_applications/     # 传感器应用示例
│   └── ai_vision/               # AI视觉示例
└── Python/
    ├── hardware_basics/         # 硬件基础示例
    ├── sensor_applications/     # 传感器应用示例
    ├── ps2_gamepad_control/     # PS2手柄控制
    └── ai_vision/               # AI视觉示例
```

## 社区与支持

- **GitHub Issues**: 提交问题反馈和功能建议
- **邮件支持**: support@hiwonder.com
- **文档资料**: 完整的教程指南

## 许可证

本项目开源，可用于教育和研究目的。

---

**幻尔科技** - 赋能机器人教育创新
