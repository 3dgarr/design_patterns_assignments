#include "Publisher.hpp"
#include "Subject.hpp"
#include <algorithm>
#include <iostream>

Publisher::Publisher(std::shared_ptr<Subject> s)
	:subject(s),
	currentReleaseOfSubject(subject->getReleaseNumber())
{}

void Publisher::checkIfSubjectUpdated()
{
	if (subject->getReleaseNumber() != currentReleaseOfSubject)
	{
		currentReleaseOfSubject = subject->getReleaseNumber();
		notify();
	}
	else 
	{
		std::cout << "Everything is ok, nothing has changed" << std::endl;
	}
}

void Publisher::addSubscriber(std::shared_ptr<ISubscriber> sub)
{
	subscribers.push_back(sub);
}

void Publisher::removeSubscriber(std::shared_ptr<ISubscriber> sub)
{
	subscribers.erase(std::remove_if(subscribers.begin(), subscribers.end(),
							[&sub](auto elem) { return elem == sub; }),
							subscribers.end());
}	

void Publisher::notify()
{
	for (auto sub: subscribers)
	{
		sub->beNotified("Updated Version");
	}
	
}
