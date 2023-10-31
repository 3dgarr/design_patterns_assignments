#include	"Director.hpp"

Director::Director(IBuilder* buildrPtr)
	:	m_builder(buildrPtr)
{}

Director::~Director()
{}

void	Director::makeProduct(PRODUCT_TYPE TYPE)
{
	m_builder->reset();
	switch (TYPE)
	{
		case PRODUCT_TYPE::WITH_A :
			m_builder->buildPartA();
			break;
		case PRODUCT_TYPE::WITH_B :
			m_builder->buildPartB();
			break;
		case PRODUCT_TYPE::WITH_C :
			m_builder->buildPartC();
			break;
		case PRODUCT_TYPE::WITH_AB :
			m_builder->buildPartA()->buildPartB();
			break;
		case PRODUCT_TYPE::WITH_AC :
			m_builder->buildPartA()->buildPartC();
			break;	
		case PRODUCT_TYPE::WITH_BC :
			m_builder->buildPartB()->buildPartC();
			break;
		case PRODUCT_TYPE::WITH_ABC :
			m_builder->buildPartA()->buildPartB()->buildPartC();
			break;
	}
}

void	Director::changeBuilder(IBuilder* builderPtr)
{
	delete	m_builder;
	m_builder = builderPtr;
}
