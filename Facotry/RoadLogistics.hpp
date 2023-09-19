# ifndef ROAD_LOGISTICS_HPP
# define ROAD_LOGISTICS_HPP

#include "Logistics.hpp"
#include "Truck.hpp"


class RoadLogistics	: public Logistics
{
	public:
		RoadLogistics() = default;
		Transport * createTransport() ;
		~RoadLogistics(){};
};


# endif// ROAD_LOGISTICS_HPP