#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
int i = 0;

void setup() {

  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(12);
  servo5.attach(13);
}

void loop() {

  for (i = 0; i <= 180; i += 1) {
    servo1.write(i);
    servo2.write(i);
    servo3.write(i);
    servo4.write(i);
    servo5.write(i);
    delay(15);
  }

  for (i = 180; i >= 0; i -= 1) {
    servo1.write(i);
    servo2.write(i);
    servo3.write(i);
    servo4.write(i);
    servo5.write(i);

    delay(15);
  }
}  
