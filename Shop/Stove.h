#pragma once
#include "Appliances.h"

class Stove :
    public Appliances
{
public:
    Stove(int weight, bool grill);

private:
    bool _grill;
    void ShowSpec();
};

