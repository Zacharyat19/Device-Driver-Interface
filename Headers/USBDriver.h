#include "DeviceDriver.h"

class USBDriver : public DeviceDriver 
{
    USBDriver()                {}
    ~USBDriver()               {}
    void readData()   override {}
    void writeData()  override {}
    void shutdown()   override {}
};