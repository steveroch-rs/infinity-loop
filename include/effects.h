//
// Created by steve on 5/7/23.
//

#ifndef INFINITY_LOOP_EFFECTS_H
#define INFINITY_LOOP_EFFECTS_H

#include <FastLED.h>

// show a certain color on all LEDs
void showColor(CRGB *strip, CRGB color);

// blink a certain color
void blinkColor(CRGB *strip, CRGB color, float freq);

// breathe a certain color in and out
void breatheColor(CRGB *strip, CRGB color, float time);

// show a random color on all LEDs
void showRandom(CRGB *strip);

// blink a random color
void blinkRandom(CRGB *strip, float freq);

// brathe a random color in and out
void breatheRandom(CRGB *strip, float time);

// fade the entire loop through RGB
void fadeRGB(CRGB *strip, float time);

// let a certain color run through the loop
void colorSpiral(CRGB *strip, float time);

// let the RGB color-space run through the loop
void rgbSpiral(CRGB *strip, float time);

// show the entire loop as white
void white(CRGB *strip);

// show a spiral of white light on the loop
void whiteSpiral(CRGB *strip, float time);

// show a fire animation
void fire(CRGB *strip);

/**
 * show a christmassy animation with red, green and white color
 * @param strip: reference to the LEDs
 */
void christmas(CRGB *strip);


void functoapply(int p0, int p1) {
    Serial.println(p0);
    Serial.println(p1);
}
#endif //INFINITY_LOOP_EFFECTS_H
