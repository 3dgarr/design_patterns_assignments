# ifndef DIRECTOR_HPP
# define DIRECTOR_HPP

# include "IBuilder.hpp"
# include "ConcreteBuilder.hpp"

# include <string>

class Director
{
	public:
		void	makeProduct(PRODUCT_TYPE);
		void	changeBuilder(IBuilder*);

		Director(IBuilder*);
		~Director();

	private:
		IBuilder*	m_builder;
};



# endif// DIRECTOR_HPP