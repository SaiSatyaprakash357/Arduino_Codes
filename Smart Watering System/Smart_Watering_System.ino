#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(32, 16, 2); 

#include <Servo.h>
Servo myServo;

void setup() 
{
  pinMode(A0, INPUT); //Moisture Sensor Input
  pinMode(A1, INPUT); //LDR Input
  
  //Servo Setup
  myServo.attach(3);
  
  //LCD Dispaly Setup
  lcd.init();
  lcd.backlight();
}

void loop()
{
  int moisture= analogRead(A0);
  int light= analogRead(A1);
  
  // Servo Control
  if (moisture<500 && light>500)
    myServo.write(90);
  else if (moisture>700 || light<500)
    myServo.write(0);
  
  // Display Output
  lcd.setCursor(0,0);
  lcd.print("Moisture: ");
  lcd.print(moisture);
  lcd.print("   ");
  lcd.setCursor(0,1);
  lcd.print("Light: ");
  lcd.print(light);
  lcd.print("   ");
  
  delay(10);
}