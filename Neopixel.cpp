#include "Arduino.h"
#include "Neopixel.h"

// Libraries for the Adafruit Neopixel
#include <Wire.h>
#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

Neopixel::Neopixel()
{
}

void Neopixel::init(uint16_t num_pixels, uint8_t pin)
{
  _strip = Adafruit_NeoPixel(num_pixels, pin, NEO_GRB + NEO_KHZ800);
  _strip.begin();
  _strip.show(); // Initialize all pixels to 'off'
  this->_num_pixels = num_pixels;
}

void Neopixel::setPixelColor(uint16_t n, uint8_t r, uint8_t g, uint8_t b)
{
  _strip.setPixelColor(n, r, g, b);
  _strip.show();
}

void Neopixel::setStripColor(uint8_t r, uint8_t g, uint8_t b)
{
  for (uint16_t i = 0; i < _num_pixels; i++) {
    _strip.setPixelColor(i, r, g, b);
  }
  _strip.show();
}

uint32_t Neopixel::ConvertRGB(uint8_t r, uint8_t g, uint8_t b)
{
  return ((uint32_t)r << 16) | ((uint32_t)g <<  8) | b;
}

void Neopixel::setBrightness(uint8_t brightness)
{
  _strip.setBrightness(brightness);
  _strip.show();
}

void Neopixel::clear()
{
  _strip.clear();
  _strip.show();
}
