#include <LiquidCrystal_I2C.h>

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// กำหนดขนาดของจอ LCD (จำนวนคอลัมน์และแถว)
const int lcdColumns = 16;
const int lcdRows = 2;

// กำหนดที่อยู่ของจอ LCD ในระบบ I2C
const int i2cAddress = 0x27;  // แต่ละจอ LCD จะมีที่อยู่ I2C ที่ต่างกันไป ตรวจสอบกับผู้ผลิตหรือดูที่เอกสารของจอ LCD

// สร้างอ็อบเจ็กต์ LiquidCrystal_I2C ด้วยที่อยู่ I2C และขนาดของจอ LCD
LiquidCrystal_I2C lcd(i2cAddress, lcdColumns, lcdRows);

void setup() {
  // เปิดการสื่อสารผ่านทาง I2C
  Wire.begin();

  // เริ่มต้นใช้งานจอ LCD
  lcd.begin();

  // แสดงข้อความทดสอบบนจอ LCD
  lcd.backlight(); // เปิดไฟหน้าจอ LCD
  lcd.setCursor(0, 0);
  lcd.print("Hello, World!");
}

void loop() {
  // ไม่มีการทำงานเพิ่มเติมใน loop() ในตัวอย่างนี้
}
