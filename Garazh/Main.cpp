#include "Garage.h"

int main()
{
	Garage garage;

	Vehicle* bus = new Bus();
	Vehicle* car = new Car();

	garage.park(bus);
	garage.park(car);

	garage.printVehicle();
	return 0;
}