# ifndef TRANSPORT_HPP
# define TRANSPORT_HPP

class Transport
{
	public:
		Transport() = default;
		virtual void deliver() = 0;

		virtual ~Transport(){};
};


# endif// TRANSPORT_HPP