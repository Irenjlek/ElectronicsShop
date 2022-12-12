#include "Smartphone.h"

Smartphone::Smartphone(int memory, int batteryLife): _memory(memory), Device(batteryLife)
{
}

void Smartphone::ShowSpec()
{
	std::cout << "Battery Life: " << _batteryLife << std::endl;
	std::cout << "Memory Size: " << _memory << std::endl;
}
