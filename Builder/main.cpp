# include "Director.hpp"
# include "ConcreteBuilder.hpp"
# include "Product.hpp"

int main()
{
	IBuilder*	builder = new ConcreteBuilder();
	Director	director(builder);
	director.makeProduct(PRODUCT_TYPE::WITH_AB);
	Product	product = builder->getProduct();
	

	delete builder;
	return 0;
}

/*
Famous man that directly believed in ??? ->PRINTF
FAMOUS MAN THAT COMES WITH THE ALTERNATE VERSION OF ??? ->B2BR
Famous man that  historically come with ??? -> GNL

Famous man that directly believed in ??? 
FAMOUS MAN THAT COMES WITH THE ALTERNATE VERSION OF ??? 
Famous man that  historically come with ??? 


*/


