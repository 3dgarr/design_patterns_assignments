# ifndef SEA_LOGISTICS_HPP
# define SEA_LOGISTICS_HPP

#include "Ship.hpp"
#include "Logistics.hpp"

class SeaLogistics : public Logistics
{
	public:
		SeaLogistics() = default;
		Transport * createTransport() ;
		~SeaLogistics(){};

};


# endif// SEA_LOGISTICS_HPP