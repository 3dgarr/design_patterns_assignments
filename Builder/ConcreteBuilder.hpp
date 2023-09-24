# ifndef CONCRETE_BUILDER
# define CONCRETE_BUILDER

# include "IBuilder.hpp"
# include <memory>

class ConcreteBuilder
	:	public	IBuilder
{
	public:
		void		reset()			override;
		IBuilder*	buildPartA()	override;
		IBuilder*	buildPartB()	override;
		IBuilder*	buildPartC()	override;
		Product&	getProduct()	override;


		ConcreteBuilder() = default;
		~ConcreteBuilder();

	private:
		Product*	m_product;
};



# endif// CONCRETE_BUILDER