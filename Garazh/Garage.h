#pragma once
#include <iostream>
#include <string>
#include <vector>

class Vehicle 
{
protected:
	std::string mark;
	int mileage;
public:
	Vehicle();
	void info() const;
};

class Car : public Vehicle
{
	bool is_active;
public:
	Car();
	void info() const;
};

class Bus : public Vehicle
{
	int capacity;
public:
	Bus();
	void info() const;
};


class Garage
{
	std::vector<Vehicle*> vehicles;
public:
	//~Garage();
	void park(Vehicle* vehicle);
	void printVehicle() const;
};