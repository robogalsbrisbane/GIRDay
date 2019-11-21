#include "Arduino.h"
#include "Ultrasonic.h"

/**
 * This stores the implementation of the libary
 *
 * If your looking at how to use it, check out newUltrasonic.h instead.
 *
 * @author Robogals Brisbane (nah georgia)
 */

Ultrasonic::Ultrasonic(int trigpin, int echopin)
{
    // Store pin as a local variable
    _trigpin = trigpin;
    _echopin = echopin;
}

void Ultrasonic::setup()
{
    // Lets set up the pins
    pinMode(_trigpin, OUTPUT);
    pinMode(_echopin, INPUT);
}

float Ultrasonic::distance()
{
    // // Check if the pin is high
    // return digitalRead(_pin) == HIGH;

    digitalWrite(_trigpin, LOW);
    delay(5);
    digitalWrite(_trigpin, HIGH);
    delay(10);
    digitalWrite(_trigpin, LOW);

    long duration, cm,

        duration = pulseIn(_echopin, HIGH);
    cm = (duration / 2) / 29.1;

    return cm;
}