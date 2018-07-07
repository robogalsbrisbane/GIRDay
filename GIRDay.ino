#include "Lib.h"

// Create a button on pin 7
//Button button(7);
//
//LED led(2);
SegDisplay segDisplay(11, 12, 8);

void setup() {
//    led.setup();
  //set pins to output so you can control the shift register
  segDisplay.setup();
}

void loop() {
    // put your main code here, to run repeatedly

    // Check if the button is pressed
//    if (button.isPressed()) {
//        led.turnOn();
//    } else {
//        led.turnOff();
//    }
    for(int i = 0; i < 10; i++) {
      segDisplay.writeNumber(i);
      delay(500);
      segDisplay.turnOff();
      delay(500);
    }

}
