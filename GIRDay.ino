#include "RGBris_Arduino_Lib.h"

/**
 * Define the modules here, specify the pins
 */

// Connect a button on pin 7
Button button(7);
// Connect a led on pin 13
LED led(13);
// Connect the piezo on pin 6
Piezo piezo(6);
// Connect the seg display on pins 11, 12, 8
SegDisplay segDisplay(11, 12, 8);

void setup() {
    // Setup the modules
    led.setup();
    button.setup();
    piezo.setup();
    segDisplay.setup();

    piezo.playPiratesOfTheCarribean();
}

void loop() {
    // put your main code here, to run repeatedly

    // Check if the button is pressed
    if (button.isPressed()) {
        led.turnOn();
        piezo.play(NOTE_C8, 500);

        for(int i = 0; i < 10; i++) {
            segDisplay.writeNumber(i);
            delay(100);
        }

        segDisplay.turnOff();
        led.turnOff();
    } else {
        led.turnOff();
    }

}
