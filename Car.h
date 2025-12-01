#pragma once
#include <string>

class Car
{
public:
	Car(const std::string& name) : _car_name(name), _car_is_repaired(false) {}
	virtual ~Car() {}

	void repair()
	{
		_car_is_repaired = true;
	}
protected:
	std::string _car_name;
	bool _car_is_repaired;
};

