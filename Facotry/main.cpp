#include "Logistics.hpp"
#include "RoadLogistics.hpp"
#include "SeaLogistics.hpp"

int main()
{
	Logistics	*factory = new RoadLogistics();
	factory->planDelivery();
	delete	factory;
	factory = new SeaLogistics();
	factory->planDelivery();
	delete	factory;
}
