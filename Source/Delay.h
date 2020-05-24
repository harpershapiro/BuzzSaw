/*
  ==============================================================================

    Delay.h
    Created: 23 May 2020 5:47:22pm
    Author:  harpe

  ==============================================================================
*/

#pragma once
#include "JuceHeader.h"

//used to create stereo effect 

class Delay {
public:
    Delay();
    ~Delay();

    //params (potentially slider controlled)
    float delaySec;
    float feedback;
    float dryLevel;
    float wetLevel;



private:

    AudioSampleBuffer delayBuffer;
    int delayBufferLength;
    int delayReadPosition, delayWritePosition;




};
