#include <Servo.h> 
Servo pwm; 
void setup() {
  pwm.attach(11); // Attach the servo control pin to digital pin 11
}

void loop() {
  // Sweep the servo from 0 to 180 degrees and back

  // Sweep from 0 to 180 degrees
  for (int angle = 0; angle <= 180; angle++) {
    pwm.write(angle); // Tell the servo to go to the angle
    delay(15); // Wait for the servo to reach the position
  }

  // Sweep from 180 to 0 degrees
  for (int angle = 180; angle >= 0; angle--) {
    pwm.write(angle); // Tell the servo to go to the angle
    delay(15); // Wait for the servo to reach the position
  }
}