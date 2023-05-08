/* This is the main file for my project infinity-loop.
 * It uses FastLED to control a strip of addressable RGB LEDs using SPI.
 *
 * The microcontroller in use is an Espressif ESP32 with dual Xtensa L6 cores.
 *
 * While the default configuration runs the entire networking stack on core0
 * and the loop() function on core1 this projects keeps using core0 for the network-stack as well as
 * the webserver and uses pinned tasks on core1 for everything else (like the lighting control).
 *
 * The various effects of the strip can be changed via push-buttons on the back of the fixture,
 * or via a web-app that is served from the ESP32 using ESPAsyncWebserver.
 * To achieve easier readability and reducing clutter the HTML, CSS and JS are served from files
 * located on an SPI flash filesystem using SPIFFS.
 *
 * LIBRARY DOC:
 * https://github.com/FastLED/FastLED                                                   (FastLED)
 * https://github.com/me-no-dev/ESPAsyncWebServer                                       (ESP Async WebServer)
 *
 * TUTORIALS:
 * https://www.tutorialspoint.com/esp32_for_iot/esp32_for_iot_spiffs_storage.htm        (SPIFFS)
 *
 */

// standard libraries
#include <Arduino.h>
#include <SPI.h>
#include <SPIFFS.h>
#include <WiFi.h>

// project specific lighting libraries
#include <FastLED.h>                                // easy-to-use control lib for addressable LEDs
#include "infinity-loop/infinity-loop.h"            // header for strip control
#include "effects.h"                                // custom defined effects for the strip

// generate new global instance of InfinityLoop
auto infinityloop = new InfinityLoop();

void setup() {
    // setup code

}

void loop() {
    // main program infinity-loop
    int a = 24;
    int b = 42;
    infinityloop->applytest(functoapply, a, b);
}
