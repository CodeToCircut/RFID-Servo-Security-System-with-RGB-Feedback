#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>

// Define pins for RGB
int redPin = 5;
int greenPin = 6;
Servo myServo;

void setup() {
  myServo.attach(9);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  // Initialize RFID here...
}

void loop() {
  // If tag detected:
  if (tagMatches) {
    digitalWrite(greenPin, HIGH);
    myServo.write(90); // Open
    delay(2000);
    myServo.write(0);  // Close
  } else {
    digitalWrite(redPin, HIGH);
    delay(1000);
  }
  // Reset LEDs...
}
