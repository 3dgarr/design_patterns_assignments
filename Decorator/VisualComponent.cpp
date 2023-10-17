#include "VisualComponent.hpp"

void TextView::draw() const
{
	std::cout << "TextView drawing " << std::endl;
	// std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Decorator::draw() const
{
	std::cout << "Decorator drawing " << std::endl;
	component->draw();
	// std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Decorator::Decorator(std::unique_ptr<VisualComponent> comp)
	:	component(std::move(comp))
{}

TextView::TextView()
{}
