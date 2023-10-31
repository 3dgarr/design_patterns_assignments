#include "ConcreteBuilder.hpp"

#include <iostream>

IBuilder*	ConcreteBuilder::buildPartA()
{
	m_product->setPartA("PART_A");
	std::cout << "Part A was built" << std::endl;
	return (this);
}

IBuilder*	ConcreteBuilder::buildPartB()
{
	m_product->setPartA("PART_B");
	std::cout << "Part B was built" << std::endl;
	return (this);
}

IBuilder*	ConcreteBuilder::buildPartC()
{
	m_product->setPartA("PART_C");
	std::cout << "Part C was built" << std::endl;
	return (this);
}


void	ConcreteBuilder::reset()
{
	m_product = new Product();
}

Product&	ConcreteBuilder::getProduct()
{
	return	*m_product;
}

ConcreteBuilder::~ConcreteBuilder()
{
	delete m_product;
}

