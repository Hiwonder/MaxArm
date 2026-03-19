#include "ESPMax.h"
#include "Buzzer.h"
#include "TM1640.h"
#include "Ultrasound.h"
#include "SuctionNozzle.h"

// 超声波检测并数码管显示

TM1640 module(32, 33);
Ultrasound ultrasound;  //实例化超声波类

void setup() {
  // 初始化
  Buzzer_init();
  ESPMax_init();
  Nozzle_init();
  Valve_on();
  go_home(2000);
  delay(2000);
  Valve_off();
  Serial.begin(115200);
  Serial.println("start...");
  ultrasound.Breathing(30, 50, 60, 20, 30, 50);  // 发光超声波模块幻彩模式
}

void loop() {
  char text[6];
  int distance = ultrasound.GetDistance();       // 读取超声波测值
  Serial.println(distance);                      // 串口打印距离值单位mm
  sprintf(text, "%4d", distance);                // 把距离值转换成字符串
  module.setDisplayToString(text);               // 在数码管显示
  if (distance <= 50) {                          // 距离小于等于50mm
    ultrasound.Color(255, 0, 0, 255, 0, 0);      // 超声波亮红灯
  } else if (50 < distance & distance <= 100) {  // 距离大于50mm,小于等于100mm
    ultrasound.Color(0, 255, 0, 0, 255, 0);      // 超声波亮绿灯
  } else if (100 < distance) {                   // 距离大于100mm
    ultrasound.Color(0, 0, 255, 0, 0, 255);      // 超声波亮蓝灯
  }
  delay(300);  // 延时300毫秒
}