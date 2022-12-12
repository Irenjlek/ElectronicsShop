#include "RobotVacuumCleaner.h"
#include <iostream>

RobotVacuumCleaner::RobotVacuumCleaner(int batteryLife, int weight, double containerCapacity): Device(batteryLife), Appliances(weight), _containerCapacity(containerCapacity)
{
}

void RobotVacuumCleaner::ShowSpec()
{
	std::cout << "Weight: " << _weight << std::endl;
	std::cout << "Battery Life: " << _batteryLife << std::endl;
	std::cout << "Container Capacity: " << _containerCapacity << std::endl;
}
