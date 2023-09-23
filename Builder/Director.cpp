#include	"Director.hpp"

Director::Director(std::shared_ptr<IBuilder> buildrPtr)
	:	m_builder(buildrPtr)
{}

Director::~Director()
{}

void	Director::makeProduct(E_TYPE TYPE)
{
	m_builder->reset();
	switch (TYPE)
	{
		case E_TYPE::WITH_A :
			m_builder->buildPartA();
			break;
		case E_TYPE::WITH_B :
			m_builder->buildPartB();
			break;
		case E_TYPE::WITH_C :
			m_builder->buildPartC();
			break;
		case E_TYPE::WITH_AB :
			m_builder->buildPartA();
			m_builder->buildPartB();
			break;
		case E_TYPE::WITH_AC :
			m_builder->buildPartA();
			m_builder->buildPartC();
			break;	
		case E_TYPE::WITH_BC :
			m_builder->buildPartB();
			m_builder->buildPartC();
			break;
		case E_TYPE::WITH_ABC :
			m_builder->buildPartA();
			m_builder->buildPartB();
			m_builder->buildPartC();
			break;
	}

}
