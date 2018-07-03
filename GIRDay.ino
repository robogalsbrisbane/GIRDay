#include "Lib.h"

// Create a button on pin 7
Button button(7);

LED led(2);

void setup() {
    led.setup();
}

void loop() {
    // put your main code here, to run repeatedly

    // Check if the button is pressed
    if (button.isPressed()) {
        led.turnOn();
    } else {
        led.turnOff();
    }
}
