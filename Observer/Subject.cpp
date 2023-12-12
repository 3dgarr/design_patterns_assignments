#include "Subject.hpp"
#include <iostream>

Subject::Subject()
:	releaseNumber(0)
{}

void Subject::updateReleaseNumber()
{
	releaseNumber++;
	std::cout << "UPADETED RELEASE NUMBER [" << releaseNumber << "]" << std::endl;	
}

size_t Subject::getReleaseNumber() const
{
	return releaseNumber;
}
