#include "RGBris_Arduino_Lib.h"

/**
 * Define the modules here, specify the pins
 */

// Connect a button on pin 7
Button button(7);
// Connect a led on pin 13
LED whitLED(13);
LED bluLED(12);
// Connect the piezo on pin 6
Buzzer buzzer(6);
// Connect the seg display on pins 11, 12, 8
SegDisplay segDisplay(11, 12, 8);

void setup() {
    // Setup the modules
    whiteLED.setup();
    blueLED.setup();
    button.setup();
    buzzer.setup();
    segDisplay.setup();

    buzzer.playPiratesOfTheCarribean();
}

void loop() {
    // put your main code here, to run repeatedly

    // Check if the button is pressed

    whiteLED.turnOn();
    blueLED.turnOff();
    delay(1000);
    whiteLED.turnOff();
    blueLED.turnOn();
    delay(1000);
    
    /**if (button.isPressed()) {
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
    } **/

}
