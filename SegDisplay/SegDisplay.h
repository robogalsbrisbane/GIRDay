/**
 * A basic library for using a 7 Segment Display
 *
 * @author Sophia Hooton
 */
#ifndef SegDisplay_h
#define SegDisplay_h

#include "Arduino.h"

class SegDisplay {
  public:

    /**
    * Creates a connection with the 7 segment display
    *
    * Add which pin is being used for data, clock and latch connections
    * Run before your setup() function
    */
    SegDisplay(int dataPin, int clockPin, int latchPin);

    /**
    * Sets up the 7 segment display
    *
    * Run within your setup() function
    */
    void setup();

    /**
    * Display the number set by digit
    */
    void writeNumber(int digit);

    /**
    * Turns off the 7 segment display so no numbers display
    */
    void turnOff();

  /**
  * These are used within the library
  *
  * Reading further isn't required,
  * unless you're interested
  */
  private:
    int _dataPin;
    int _clockPin;
    int _latchPin;
};

#endif
