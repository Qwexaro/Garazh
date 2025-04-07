#pragma once
#include <iostream>
#include <string>

class Vehicale 
{
	std::string mark;
	int mileage;
public:
	Vehicale();
	void info();
};

class Car : public Vehicale
{
	bool is_active;
public:
	Car();
	void info();
};

class Bus : public Vehicale
{
	int capacity;
public:
	Bus();
	void info();
};