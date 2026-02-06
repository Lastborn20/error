#include <Arduino.h>
const int trigPin = 9;
const int echoPin = 10;

// Variables
long duration;
float distance;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set pin modes
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Clear the TRIG pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send a 10 microsecond pulse to TRIG
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the ECHO pin (time taken for pulse to return)
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance (speed of sound = 0.034 cm/µs)
  distance = (duration * 0.034) / 2;

  // Display distance
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500); // wait 0.5 seconds
}
