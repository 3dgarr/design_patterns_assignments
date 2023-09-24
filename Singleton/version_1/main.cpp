#include "Singleton.hpp"

void thread1()
{
	const std::string	name("David");
	std::cout << Singleton::getInstacne(name).getName() << " -- thread1\n";	
}

void thread2()
{
	const std::string	name("Eduard");
    
	std::cout << Singleton::getInstacne(name).getName() << " -- thread2\n";	
}

int	main()
{
	std::thread t1(thread1);
    std::thread t2(thread2);
    t1.join();
    t2.join();
	return 0;
}