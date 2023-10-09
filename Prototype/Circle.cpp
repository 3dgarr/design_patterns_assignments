#include "Circle.hpp"

Shape*	Circle::clone() const 
{
	return	(new Circle(*this));
}


Circle::Circle()
	:	Shape(),	
		m_radius(0)
{}

Circle::Circle(int radius)
	:	Shape(),
		m_radius(radius)
{}

Circle::Circle(const Circle& rhs)
	:	Shape(rhs),
		m_radius(rhs.m_radius)
{
}

Circle&  Circle::operator=(const Circle& rhs)
{
	if (this != &rhs)
	{
		m_radius = rhs.m_radius;
	}
	return (*this);
}

Circle::~Circle()
{}

void	Circle::print_info() const
{
	this->Shape::print_info();
	std::cout << "Radius\t\t= " << m_radius << std::endl;
	std::cout << "---------------------" << std::endl;
}