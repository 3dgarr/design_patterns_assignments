#include	"FurnitureFactory.hpp"

std::unique_ptr<Chair>	VictorianFurnitureFactory::createChair()	const
{
	return (std::move(std::make_unique<VictorianChair>(VictorianChair())));
}

std::unique_ptr<Chair>	ModernFurnitureFactory::createChair()	const
{
	return (std::move(std::make_unique<ModernChair>(ModernChair())));
}

std::unique_ptr<Sofa>	VictorianFurnitureFactory::createSofa()	const
{
	return (std::move(std::make_unique<VictorianSofa>(VictorianSofa())));
}

std::unique_ptr<Sofa>	ModernFurnitureFactory::createSofa()	const
{
	return (std::move(std::make_unique<ModernSofa>(ModernSofa())));
}

std::unique_ptr<Table>	VictorianFurnitureFactory::createTable()	const
{
	return (std::move(std::make_unique<VictorianTable>(VictorianTable())));
}

std::unique_ptr<Table>	ModernFurnitureFactory::createTable()	const
{
	return (std::move(std::make_unique<ModernTable>(ModernTable())));
}


