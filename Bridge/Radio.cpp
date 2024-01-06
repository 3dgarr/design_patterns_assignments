#include "Radio.hpp"
#include <iostream>

Radio::Radio()
	:	volume(0),
		channel(1),
		state(false)
{}

bool Radio::isEnabled() const
{
	return state;
}

void Radio::enable()
{
	state = true;
	std::cout << "RADIO IS ENABLED" << std::endl;
}

void Radio::disable()
{
	state = false;
	std::cout << "RADIO IS DISABLED" << std::endl;
}

int Radio::getVolume() const
{
	return volume;
}

void Radio::setVolume(int percent)
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

int Radio::getChannel() const
{
	return	channel;
}

void Radio::setChannel(int other_channel)
{
	if (other_channel < 0)
	{
		std::cout << "LOWER_BOUND OF CHANNEL" << std::endl;
		return ;
	}
	channel = other_channel;
	std::cout << "SWITCHED TO " << channel << std::endl;

}
