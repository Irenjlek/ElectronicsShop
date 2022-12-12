#include <iostream>
#include "IElectronics.h"
#include "Fridge.h"
#include "Player.h"
#include "RobotVacuumCleaner.h"
#include "Smartphone.h"
#include "Stove.h"

int main() {
	setlocale(LC_ALL, "");

	IElectronics* electronics[5];

    electronics[0] = new Fridge(60, true);
    electronics[1] = new Player(200, 1000);
    electronics[2] = new RobotVacuumCleaner(3, 100, 700);
    electronics[3] = new Smartphone(256, 150);
    electronics[4] = new Stove(15, false);

    bool open = true;
    while (open)
    {
        std::cout << "¬ыберите продукт : 1 - холодильник, 2 - плеер, 3 - робот-пылесос, 4 - смартфон, 5 - духовка, 0 чтобы выйти" << std::endl;
        int choice;
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            electronics[0]->ShowSpec();
            break;

        case 2:
            electronics[1]->ShowSpec();
            break;

        case 3:
            electronics[2]->ShowSpec();
            break;

        case 4:
            electronics[3]->ShowSpec();
            break;

        case 5:
            electronics[4]->ShowSpec();
            break;

        case 0:
            open = false;
            break;

        default:
            std::cout << "¬ыберите продукт от 1 до 5 или 0, чтобы выйти" << std::endl;
            break;
        }
    }

    delete electronics[0];
    delete electronics[1];
    delete electronics[2];
    delete electronics[3];
    delete electronics[4];

	return 0;
}