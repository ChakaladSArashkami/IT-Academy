#pragma once
#include <iostream>
#include "Car.h"

class CargoCar :
    public Car
{
public:
    CargoCar(std::string name) : Car(name) {}

    friend std::ostream& operator<<(std::ostream& os, const CargoCar& car)
    {
        os << "Cargo car name: " << car._car_name << "\n" <<
              "Car is repaierd: " << (car._car_is_repaired ? "Yes" : "No") << "\n";
        return os;
    }
};

