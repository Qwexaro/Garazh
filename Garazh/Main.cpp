#include "Garage.h"

int main()
{
	Garage garage;

	std::shared_ptr<Vehicle> bus = std::make_shared<Bus>(100);
	std::shared_ptr<Vehicle> car = std::make_shared<Car>(true);
	//std::shared_ptr<Vehicle> bike = std::make_shared<Vehicle>("Bike", 120);

	garage.park(bus);
	garage.park(car);
	//garage.park(bike);

	garage.printVehicles();

	return 0;
}