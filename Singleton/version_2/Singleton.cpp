#include "Singleton.hpp"

std::unique_ptr<Singleton>	Singleton::_instance = nullptr;
std::mutex					Singleton::_mutex;

Singleton::Singleton(std::string const & n)
	:	_name(n)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void	Singleton::setName(std::string const& n)
{
	_mutex.lock();
	_name = n;
	_mutex.unlock();
}

std::string	Singleton::getName() const
{
	return _name;
}



Singleton::~Singleton()
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Singleton*	Singleton::getInstacne(std::string const& n)
{
	_mutex.lock();
	if (!_instance)
	{
		_instance = std::unique_ptr<Singleton>(new Singleton(n));
	}
	_mutex.unlock();
	return	(_instance.get());
}
