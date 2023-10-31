#include "SeaLogistics.hpp"

Transport* SeaLogistics::createTransport()
{
	return	(new Ship());
}