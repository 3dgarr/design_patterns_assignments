#include "Items.hpp"

int main()
{
	std::shared_ptr<Box>	box = std::make_shared<Box>(Box());
	box->AddItem(std::make_shared<Hammer>(Hammer()));
	box->AddItem(std::make_shared<Phone>(Phone()));

	
	std::shared_ptr<Box>	box1 = std::make_shared<Box>(Box());
	box1->AddItem(std::make_shared<Headphone>(Headphone()));
	box1->AddItem(std::make_shared<Charger>(Charger()));
	
	box->AddItem(box1);
	box->AddItem(std::make_shared<Headphone>(Headphone()));
	box->AddItem(std::make_shared<Headphone>(Headphone()));
	box->AddItem(std::make_shared<Charger>(Charger()));
	box->AddItem(std::make_shared<Phone>(Phone()));

	std::shared_ptr<Box>	box2 = std::make_shared<Box>(Box());
	std::shared_ptr<Box>	box3 = std::make_shared<Box>(Box());
	std::shared_ptr<Box>	box4 = std::make_shared<Box>(Box());
	std::shared_ptr<Box>	box5 = std::make_shared<Box>(Box());
	
	box5->AddItem(std::make_shared<Phone>(Phone()));
	box4->AddItem(box5);
	box3->AddItem(box4);
	box2->AddItem(box3);
	box->AddItem(box2);


	std::cout <<"Total price of box is " << box->getPrice() << std::endl;
}