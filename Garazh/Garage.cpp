#include "Garage.h"

Vehicle::Vehicle() : mark{"unknow"}, mileage{0}{}

Car::Car() : is_active{ false } {}

Bus::Bus() : capacity{0} {}


void Vehicle::info() const
{
	std::cout << "Mark: " << mark << ", mileage" << mileage << std::endl;
}

void Car::info() const
{
	std::cout << "Is active" << is_active << std::endl;
}

void Bus::info() const
{
	std::cout << "Capacity: " << capacity << std::endl;
}

void Garage::park(Vehicle* vehicle)
{
	vehicles.push_back(vehicle);
}


// Снизу приемный гараж

//Garage::~Garage()
//{
//	for (int i = 0; i < vehicles.size(); i++)
//	{
//		delete vehicles.at(i);
//	}
//}

void Garage::printVehicle() const
{
	for (int i = 0; i < vehicles.size(); i++)
	{
		vehicles.at(i)->info();
	}
}