/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"

// Arduino pin numbers
const int X_pin = A0; // analog pin connected to X output

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin));
  Serial.print(" | ");
  Serial.println("Testing");
  delay(200);
}
