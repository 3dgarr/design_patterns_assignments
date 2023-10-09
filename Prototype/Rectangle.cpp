#include "Rectangle.hpp"

Shape*	Rectangle::clone() const 
{
	return	(new Rectangle(*this));
}


Rectangle::Rectangle()
	:
		m_width(0),
		m_height(0)
{}

Rectangle::Rectangle(int width, int height)
	:
		m_width(width),
		m_height(height)
{}

Rectangle::Rectangle(const Rectangle& rhs)
	:	Shape(rhs),
		m_width(rhs.m_width),
		m_height(rhs.m_height)
{}

Rectangle&  Rectangle::operator=(const Rectangle& rhs)
{
	if (this != &rhs)
	{
		m_width = rhs.m_width ;
		m_height = rhs.m_height ;
	}
	return (*this);
}

Rectangle::~Rectangle()
{}

void	Rectangle::print_info() const
{
	this->Shape::print_info();
	std::cout << "Width\t\t= " << m_width << std::endl;
	std::cout << "Height\t\t= " << m_height << std::endl;
	std::cout << "---------------------" << std::endl;
	
}
