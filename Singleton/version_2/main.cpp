#include "Singleton.hpp"

void thread1()
{
	const std::string	name("David");

    Singleton* singleton = Singleton::getInstacne(name);
	std::cout << singleton->getName() << " -- thread1\n";

}

void thread2()
{
	const std::string	name("Eduard");
    Singleton* singleton = Singleton::getInstacne(name);
	std::cout << singleton->getName() << " -- thread2\n";	
}

int	main()
{
    std::thread t2(thread2);
	std::thread t1(thread1);
    t1.join();
    t2.join();
	return 0;
}