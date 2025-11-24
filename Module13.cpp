#include <iostream>
#include "Car.h"
#include "PassengerCar.h"
#include "CargoCar.h"
#include "ServiceStation.h"

int main()
{
    const int size{ 5 };

    ServiceStation<PassengerCar> sto_passanger(size);
   
    for (int i = 0;i < size + 1;++i)
        sto_passanger.add_car(PassengerCar("passenger_car_" + std::to_string(i + 1)));

    sto_passanger.display_service();
    
    sto_passanger.repair_all();

    sto_passanger.display_service();

    sto_passanger.display_garage();

    ServiceStation<CargoCar> sto_cargo(size);

    for (int i = 0;i < size + 1;++i)
        sto_cargo.add_car(CargoCar("cargo_car_" + std::to_string(i + 1)));

    sto_cargo.display_service();

    sto_cargo.repair_all();

    sto_cargo.display_service();

    sto_cargo.display_garage();
}