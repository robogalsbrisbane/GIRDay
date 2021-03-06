#include "Arduino.h"
#include "LED.h"

/**
 * This stores the implementation of the libary
 *
 * If you're looking at how to use it, check out LED.h instead
 * @author Robogals Brisbane
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

void LED::setBrightness(float value) {
	analogWrite(_pin, value);
}
