#include "Rectangle.hpp"
#include "Circle.hpp"

int main()
{
	Shape*	obj = new Rectangle(19, 20);
	obj->print_info();
	delete obj;

	Circle circle(100);
	obj = circle.clone();
	obj->print_info();
	delete obj;
}