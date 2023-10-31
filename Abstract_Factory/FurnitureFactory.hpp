# ifndef	FURNITURE_FACTORY_HPP
# define	FURNITURE_FACTORY_HPP

#include	"Chair.hpp"
#include	"Table.hpp"
#include	"Sofa.hpp"

#include	<memory>
#include	<iostream>

class FurnitureFactory
{
	public:
		virtual std::unique_ptr<Chair>	createChair()	const = 0;
		virtual std::unique_ptr<Sofa>	createSofa()	const = 0;
		virtual std::unique_ptr<Table>	createTable()	const = 0;

		FurnitureFactory() = default;
		virtual ~FurnitureFactory() = default;
};

class VictorianFurnitureFactory
	:	public FurnitureFactory
{
	public:
		std::unique_ptr<Chair>	createChair()	const override;
		std::unique_ptr<Sofa>	createSofa()	const override;
		std::unique_ptr<Table>	createTable()	const override;

		VictorianFurnitureFactory() = default;
		~VictorianFurnitureFactory() = default;
};

class ModernFurnitureFactory
	:	public FurnitureFactory
{
	public:
		std::unique_ptr<Chair>	createChair()	const override;
		std::unique_ptr<Sofa>	createSofa()	const override;
		std::unique_ptr<Table>	createTable()	const override;

		ModernFurnitureFactory() = default;
		~ModernFurnitureFactory() = default;
};

# endif//	FURNITURE_FACTORY_HPP