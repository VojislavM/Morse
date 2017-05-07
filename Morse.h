/*
  Morse.h - Library for flashing Morse code.
  Created by Vojislav Milivojevic
  Released into the public domain.
*/

#ifndef Morse_h
#define Morse_h

#include "Morse.h"

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};

#endif

