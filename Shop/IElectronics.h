#pragma once

class IElectronics
{
public:
	IElectronics() = default;
	virtual ~IElectronics() = default;
	virtual void ShowSpec() = 0;
};

