int LED = 10;
int pot = 2;
int val;
int brightness;
int fadeAmount;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {

val = analogRead(pot);
Serial.print("value =");
Serial.print(val);

analogWrite(LED, brightness = val);

}