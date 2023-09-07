# ifndef SINGLETON_HPP
# define SINGLETON_HPP

# include <iostream>
# include <mutex>
# include <thread>

class Singleton
{
	public:
		void				setName(std::string const&);
		std::string			getName() const;
		static Singleton*	getInstacne(std::string const&);

	public:
		Singleton(Singleton const&) = delete;
		Singleton(Singleton&&) = delete;
		Singleton& operator=(Singleton const&) = delete;
		Singleton& operator=(Singleton&&) = delete;
		~Singleton();
	
	private:
		Singleton(std::string const&);
	
	private:
		static std::unique_ptr<Singleton>	_instance;	
		static std::mutex					_mutex;	
		std::string							_name;
};


# endif// SINGLETON_HPP