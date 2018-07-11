#include <Lib.h>

LED led1(8);
LED led2(9);
LED led3(10);
LED led4(11);

LED leds[] = {led1, led2, led3, led4};

long randomLed;
long randomDuration;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  randomSeed(analogRead(0));
  led1.setup();
  led2.setup();
  led3.setup();
  led4.setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  randomLed = random(0, 3); 
  randomDuration = random(0, 2000);
  
  Serial.println(randomLed);
  Serial.println(randomDuration); 

  leds[randomLed].turnOn();
  delay(randomDuration);
  leds[randomLed].turnOff();
  randomDuration = random(0, 2000);
  delay(randomDuration);
}
