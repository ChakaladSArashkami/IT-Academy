#pragma once
#include <iostream>
#include <vector>
#include "Garage.h"

template <typename T>
class ServiceStation
{
public:
	ServiceStation(const size_t& limit) :_serv_limit(limit) {}

	void add_car(const T& car)
	{
		if (_serv_limit > _service_cars.size())
		{
			_service_cars.push_back(car);
		}
		else
		{
			std::cout << "Too much cars in service!" << std::endl;
			std::cout << "-----------" << std::endl;
		}
	}
	void repair_all()
	{
		if (_service_cars.size() > 0)
		{
			for (auto& car : _service_cars)
			{
				car.repair();
				_garage_cars.add_to_garage(car);
			}
			_service_cars.clear();
		}
		else
		{
			std::cout << "Zero cars to repair!" << std::endl;
			std::cout << "-----------" << std::endl;
		}
	}
	void display_service()
	{
		if (_service_cars.size() > 0)
		{
			for (const auto& car : _service_cars)
				std::cout << car << std::endl;
			std::cout << "-----------" << std::endl;
		}
		else
		{
			std::cout << "Zero cars in service!" << std::endl;
			std::cout << "-----------" << std::endl;
		}
	}
	void display_garage()
	{
		_garage_cars.display_all();
	}
private:
	std::vector<T> _service_cars;
	Garage<T> _garage_cars;
	size_t _serv_limit;
};