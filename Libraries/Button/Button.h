/**
 * A basic library to make using Buttons easier
 *
 * @author Roy Portas
 * Changes made 2019/12/01, B.X.
 */
#ifndef Button_h
#define Button_h

#include "Arduino.h"

class Button {
    public:

        /**
         * Creates a button input to read the state of a button
         * Pullup should be used when the button is used by itself
         * Feel free to read up on how it works but essentially, it adds
         *     a resistor between power and the pin
         *
         * @param[pin] Pin number to be used
         * @param[pullup] State of pullup on input (HIGH/LOW). Default HIGH.
         */
        Button(int pin, int pullup);

        /**
         * Sets up the button
         *
         * Run within your setup function
         */
        void setup();

        /**
         * Returns `true` if the button is pressed
         * otherwise `false`
         *
         * @return true if button pressed, false otherwise
         */
        bool isPressed();

    /**
     * These are used within the library
     *
     * Reading further isn't required,
     * unless your interested
     */
    private:
        int _pin;
        int _pullupEnabled;
};

#endif
