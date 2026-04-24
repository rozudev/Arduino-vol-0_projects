#include <Servo.h>

int LEDgreen = 7;
int LEDred = 6;
Servo myservo;

#define LEFT 8
#define RIGHT 9

int angle = 90;
int angleStep = 60;

void setup() {

  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDred, OUTPUT);
  pinMode(LEFT, INPUT_PULLUP);
  pinMode(RIGHT, INPUT_PULLUP);
  myservo.attach(10);

  Serial.begin(9600);
  myservo.write(angle);

  Serial.print("Servo button control ready");

}

void loop() {
  // Left button (green)
  if (digitalRead(LEFT) == LOW) {
    digitalWrite(LEDgreen, HIGH);
    digitalWrite(LEDred, LOW);

    angle += angleStep;

    if (angle > 180) angle = 180;
    myservo.write(angle);
    Serial.print("Moved to: ");
    Serial.println(angle);

    delay(100);
  }
  else{
    digitalWrite(LEDgreen, LOW);
  }
  
  // Right button (red)
  if (digitalRead(RIGHT) == LOW) {
    digitalWrite(LEDgreen, LOW);
    digitalWrite(LEDred, HIGH);

    angle -= angleStep;

    if (angle < 0) angle = 0;
    myservo.write(angle);
    Serial.print("Moved to: ");
    Serial.println(angle);

    delay(100);
  }
  else{
    digitalWrite(LEDred, LOW);
  }
}

  

