#include "Subscriber.hpp"
#include <iostream>

Subscriber::Subscriber(const std::string &name)
: m_name(name)
{}

void Subscriber::beNotified(const std::string& msg)
{
	std::cout << m_name << " got message: " << msg << std::endl;

}