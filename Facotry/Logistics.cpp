#include "Logistics.hpp"

void	Logistics::planDelivery()
{
	Transport	*tr = createTransport();
	tr->deliver();
}