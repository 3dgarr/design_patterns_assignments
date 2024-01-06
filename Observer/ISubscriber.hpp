# ifndef ISUBSCRIBER_HPP
# define ISUBSCRIBER_HPP

#include <string>


class ISubscriber
{
	public:
		virtual void beNotified(const std::string& msg) = 0;
		virtual ~ISubscriber() = default;
};


# endif// ISUBSCRIBER_HPP