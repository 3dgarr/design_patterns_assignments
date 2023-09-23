# ifndef CONCRETE_BUILDER
# define CONCRETE_BUILDER

# include "IBuilder.hpp"
# include <memory>

class ConcreteBuilder
	:	public	IBuilder
{
	public:
		void	reset()			override;
		void	buildPartA()	override;
		void	buildPartB()	override;
		void	buildPartC()	override;
		std::shared_ptr<Product>	getProduct()	override;


		ConcreteBuilder() = default;
		~ConcreteBuilder() = default;

	private:
		std::shared_ptr<Product>	m_product;
};



# endif// CONCRETE_BUILDER