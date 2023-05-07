//
// Created by steve on 3/6/23.
//

// header files for strip control
#include "infinity-loop/infinity-loop.h"    // strip control

// constructor
InfinityLoop::InfinityLoop() {
    // get handle on the leds
    CFastLED::addLeds<CHIPSET, HSPI_MOSI, HSPI_CLK>(this->leds, NUM_LEDS);
    // turns of all leds (black)
    for (auto &led: this->leds) {
        led = CRGB::Black;
    }
}

// destructor
InfinityLoop::~InfinityLoop() {
    // turns of all leds (black)
    for (auto &led: this->leds) {
        led = CRGB::Black;
    }
}

// apply an effect to the strip
void InfinityLoop::apply(void (*effect)(CRGB *)) {
    effect(leds);
}

// effects that apply a color
void InfinityLoop::apply(void (*effect)(CRGB *, CRGB)) {

}

// effects that manipulate a random color (blinking, breathing, ...)
void InfinityLoop::apply(void (*effect)(CRGB *, float)) {

}

// effects that manipulate a specific color (blinking, breathing, ...)
void InfinityLoop::apply(void (*effect)(CRGB *, CRGB, float)) {

}
