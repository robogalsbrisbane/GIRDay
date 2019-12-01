#include <RGBris_Arduino_Lib.h>

// Create button and lights
Button button(7, LOW); // Don't use pullup - circuit already has resistor in it
LED light(6);

void setup() {
  // put your setup code here, to run once:
  button.setup();
  light.setup();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (button.isPressed()) {
    Serial.println("Pressed");
    light.turnOn();
  } else {
    light.turnOff();
  }
  
  delay(50);
}
