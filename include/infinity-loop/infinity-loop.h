//
// Created by steve on 3/6/23.
// This is the header file for everything the hardware on the infinity-loop
// does in terms of control and effects.
//

#ifndef INFINITY_LOOP_INFINITY_LOOP_H
#define INFINITY_LOOP_INFINITY_LOOP_H

#define FASTLED_ALL_PINS_HARDWARE_SPI       // use hardware SPI instead of bit-banging
#define FASTLED_ESP32_SPI_BUS HSPI          // strip is connected to HSPI bus of ESP32

#define NUM_LEDS 142        // amount of LEDs on the entire strip
#define HSPI_CLK 14         // GPIO14 is hardware SPI clock for HSPI bus
#define HSPI_MOSI 13        // GPIO13 is hardware SPI MOSI for HSPI bus
#define CHIPSET APA102      // the LED chipset used (is HD107 which is identical to APA102)
#define RGB_ORDER BGR       // HD107 (improved from APA102) uses BGR ordering of sub-pixel LEDs

#include <FastLED.h>

class InfinityLoop {
private:
    // container to hold color data for each pixel in the strip
    CRGB leds[NUM_LEDS]{};
public:
    // constrcutor
    InfinityLoop();

    // destructor
    ~InfinityLoop();

    // effects without parameters
    void apply(void (*effect)());

    // effects that apply a color
    void apply(void (*effect)(CRGB *, CRGB));

    // effects that manipulate a random color (blinking, breathing, ...)
    void apply(void (*effect)(CRGB *, float));

    // effects that manipulate a specific color (blinking, breathing, ...)
    void apply(void (*effect)(CRGB *, CRGB, float));
};

#endif //INFINITY_LOOP_INFINITY_LOOP_H
