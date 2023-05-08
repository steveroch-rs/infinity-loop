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
void InfinityLoop::apply(void (*effect)(CRGB *target)) {

}

// effects that apply a color
void InfinityLoop::apply(void (*effect)(CRGB *target, CRGB color)) {
    effect(this->leds, CRGB::Black);
}

// effects that manipulate a random color (blinking, breathing, ...)
void InfinityLoop::apply(void (*effect)(CRGB *target, float param)) {
    effect(this->leds, 2.0);
}

// effects that manipulate a specific color (blinking, breathing, ...)
void InfinityLoop::apply(void (*effect)(CRGB *target, CRGB color, float param)) {

}

CRGB *InfinityLoop::getLeds() {
    return this->leds;
}

void InfinityLoop::applytest(void (*func)(int, int), int p0, int p1) {
    func(p0, p1);
}
