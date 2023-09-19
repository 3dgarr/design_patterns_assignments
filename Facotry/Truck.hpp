# ifndef TRUCK_HPP
# define TRUCK_HPP

#include "Transport.hpp"

class Truck	:	public Transport
{
	public:
		Truck() = default;
		void deliver();
		
		~Truck(){};

};


# endif// TRUCK_HPP