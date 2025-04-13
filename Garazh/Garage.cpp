#include "Garage.h"

Vehicle::Vehicle() : mark{"unknow"}, mileage{0}{}
Vehicle::Vehicle(std::string _mark, int _mileage) : Vehicle()
{
	mark = _mark;
	mileage = _mileage;
}

Car::Car() : is_active{ false } {}
Car::Car(bool _is_active) : Car()
{
	is_active = _is_active;
}


Bus::Bus() : capacity{0} {}
Bus::Bus(int _capacity) : Bus()
{
	capacity = _capacity;
}

void Vehicle::info() const
{
	std::cout << "Mark: " << mark << ", mileage: " << mileage << std::endl;
}

void Car::info() const
{
	std::cout << "Is active: " << is_active << std::endl;
}

void Bus::info() const
{
	std::cout << "Capacity: " << capacity << std::endl;
}

void Garage::park(const std::shared_ptr<Vehicle>& vehicle)
{
	vehicles.push_back(vehicle);
}

void Garage::printVehicle() const
{
	for (int i = 0; i < vehicles.size(); i++)
	{
		vehicles.at(i)->info();
	}
}

// Приемный гараж

//Garage::~Garage()
//{
//	for (int i = 0; i < vehicles.size(); i++)
//	{
//		delete vehicles.at(i);
//	}
//}
