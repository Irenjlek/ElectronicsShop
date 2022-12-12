#include "Device.h"
#include <iostream>

Device::Device(int batteryLife) : _batteryLife(batteryLife)
{
}

void Device::ShowSpec()
{
    std::cout << "Battery Life: " << _batteryLife << std::endl;
}
