#include "HomeTheaterFacade.hpp"
#include <iostream>
int main()
{
	HomeTheaterFacade	homeTheater;

	homeTheater.startWatching();
	std::cout << "\n2 hours later ... \n" << std::endl;
	homeTheater.stopWatching();
}