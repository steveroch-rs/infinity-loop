//
// Created by steve on 5/7/23.
//

#ifndef INFINITY_LOOP_EFFECTS_H
#define INFINITY_LOOP_EFFECTS_H

// show a certain color on all LEDs
void showColor(CHSV color);

// blink a certain color
void blinkColor(CHSV color, float freq);

// breathe a certain color in and out
void breatheColor(CHSV color, float time);

// show a random color on all LEDs
void showRandom();

// blink a random color
void blinkRandom(float freq);

// brathe a random color in and out
void breatheRandom(float time);

// fade the entire loop through RGB
void fadeRGB(float time);

// let a certain color run through the loop
void colorSpiral(float time);

// let the RGB color-space run through the loop
void rgbSpiral(float time);

// show the entire loop as white
void white();

// show a spiral of white light on the loop
void whiteSpiral(float time);

// show a fire animation
void fire();

// show a christmassy animation with red, green and white color
void christmas();

#endif //INFINITY_LOOP_EFFECTS_H
