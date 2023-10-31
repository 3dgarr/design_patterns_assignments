# include "FurnitureFactory.hpp"


int main()
{

	std::unique_ptr<FurnitureFactory>	factory ;
	std::unique_ptr<Chair>				chair;
	std::unique_ptr<Sofa>				sofa;
	std::unique_ptr<Table>				table;

	factory = std::make_unique<VictorianFurnitureFactory>(VictorianFurnitureFactory());
	
	chair = factory->createChair();
	sofa = factory->createSofa();
	table = factory->createTable();

	chair->sitOn();
	sofa->layOn();
	table->sitAt();

	std::cout << "-----------------------------------------" << std::endl;

	factory = std::make_unique<ModernFurnitureFactory>(ModernFurnitureFactory());

	chair = factory->createChair();
	sofa = factory->createSofa();
	table = factory->createTable();
	
	chair->sitOn();
	sofa->layOn();
	table->sitAt();
}

