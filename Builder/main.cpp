# include "Director.hpp"
# include "ConcreteBuilder.hpp"
# include "Product.hpp"

int main()
{
	std::shared_ptr<IBuilder> builder(new ConcreteBuilder);
	Director	director(builder);
	director.makeProduct(E_TYPE::WITH_ABC);
	std::shared_ptr<Product> product = builder->getProduct();
	///TODO: make simple this code axpor pes!! You dont have enough RAM!!
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


