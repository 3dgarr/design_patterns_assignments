#include "Items.hpp"

Item::Item(size_t price, const std::string& name)
	:	m_price(price),
		m_name(name)
{
	std::cout << "----------------------------------" << std::endl;
	std::cout << "The Item:\t" << m_name << std::endl;
	std::cout << "The price:\t" << m_price << std::endl;
	std::cout << "----------------------------------" << std::endl;
}

size_t	Item::getPrice() const
{
	return (m_price);
}


Hammer::Hammer()
	: Item(10, "Hammer")
{}


Headphone::Headphone()
	: Item(20, "Headphone")
{}


Charger::Charger()
	: Item(30, "Charger")
{}

Phone::Phone()
	: Item(50, "Phone")
{}

size_t	Box::getPrice() const 
{
	size_t	sum = 0;
	for (auto item : items)
	{
		sum += item->getPrice();
	}
	return sum;
		
	// return (std::accumulate(items.begin(), items.end(), sum, 
	// 	[](std::shared_ptr<Item> it1, std::shared_ptr<Item> it2)
	// 	{
	// 		return it1->getPrice() + it2->getPrice();
	// 	}));
}

void	Box::AddItem(std::shared_ptr<Item> it)
{
	items.push_back(it);
}


// Box::~Box()
// {
// 	for (auto item : items)
// 	{
// 		delete item;
// 	}
	
// }