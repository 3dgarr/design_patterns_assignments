#include "ConcreteBuilder.hpp"

#include <iostream>

void	ConcreteBuilder::buildPartA()
{
	m_product->setPartA("PART_A");
	std::cout << "Part A was built" << std::endl;
}

void	ConcreteBuilder::buildPartB()
{
	m_product->setPartA("PART_B");
	std::cout << "Part B was built" << std::endl;
}

void	ConcreteBuilder::buildPartC()
{
	m_product->setPartA("PART_C");
	std::cout << "Part C was built" << std::endl;
}


void	ConcreteBuilder::reset()
{
	m_product = std::shared_ptr<Product>(new Product());
}

std::shared_ptr<Product>	ConcreteBuilder::getProduct()
{
	return	m_product;
}

