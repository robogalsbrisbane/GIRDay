#include "Arduino.h"
#include "Button.h"

/**
 * This stores the implementation of the libary
 *
 * If your looking at how to use it, check out Button.h instead
 */

Button::Button(int pin) {
    // Store pin as a local variable
    _pin = pin;
}

void Button::setup() {
    // Lets set up the pins
    pinMode(_pin, INPUT);
}

bool Button::isPressed() {
    // Check if the pin is high
    return digitalRead(_pin) == HIGH;
}
