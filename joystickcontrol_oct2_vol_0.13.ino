#include <Servo.h>.
// defines servos
Servo servo1; 
Servo servo2;

// gives variables to joystick readings
int joyX = 0;
int joyY = 1;

int joyVal; // creates variable for joystick value

void setup() {

servo1.attach(10);
servo2.attach(9);
  
}

void loop() {

joyVal = analogRead(joyX); // reads value from the joystick
joyVal = map(joyVal, 0, 1023, 0, 180); // change value range to 0-180
servo1.write(joyVal); // writes value to servo

joyVal = analogRead(joyY);
joyVal = map(joyVal, 0, 1023, 0, 180);
servo2.write(joyVal);
delay(20);

}