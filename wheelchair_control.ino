#include <SoftwareSerial.h>

SoftwareSerial bluetooth(7, 6); // RX, TX

// Motor pins
#define MLa 8
#define MLb 9
#define MRa 10
#define MRb 11

// Motor functions
void moveForward() {
  digitalWrite(MLa, LOW);
  digitalWrite(MLb, HIGH);
  digitalWrite(MRa, LOW);
  digitalWrite(MRb, HIGH);
}

void moveBackward() {
  digitalWrite(MLa, HIGH);
  digitalWrite(MLb, LOW);
  digitalWrite(MRa, HIGH);
  digitalWrite(MRb, LOW);
}

void turnLeft() {
  digitalWrite(MLa, LOW);
  digitalWrite(MLb, LOW);
  digitalWrite(MRa, LOW);
  digitalWrite(MRb, HIGH);
}

void turnRight() {
  digitalWrite(MLa, LOW);
  digitalWrite(MLb, HIGH);
  digitalWrite(MRa, LOW);
  digitalWrite(MRb, LOW);
}

void stopMotors() {
  digitalWrite(MLa, LOW);
  digitalWrite(MLb, LOW);
  digitalWrite(MRa, LOW);
  digitalWrite(MRb, LOW);
}

char command = 'S';

void setup() {
  Serial.begin(9600);
  bluetooth.begin(9600);

  pinMode(MLa, OUTPUT);
  pinMode(MLb, OUTPUT);
  pinMode(MRa, OUTPUT);
  pinMode(MRb, OUTPUT);

  stopMotors();
  Serial.println("Wheelchair Ready With Fixed Timing Control");
}

void loop() {

  if (bluetooth.available() > 0) {
    command = bluetooth.read();

    Serial.print("Command Received: ");
    Serial.println(command);

    switch (command) {

      case 'F':
        Serial.println("Forward 5 Seconds");
        moveForward();
        delay(5000);
        stopMotors();
        break;

      case 'B':
        Serial.println("Backward 5 Seconds");
        moveBackward();
        delay(5000);
        stopMotors();
        break;

      case 'R':
        Serial.println("Turn Left 3 Seconds");
        turnLeft();
        delay(3000);
        stopMotors();
        break;

      case 'L':
        Serial.println("Turn Right 3 Seconds");
        turnRight();
        delay(3000);
        stopMotors();
        break;

      case 'S':
        Serial.println("STOP!");
        stopMotors();
        break;
    }

    // Prevent repeating the same command
    command = 'X';
  }
}
