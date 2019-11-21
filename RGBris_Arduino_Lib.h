/**
 * This file imports all the other modules
 *
 * Developer note: Normally we don't include c files,
 * however the Arduino IDE won't link without it
 *
 * @author Roy Portas
 */

// Button
#include "Libraries/Button/Button.h"
#include "Libraries/Button/Button.cpp"

// LEDs
#include "Libraries/LED/LED.h"
#include "Libraries/LED/LED.cpp"

// Potentiometer
#include "Libraries/Potentiometer/pot.h"
#include "Libraries/Potentiometer/pot.cpp"

// Ultrasonic
#include "Libraries/Ultrasonic/Ultrasonic.h"
#include "Libraries/Ultrasonic/Ultrasonic.cpp"

// 7 Segment Display
#include "Libraries/SegDisplay/SegDisplay.h"
#include "Libraries/SegDisplay/SegDisplay.cpp"

// Piezo Buzzer
#include "Libraries/Buzzer/Buzzer.h"
#include "Libraries/Buzzer/Buzzer.cpp"
#include "Libraries/Buzzer/Pitches.h"
