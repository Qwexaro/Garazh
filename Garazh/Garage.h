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
	Vehicle(std::string mark, int mileage);
	virtual void info() const;
};

class Car : public Vehicle
{
	bool is_active;
public:
	Car();
	Car(bool is_active);
	void info() const;
};

class Bus : public Vehicle
{
	int capacity;
public:
	Bus();
	Bus(int capacity);
	void info() const;
};


class Garage
{
	std::vector<std::shared_ptr<Vehicle>> vehicles;
public:
	//~Garage();
	void park(const std::shared_ptr<Vehicle>& vehicle);
	void printVehicles() const;
};