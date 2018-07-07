/**
 * A basic library to make using LEDs easier
 *
 * @author Roy Portas
 */
#ifndef LED_h
#define LED_h

#include "Arduino.h"

class LED {
    public:

        /**
         * Creates an LED
         *
         * Specify the number of the pin to use
         * It will work with any of the digital pins (2 to 13)
         */
        LED(int pin);

        /**
         * Sets up the LED
         *
         * Run within your setup() function
         */
        void setup();

        /**
         * Turns the LED on
         */
        void turnOn();

        /**
         * Turns the LED off
         */
        void turnOff();

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
