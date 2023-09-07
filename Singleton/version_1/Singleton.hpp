# ifndef SINGLETON_HPP
# define SINGLETON_HPP

# include <iostream>
# include <mutex>
# include <thread>


class Singleton
{
	public:
		// void				setName(std::string const&);
		std::string			getName() const;
		static Singleton&	getInstacne(std::string const&);
	
	private:
		Singleton(std::string const&);

	public:
		Singleton(Singleton const&) = delete;
		Singleton(Singleton&&) = delete;
		Singleton& operator=(Singleton const&) = delete;
		Singleton& operator=(Singleton&&) = delete;
		~Singleton();

	private:
		std::string _name;
};


# endif// SINGLETON_HPP