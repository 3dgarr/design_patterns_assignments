#include "HomeTheaterFacade.hpp"
#include <iostream>


void	HomeTheaterFacade::startWatching(void)
{
	std::cout << "Getting ready!" << std::endl;
	tv.turnON();
	speaker.turnON();
	dvd.turnON();
	dvd.startMovie();
}


void	HomeTheaterFacade::stopWatching(void)
{
	std::cout << "THE END!" << std::endl;
	dvd.stopMovie();
	dvd.turnOFF();
	speaker.turnOFF();
	tv.turnOFF();
}

