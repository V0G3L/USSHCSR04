#include "USSHCSR04.h"

// Constructors ////////////////////////////////////////////////////////////////

USSHCSR04::USSHCSR04(unsigned char echoPin, unsigned char trigPin)
{
    //Pin map
    _trigPin = trigPin;
    _echoPin = echoPin;
}

// Public Methods //////////////////////////////////////////////////////////////
void USSHCSR04::init()
{
    // Define pinMode for the pins
    pinMode(_echoPin,OUTPUT);
    pinMode(_trigPin,INPUT);
}

/*
 *
 * measure and return the time in ms that the sound needs to come back
 */
int USSHCSR04::measure()
{
    digitalWrite(_trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(_trigPin, LOW);
    return pulseIn(_echoPin, HIGH);
}
