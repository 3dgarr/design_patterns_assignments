# ifndef LOGISTICS_HPP
# define LOGISTICS_HPP

#include "Transport.hpp"

class Logistics
{
	public:
		Logistics(){};
		void	planDelivery();
		virtual ~Logistics(){};
		virtual	Transport * createTransport() = 0;
};


# endif// LOGISTICS_HPP