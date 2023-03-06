#define FASTLED_ALL_PINS_HARDWARE_SPI       // use hardware SPI instead of bit-banging
#define FASTLED_ESP32_SPI_BUS HSPI          // strip is connected to HSPI bus

#define NUM_LEDS 142        // strip has 144 LEDs per meter

#include <Arduino.h>
#include <SPI.h>
#include <FastLED.h>



CRGB leds[NUM_LEDS];        // reserve memory space for LED data

void setup() {
    FastLED.addLeds<APA102, 13, 14>(leds, NUM_LEDS);  // BGR ordering is typical
}

void loop() {
    for(int dot = 0; dot < NUM_LEDS-2; dot++) {
        leds[dot] = CRGB::Red;
        leds[dot+1] = CRGB::Blue;
        leds[dot+2] = CRGB::Green;
        FastLED.show();
        // clear this led for the next time around the loop
        leds[dot] = CRGB::Black;
        leds[dot+1] = CRGB::Black;
        leds[dot+2] = CRGB::Black;
        delay(10);
    }
    for(int dot = NUM_LEDS-2; dot >= 0; dot--) {
        leds[dot] = CRGB::Green;
        leds[dot+1] = CRGB::Blue;
        leds[dot+2] = CRGB::Red;
        FastLED.show();
        // clear this led for the next time around the loop
        leds[dot] = CRGB::Black;
        leds[dot+1] = CRGB::Black;
        leds[dot+2] = CRGB::Black;
        delay(10);
    }
}