#define FASTLED_ALL_PINS_HARDWARE_SPI       // use hardware SPI instead of bit-banging
#define FASTLED_ESP32_SPI_BUS HSPI          // strip is connected to HSPI bus

#define NUM_LEDS 142        // amount of LEDs on the entire strip
#define HSPI_CLK 14         // GPIO14 is hardware SPI clock for HSPI bus
#define HSPI_MOSI 13        // GPIO13 is hardware SPI MOSI for HSPI bus
#define RGB_ORDER BGR       // LEDs on strip might have different sub-pixel ordering

#include <Arduino.h>
#include <SPI.h>
#include <FastLED.h>

#include "infinity-loop/infinity-loop.h"              // header for strip control

CRGB leds[NUM_LEDS];                // reserve memory space for LED data

void setup() {
    // setup code

    // create
    // BGR ordering is typical
    FastLED.addLeds<APA102, HSPI_MOSI, HSPI_CLK>(leds, NUM_LEDS);
}

void loop() {
    // main program infinity-loop
}