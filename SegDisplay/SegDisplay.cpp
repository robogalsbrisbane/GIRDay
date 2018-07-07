#include "Arduino.h"
#include "SegDisplay.h"

/**
 * This stores the implementation of the libary
 *
 * If you're looking at how to use it, check out SegDisplay.h instead
 */

SegDisplay::SegDisplay(int dataPin, int clockPin, int latchPin) {
    _dataPin = dataPin;
    _clockPin = clockPin;
    _latchPin = latchPin;
}

void SegDisplay::setup() {
    // Set pins to output so you can control the shift register
    pinMode(_dataPin, OUTPUT);
    pinMode(_clockPin, OUTPUT);
    pinMode(_latchPin, OUTPUT);

    digitalWrite(_latchPin, LOW); // Set 7 seg display to off
}

void SegDisplay::writeNumber(int digit) {
    digitalWrite(_latchPin, LOW);
    switch (digit) {
        case 0:
            shiftOut(_dataPin, _clockPin, MSBFIRST, 250);
            break;
        case 1:
            shiftOut(_dataPin, _clockPin, MSBFIRST, 96);
             break;
        case 2:
            shiftOut(_dataPin, _clockPin, MSBFIRST, 220);
            break;
        case 3:
            shiftOut(_dataPin, _clockPin, MSBFIRST, 244);
            break;
        case 4:
            shiftOut(_dataPin, _clockPin, MSBFIRST, 102);
            break;
        case 5:
            shiftOut(_dataPin, _clockPin, MSBFIRST, 182);
            break;
        case 6:
            shiftOut(_dataPin, _clockPin, MSBFIRST, 190);
            break;
        case 7:
            shiftOut(_dataPin, _clockPin, MSBFIRST, 224);
            break;
        case 8:
            shiftOut(_dataPin, _clockPin, MSBFIRST, 254);
            break;
        case 9:
            shiftOut(_dataPin, _clockPin, MSBFIRST, 230);
            break;
        default:    // default displays no number
            shiftOut(_dataPin, _clockPin, MSBFIRST, 1);
    }
    digitalWrite(_latchPin, HIGH);
}

void SegDisplay::turnOff() {
    digitalWrite(_latchPin, LOW);
    shiftOut(_dataPin, _clockPin, MSBFIRST, 1);
    digitalWrite(_latchPin, HIGH);
}
