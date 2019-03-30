#include<LiquidCrystal.h>
#include <Arduino.h>
#include <Wire.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // sets the interfacing pins


void setup()
{
 Serial.begin(9600);
 lcd.begin(16, 2);  // initializes the 16x2 LCD
 
}

void loop()
{

  lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Temp:"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("humidity:");     // prints HELLO WORLD
}
