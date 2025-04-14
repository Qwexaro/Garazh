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
	std::cout << "Vehicle with mark: " << mark << ", mileage: " << mileage << ", ";
}

void Car::info() const
{
	Vehicle::info();
	std::cout << "Car with is active: " << (is_active ? "true" : "false") << std::endl;
}

void Bus::info() const
{
	Vehicle::info();
	std::cout << "Bus with capacity: " << capacity << std::endl;
}

void Garage::park(const std::shared_ptr<Vehicle>& vehicle)
{
	vehicles.push_back(vehicle);
}

void Garage::printVehicles() const
{
	std::cout << "Vehicles: \n" << std::endl;
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
