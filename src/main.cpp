/*
接线说明:VCC --- 3.3V
         GND --- GND
         OUT --- GPIO18


程序说明:测试旋转编码器(rotation sensor),串口输出某次的值

注意事项:无

函数示例:无

作者:灵首

时间:2023_4_10

*/
#include <Arduino.h>

//用于计数的变量
static int count;

void setup() {
  //初始化串口
  Serial.begin(9600);
  Serial.print("serial is OK!!!");

  //设置引脚模式
  pinMode(18,INPUT);
  
}

void loop() {
  //查看输出次数的变量
  count = count + 1;

  //读取模拟值
  int rotation_value = analogRead(18);

  //串口输出
  Serial.print("the  " + String(count) + "  rotation value is : ");
  Serial.print(rotation_value);
  Serial.print("\n");

  //延时
  delay(200);
}