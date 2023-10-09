#include "Shape.hpp"

Shape::Shape()
	:	m_x_cor(0),
		m_y_cor(0),
		m_color("black")
{}

Shape::Shape(int x_cor, int y_cor, std::string color)
	:	m_x_cor(x_cor),
		m_y_cor(y_cor),
		m_color(color)
{}

Shape::Shape(const Shape& rhs)
	:	m_x_cor(rhs.m_x_cor),
		m_y_cor(rhs.m_y_cor),
		m_color(rhs.m_color)
{}

Shape&  Shape::operator=(const Shape& rhs)
{
	if (this != &rhs)
	{
		m_x_cor = rhs.m_x_cor ;
		m_y_cor = rhs.m_y_cor ;
		m_color = rhs.m_color ;
	}
	return (*this);
}

Shape::~Shape()
{

}

void	Shape::print_info() const
{
	std::cout << "---------------------" << std::endl;
	std::cout << "X coordinate\t= " << m_x_cor << std::endl;
	std::cout << "Y coordinate\t= " << m_y_cor << std::endl;
	std::cout << "Color\t\t= " << m_color << std::endl;
	// std::cout << "---------------------" << std::endl;
}

