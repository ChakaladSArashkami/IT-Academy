#pragma once
#include <iostream>
#include "Car.h"

class PassengerCar :
    public Car
{
public:
    PassengerCar(std::string name) : Car(name) {}

    friend std::ostream& operator<<(std::ostream& os, const PassengerCar& car)
    {
        os << "Passenger car name: " << car._car_name << "\n" <<
              "Car is repaierd: " << (car._car_is_repaired ? "Yes" : "No") << "\n";
        return os;
    }
};

