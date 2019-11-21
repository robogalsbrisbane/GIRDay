/**
 * A basic library to make using potentiometers easier
 *
 * @author Robogals Brisbane
 */
#ifndef Pot_h
#define Pot_h

#include "Arduino.h"

class Pot {
    public:

        /**
         * Creates an Pot
         *
         * Specify the number of the pin to use
         */
        Pot(int pin);

        /**
         * Sets up the Pot
         *
         * Run within your setup() function
         */
        void setup();

		/*
		 * Convert potentiometer value into a
		 * led usuable value
		 */
		float getBrightness();

		/*
		 * Convert potentiometer value into a
		 * frequency based value
		 */
		float getPitch();

    /**
     * These are used within the library
     *
     * Reading further isn't required,
     * unless you're interested
     */
    private:
        int _pin;

		/**
		 * Returns a normalized analog write value based on the analog read of the potentiometer
		 */
		float readValue();
};

#endif
