#pragma once
#include "Device.h"
#include "Appliances.h"

class RobotVacuumCleaner :
    public Device, Appliances
{
public:
    RobotVacuumCleaner(int batteryLife, int weight, double containerCapacity);

private:
    double _containerCapacity;
    void ShowSpec();
};

