#include "RGBris_Arduino_Lib.h"

/**
 * Define the modules here, specify the pins
 */

// Connect the LEDS
LED whiteLED(13);     // white LED on pin 13
LED blueLED(12);      // blue LED on pin 12
LED redLED(11);       // red LED on pin 11
LED greenLED(10);     // green LED on pin 10
LED yellowLED(9);     // yellow LED on pin 9

void setup() {
    // Setup the modules
    whiteLED.setup();
    blueLED.setup();
    redLED.setup();
    greenLED.setup();
    yellowLED.setup();

}

void loop() {
    whiteLED.turnOn();
    blueLED.turnOff();
    delay(1000);
    whiteLED.turnOff();
    blueLED.turnOn();
    delay(1000);

}
