/**
 * A library for making sounds with a Buzzer buzzer
 *
 * @author Roy Portas
 */
#ifndef Buzzer_h
#define Buzzer_h

#include "Pitches.h"
#include "Arduino.h"

class Buzzer {
    public:

        /**
         * Creates a Buzzer
         *
         * Specify the number of the pin to use
         * Note: The pin must have a '~' next to it on the Arduino
         */
        Buzzer(int pin);

        /**
         * Sets up the Piezo buzzer
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
