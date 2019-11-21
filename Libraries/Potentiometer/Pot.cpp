#include "Arduino.h"
#include "Pot.h"

/**
 * This stores the implementation of the libary
 *
 * If you're looking at how to use it, check out Pot.h instead
 * @author Robogals Brisbane
 */
Pot::Pot(int pin) {
    // Store pin as a local variable
    _pin = pin;

}

void Pot::setup() {
    // Lets set up the pins
    pinMode(_pin, INPUT);
}

float Pot::getPitch() {
	// Converts potentiometer value into a pitch within frequency range 2000 - 5000
	return map(readValue(), 0, 1023, 2000, 5000);
};

float Pot::getBrightness() {
	// Converts analog read to an analog write value
	return (255.0/1023.0) * readValue();
};

float Pot::readValue() {
	// read voltage from potentiometer
	return analogRead(_pin); 

}