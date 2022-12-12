#include "Fridge.h"
#include <iostream>

Fridge::Fridge(int weight, bool freezer): Appliances(weight), _freezer(freezer)
{
}

void Fridge::ShowSpec()
{
	std::cout << "Weight: " << _weight << std::endl;
	std::cout << "Has freezer: ";
	if (_freezer)
		std::cout << "yes";
	else
		std::cout << "no";
	std::cout << std::endl;
}
