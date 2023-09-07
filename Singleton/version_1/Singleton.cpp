#include "Singleton.hpp"
# include <iostream>

Singleton::Singleton(std::string const& n)
	:	_name(n)
{

	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Singleton::~Singleton()
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

std::string Singleton::getName() const
{
	return _name;
}

Singleton&	Singleton::getInstacne(std::string const& n)
{
	static Singleton instance(n);

	return	(instance);
}
