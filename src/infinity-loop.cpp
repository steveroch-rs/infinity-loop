//
// Created by steve on 3/6/23.
//

// header files for strip control
#include "infinity-loop/infinity-loop.h"    // strip control
#include "effects/demo.h"

// constructor
InfinityLoop::InfinityLoop() {
    // get handle on the leds
    CFastLED::addLeds<CHIPSET, HSPI_MOSI, HSPI_CLK>(this->leds, NUM_LEDS);
    // turns of all leds (black)
    for (auto & led : this->leds) {
        led = CRGB::Black;
    }
}

// destructor
InfinityLoop::~InfinityLoop() {
    // turns of all leds (black)
    for (auto & led : this->leds) {
        led = CRGB::Black;
    }
}




