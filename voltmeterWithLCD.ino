#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
int readVoltPin = A0;
int valRead = 0;
float V = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(readVoltPin, INPUT);
  lcd.begin(16,2);
  lcd.print("Voltage :");
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valRead = analogRead(readVoltPin);
  V = float(5)/float(1023)*valRead;
  lcd.setCursor(0,1);
  lcd.print(V);
  delay(500);
}
