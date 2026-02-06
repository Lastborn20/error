#include <Arduino.h>

int ledPin = 13;  // LED connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT);  // set the LED pin as output
}

void loop() {
  digitalWrite(ledPin, HIGH); // turn LED ON
  delay(1000);                // wait 1 second
  digitalWrite(ledPin, LOW);  // turn LED OFF
  delay(1000);                // wait 1 second
}
