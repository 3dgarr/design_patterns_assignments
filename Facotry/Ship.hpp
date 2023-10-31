# ifndef SHIP_HPP
# define SHIP_HPP

#include "Transport.hpp"

class Ship	:	public Transport
{
	public:
		Ship() = default;
		void deliver();
		
		~Ship(){};

};


# endif// SHIP_HPP