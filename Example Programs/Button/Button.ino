#include <RGBris_Arduino_Lib.h>

// Create button
Button button(7);

void setup() {
  // put your setup code here, to run once:
  button.setup();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (button.isPressed()) {
    Serial.println("Pressed");
  }
  
  delay(50);
}
