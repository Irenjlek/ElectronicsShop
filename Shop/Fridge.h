#pragma once
#include "Appliances.h"

class Fridge :
    public Appliances
{
public:
    Fridge(int weight, bool freezer);

private:
    bool _freezer;
    void ShowSpec();
};

