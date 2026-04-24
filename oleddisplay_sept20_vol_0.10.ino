#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

#define i2_Address 0x3c
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SH1106G display = Adafruit_SH1106G(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int counter = 0;

void setup() {
  Serial.begin(9600);
  delay(250);
  display.begin(i2_Address, true);

  display.display();
  delay(1000);

  display.clearDisplay();
  display.setTextColor(SH110X_WHITE);
  display.setCursor(20, 25);

  display.println("Hello World!");
  display.println("This is oled display.");
  display.display();
  delay(2000);

}

void loop() {

  display.clearDisplay();
  display.setCursor(0, 0);
  display.setTextSize(2);

  display.print("Count: ");
  display.println(counter);

  display.display();

  counter++;
  delay(1000);
}






