#include "RoadLogistics.hpp"

Transport* RoadLogistics::createTransport()
{
	return	(new Truck());
}