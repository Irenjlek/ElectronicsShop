#pragma once
#include "Device.h"
#include <iostream>

class Smartphone :
    public Device
{
public:
    Smartphone(int memory, int batteryLife);

private:
    int _memory;
    void ShowSpec();
};

