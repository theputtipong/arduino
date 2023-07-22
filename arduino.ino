#include <Servo.h>
Servo servoMotor;

const int servoPin = 13;  // Define the pin that the LED is connected to.

void setup() {
  servoMotor.attach(servoPin);
}

void loop() {
  servoRotate();
}

void servoRotate() {
  servoMotor.write(0);
  delay(1000);            // Delay for 1 second
  servoMotor.write(90);   // Rotate the servo to 90 degrees (center angle)
  delay(1000);            // Delay for 1 second
  servoMotor.write(180);  // Rotate the servo to 180 degrees (maximum angle)
  delay(1000);            // Delay for 1 second
}
