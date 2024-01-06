#include "Remote.hpp"

Remote::Remote(std::unique_ptr<IDevice> dev)
	:	device(std::move(dev))
{}

void Remote::togglePower()
{
	device->isEnabled() ? device->disable() : device->enable();
}

void Remote::volumeDown()
{
	if (device->isEnabled())
		device->setVolume(device->getVolume() - 10);

}

void Remote::volumeUp()
{
	if (device->isEnabled())
		device->setVolume(device->getVolume() + 10);
}

void Remote::channelDown()
{
	if (device->isEnabled())
		device->setChannel(device->getChannel() - 1);
}

void Remote::channelUp()
{
	if (device->isEnabled())
		device->setChannel(device->getChannel() + 1);
}


