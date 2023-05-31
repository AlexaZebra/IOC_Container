#ifndef PROCESSOR_H
#define PROCESSOR_H
#include <iostream>


enum ProcessorType
{ x86=86,
  x64=64
};

class IProcessor

{
public:
     IProcessor() = default;

     virtual std::string getProcessorInfo() = 0;

     virtual void setProcessor(std::string version, ProcessorType type, double speed) = 0;

     virtual ~IProcessor() = default;

 };
#endif // PROCESSOR_H
