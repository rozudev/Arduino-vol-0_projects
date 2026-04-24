#include <Servo.h>

Servo myservo;
int pot = 1;
int val;

void setup() {

myservo.attach(9);
Serial.begin(9600);

}

void loop() {

  val = analogRead(pot);
  val = map(val, 0, 1023, 0, 180);
  myservo.write(val);
  Serial.print(val);
  delay(15);

}
