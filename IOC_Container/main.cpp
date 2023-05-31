#include "IOC_Container.h"
#include"Processor.h"
#include"Computer.h"
#include"AMDProcessor.h"
#include"IntelProcessor.h"
#include <iostream>


using namespace std;
IOCContainer injector;

// инициализируем ненулевым числом
int IOCContainer::s_nextTypeId = 115094801;

int main()
{
    //------Example #1----------------

    IOCContainer injector;

    // Регистрируем IProcessor с классом IntelProcessor, т.о. каждый раз запрашивая IProcessor получаем объект IntelProcessor.
    injector.RegisterInstance<IProcessor, IntelProcessor>();
    auto intel = injector.GetObject<IProcessor>();
    intel->setProcessor("intel 3",x64,5.0);

    Computer computerWithIntel(intel.get());

    cout << computerWithIntel.getProcessor() << endl;


    //------Example #2----------------

    injector.RegisterInstance<IProcessor, AMDProcessor>();
    auto amd = injector.GetObject<IProcessor>();
    amd->setProcessor("ryzen 3",x86,3.8);

    Computer computerWithAMD(amd.get());

    cout << computerWithAMD.getProcessor() << endl;

    return 0;
}
