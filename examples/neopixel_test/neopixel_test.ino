#include <Adafruit_NeoPixel.h>
#include <avr/power.h>
#include <Wire.h>
#include "Neopixel.h"

Neopixel np;

void setup() {
  np.init();
}

void loop() {
  np.setStripColor(255, 0, 0);
  delay(1000);
  np.setStripColor(0, 255, 0);
  delay(1000);
  np.setStripColor(0, 0, 255);
  
  for (int i=255; i > 0; i--) {
    np.setBrightness(i);
    delay(10);
  }
  np.setBrightness(255);
  
  for (int i=0; i < 15; i++) {
    np.setPixelColor(i, 255, 255, 255);
    delay(100);
  }
  np.clear();
  delay(500);
}
