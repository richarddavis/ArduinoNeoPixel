/*
Neopixel.h - A wrapper library desgned to make programming the Adafruit
Neopixel strip easier for kids.
Created by Richard Davis in the Fall of 2015.
*/

#ifndef Neopixel_h
#define Neopixel_h

#include "Arduino.h"
#include <Wire.h>

// Include libraries for the Adafruit Neopixel
#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

class Neopixel
{
 public:

  Neopixel();
  void init(uint16_t num_pixels = 15, uint8_t pin = 6);
  void setPixelColor(uint16_t n, uint8_t r, uint8_t g, uint8_t b);
  void setStripColor(uint8_t r, uint8_t g, uint8_t b);
  uint32_t ConvertRGB(uint8_t r, uint8_t g, uint8_t b);
  void setBrightness(uint8_t);
  void clear();

 private:
  Adafruit_NeoPixel _strip = Adafruit_NeoPixel(15);
  uint16_t _num_pixels;
};

#endif
