#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

const int irPin = 2;
const int firePin = 3;

// LCD Address = 0x27
// LCD Size = 16 Columns, 2 Rows 
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
  //Initialize LCD
  lcd.init();

  //Turn ON Backlight
  lcd.backlight();

  //First Line
  lcd.setCursor(0,0);
  lcd.print("WELCOME!!");

  pinMode(irPin,INPUT);
  pinMode(firePin,OUTPUT);
  Serial.begin(9600);
}

int motion; 

void loop(){
  motion = digitalRead()

}