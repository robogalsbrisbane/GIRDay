/**
 * A library for making sounds with a Piezo buzzer
 *
 * @author Roy Portas
 */
#ifndef Piezo_h
#define Piezo_h

#include "Pitches.h"
#include "Arduino.h"

class Piezo {
    public:

        /**
         * Creates a Piezo
         *
         * Specify the number of the pin to use
         * Note: The pin must have a '~' next to it on the Arduino
         */
        Piezo(int pin);

        /**
         * Sets up the piezo buzzer
         *
         * Run within your setup function
         */
        void setup();

        /**
         * Plays a sound at the given frequency in hertz
         * for the specified duration in milliseconds
         */
        void play(int frequency, int duration);

        /**
         * Plays the theme song for pirates of the carribean
         */
        void playPiratesOfTheCarribean();

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
