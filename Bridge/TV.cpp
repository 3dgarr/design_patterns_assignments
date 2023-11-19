#include "TV.hpp"
#include <iostream>
TV::TV()
	:	volume(0),
		state(false)
{}

bool TV::isEnabled() const
{
	return state;
}

void TV::enable()
{
	state = true;
	std::cout << "TV IS ENABLED" << std::endl;
}

void TV::disable()
{
	state = false;
	std::cout << "TV IS DISABLED" << std::endl;
}

int TV::getVolume() const
{
	return volume;
}

void TV::setVolume(int percent)
{
	if (percent < 0)
	{
		std::cout << "LOWER_BOUND OF VOLUME " << std::endl;
		return ;
	}
	else if (percent > 100)
	{
		std::cout << "UPPER_BOUND OF VOLUME " << std::endl;
		return ;
	}
	volume = percent;
	std::cout << "VOLUME IS " << volume << " NOW" <<  std::endl;
}

int TV::getChannel() const
{
	return	channel;
}

void TV::setChannel(int other_channel)
{	
	if (other_channel < 0)
	{
		std::cout << "LOWER_BOUND OF CHANNEL" << std::endl;
		return ;
	}
	channel = other_channel;
	std::cout << "SWITCHED to " << channel << std::endl;


}
