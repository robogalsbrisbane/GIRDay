/**
 * A basic library to make using Buttons easier
 *
 * @author Robogals Brisbane
 */
#ifndef Ultrasonic_h
#define Ultrasonic_h

#include "Arduino.h"

class Ultrasonic
{
public:
    /**
         * Creates a button
         *
         * Specify the number of the pin to use
         */
    Ultrasonic(int trigpin, int echopin);

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
    float distance();

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
