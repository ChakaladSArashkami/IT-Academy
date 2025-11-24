#pragma once
#include <iostream>
#include <vector>

template<typename T>
class Garage
{
public:
	void add_to_garage(const T& car)
	{
		_cars.push_back(car);
	}
	void display_all()
	{
		if (_cars.size() > 0)
		{
			for (const auto& car : _cars)
				std::cout << car << std::endl;
			std::cout << "-----------" << std::endl;
		}
	}
private:
	std::vector<T> _cars;
};

