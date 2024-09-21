#include <Arduino.h>
#include <TFT_eSPI.h>
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();

// put function declarations here:

//HardwareSerial Serial1(PA10, PA9);
#define BACKLIGHT PB1
#define RESET_DISPLAY PB3
void setup() {
  // put your setup code here, to run once:
  pinMode(BACKLIGHT, OUTPUT);
  pinMode(RESET_DISPLAY, OUTPUT);

  tft.begin();
  tft.setRotation(0);
}

void loop() {
digitalWrite(BACKLIGHT, HIGH);
digitalWrite(RESET_DISPLAY,  HIGH);
tft.fillScreen(TFT_WHITE);
}

