#pragma once
#include "Device.h"

class Player :
    public Device
{
public:
    Player(int batteryLife, int totalTracks);

private:
    int _totalTracks;
    void  ShowSpec();
};

