void setup() {
  
  // Start Serial communication
  Serial.begin(9600);

}

void loop() {
  // Send what you want to print to the Serial port using Serial.print()
  // You can see this in the serial monitor window
  Serial.print("Hello World\n");

}
