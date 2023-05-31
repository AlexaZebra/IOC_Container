#ifndef COMPUTER_H
#define COMPUTER_H
#include<iostream>
#include "Processor.h"

using namespace std;


class Computer
{
    IProcessor* processor;
public:
    Computer(IProcessor* p)
    {
        processor = p;
    }

    string getProcessor()
    {
       return processor->getProcessorInfo();
    }


};

#endif // COMPUTER_H
