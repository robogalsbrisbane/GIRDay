#include "Arduino.h"
#include "LED.h"

/**
 * This stores the implementation of the libary
 *
 * If your looking at how to use it, check out LED.h instead
 */
LED::LED(int pin) {
    // Store pin as a local variable
    _pin = pin;
}

void LED::setup() {
    // Lets set up the pins
    pinMode(_pin, OUTPUT);

    // Turn the LED off
    digitalWrite(_pin, LOW);
}

void LED::turnOn() {
    digitalWrite(_pin, HIGH);
}

void LED::turnOff() {
    digitalWrite(_pin, LOW);
}
