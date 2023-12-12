# ifndef SUBSCRIBER_HPP
# define SUBSCRIBER_HPP

# include "ISubscriber.hpp"

class		Subscriber
:	public	ISubscriber
{
	public:
		Subscriber(const std::string& name);
		void beNotified(const std::string& msg) override;
		
	private:
		const std::string m_name;
};


# endif// SUBSCRIBER_HPP