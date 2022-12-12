#include "Stove.h"
#include <iostream>

Stove::Stove(int weight, bool grill): Appliances(weight), _grill(grill)
{
}

void Stove::ShowSpec()
{
	std::cout << "Weight: " << _weight << std::endl;
	std::cout << "Has grill: ";
	if (_grill)
		std::cout << "yes";
	else
		std::cout << "no";
	std::cout << std::endl;
}
