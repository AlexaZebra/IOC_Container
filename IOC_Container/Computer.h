#ifndef COMPUTER_H
#define COMPUTER_H
#include<iostream>
#include"IntelProcessor.h"

enum ProcessorType
{ x86,
   x64
};

class Computer
{
   public:
        IntelProcessor* GetProcessor(double speed, ProcessorType type, string version)
    {
       return new IntelProcessor(speed, type, version);
    }
};

#endif // COMPUTER_H
