/**
 * This file imports all the other modules
 *
 * Developer note: Normally we don't include c files,
 * however the Arduino IDE won't link without it
 *
 * @author Roy Portas
 */

// Button
#include "Button/Button.h"
#include "Button/Button.cpp"

// LED
#include "LED/LED.h"
#include "LED/LED.cpp"

// 7 Segment Display
#include "SegDisplay/segDisplay.h"
#include "SegDisplay/segDisplay.cpp"

// Piezo
#include "Piezo/Piezo.h"
#include "Piezo/Piezo.cpp"
#include "Piezo/Pitches.h"
