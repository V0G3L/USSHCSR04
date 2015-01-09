#ifndef USSHCSR04_h
#define USSHCSR04_h

#include <Arduino.h>

class USSHCSR04
{
public:
    // CONSTRUCTORS
    USSHCSR04(unsigned char trigPin, unsigned char echoPin);
    // PUBLIC METHODS
    void init();    // Pinmodes
    
    int measure();
    
private:
    unsigned char _trigPin;
    unsigned char _echoPin;

};

#endif