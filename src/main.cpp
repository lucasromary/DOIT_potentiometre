#include <Arduino.h>
int pin_potentiometre = 34;
int val_potentiometre = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin_potentiometre, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val_potentiometre = analogRead(pin_potentiometre);
  Serial.println(val_potentiometre);
  delay(100);
}