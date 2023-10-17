#include "Decorators.hpp"

int main()
{
	std::unique_ptr<VisualComponent>	textViewer(std::make_unique<TextView>());

	std::unique_ptr<Decorator>			boarderdecorator(std::make_unique<BorderDecorator>(std::move(textViewer)));

	std::unique_ptr<Decorator>			scrollDecorator(std::make_unique<ScrollDecorator>(std::move(boarderdecorator)));

	scrollDecorator->draw();


	
	


}