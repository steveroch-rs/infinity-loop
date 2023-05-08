//
// Created by steve on 5/7/23.
//

#include "effects.h"
#include "infinity-loop/infinity-loop.h"


void showColor(CRGB *strip, CRGB color) {

}

void blinkColor(CRGB *strip, CRGB color, float freq) {

}

void breatheColor(CRGB *strip, CRGB color, float time) {

}

void showRandom(CRGB *strip) {
    for (int led = 0; led < NUM_LEDS; ++led) {
        strip[led] = CRGB::Red;
    }
}

void blinkRandom(CRGB *strip, float freq) {

}

void breatheRandom(CRGB *strip, float time) {

}

void fadeRGB(CRGB *strip, float time) {

}

void colorSpiral(CRGB *strip, float time) {

}

void rgbSpiral(CRGB *strip, float time) {

}

void white(CRGB *strip) {

}

void whiteSpiral(CRGB *strip, float time) {

}

void fire(CRGB *strip) {

}

void christmas(CRGB *strip) {

}
