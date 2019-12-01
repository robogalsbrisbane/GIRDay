#include "Arduino.h"
#include "Button.h"

/**
 * This stores the implementation of the libary
 *
 * If your looking at how to use it, check out Button.h instead
 */

Button::Button(int pin, int pullup = HIGH) {
    // In C++, the assignment above is a sort of "default" value
    
    // Store pin as a local variable
    _pin = pin;
    _pullupEnabled = pullup;
}

void Button::setup() {
    // Lets set up the pins
    pinMode(_pin, _pullupEnabled == HIGH ? INPUT_PULLUP : INPUT);
    
    /* A little C-type language trick for lazy people
     * 
     * pinMode(_pin, pullup == HIGH ? INPUT_PULLUP : INPUT);
     *
     * Is equivalent to
     *
     * if (_pullupEnabled == HIGH) {
     *     pinMode(_pin, INPUT_PULLUP);
     * }
     * else {
     *     pinMode(_pin, INPUT);
     * }
     *
     * This is called a ternary operation.
     * It makes code compact but can make it harder to read or expand
     */
}

bool Button::isPressed() {
    // Check if the pin is high
    return digitalRead(_pin) != _pullupEnabled;
}
