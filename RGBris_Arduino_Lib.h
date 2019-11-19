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

// LED
#include "Libraries/LED/LED.h"
#include "Libraries/LED/LED.cpp"

// 7 Segment Display
#include "Libraries/SegDisplay/segDisplay.h"
#include "Libraries/SegDisplay/segDisplay.cpp"

// Piezo Buzzer
#include "Libraries/Buzzer/Buzzer.h"
#include "Libraries/Buzzer/Buzzer.cpp"
#include "Libraries/Buzzer/Pitches.h"
