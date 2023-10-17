#include "Decorators.hpp"

BorderDecorator::BorderDecorator(std::unique_ptr<VisualComponent> comp)
	:	Decorator{std::move(comp)}
{}

void	BorderDecorator::draw() const
{
	Decorator::draw();
	drawBorder();
}

void	BorderDecorator::drawBorder() const
{
	std::cout << "Drawing Border" << std::endl;
}


ScrollDecorator::ScrollDecorator(std::unique_ptr<VisualComponent> comp)
	:	Decorator{std::move(comp)}
{}

void	ScrollDecorator::draw() const
{
	Decorator::draw();
	ScrollTo();
}

void	ScrollDecorator::ScrollTo() const
{
	std::cout << "Scrolling ..." << std::endl;
}
