#include "Lib.h"

// Create a button on pin 7
Button button(7);

int ledPin = 13;

void setup() {
    // put your setup code here, to run once
    pinMode(ledPin, OUTPUT);
}

void loop() {
    // put your main code here, to run repeatedly

    // Check if the button is pressed
    if (button.isPressed()) {
        digitalWrite(ledPin, HIGH);
    } else {
        digitalWrite(ledPin, LOW);
    }
}
