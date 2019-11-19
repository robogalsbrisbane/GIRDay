/**
 * A basic library to make using Buttons easier
 *
 * @author Roy Portas
 */
#ifndef Button_h
#define Button_h

#include "Arduino.h"

class Button {
    public:

        /**
         * Creates a button
         *
         * Specify the number of the pin to use
         */
        Button(int pin);

        /**
         * Sets up the button
         *
         * Run within your setup function
         */
        void setup();

        /**
         * Returns `true` if the button is pressed
         * otherwise `false`
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
};

#endif
