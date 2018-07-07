#include "Lib.h"

/**
 * Define the modules here, specify the pins
 */

// Create a button on pin 7
Button button(7);
// Create a button on pin 2
LED led(13);
// Create the piezo on pin 6
Piezo piezo(6);

void setup() {
    // Setup the modules
    led.setup();
    button.setup();
    piezo.setup();

    piezo.playPiratesOfTheCarribean();
}

void loop() {
    // put your main code here, to run repeatedly

    // Check if the button is pressed
    if (button.isPressed()) {
        led.turnOn();
        piezo.play(NOTE_C8, 500);

        led.turnOff();
    } else {
        led.turnOff();
    }
}
