#include "Product.hpp"

void	Product::setPartA(const std::string& part)
{
	partA = part;
}

void	Product::setPartB(const std::string& part)
{
	partB = part;
}

void	Product::setPartC(const std::string& part)
{
	partC = part;
}

Product::Product()
	:	partA("Empty"),
		partB("Empty"),
		partC("Empty")
{}

