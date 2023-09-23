# ifndef DIRECTOR_HPP
# define DIRECTOR_HPP

# include "IBuilder.hpp"
# include "ConcreteBuilder.hpp"

# include <string>
# include <memory>

enum	E_TYPE
{
	WITH_A,
	WITH_B,
	WITH_C,
	WITH_AB,
	WITH_AC,
	WITH_BC,
	WITH_ABC,
};

class Director
{
	public:
		void	makeProduct(E_TYPE);
		// void	changeBuilder(std::shared_ptr<IBuilder>);

		Director(std::shared_ptr<IBuilder>);
		~Director();

	private:
		std::shared_ptr<IBuilder>	m_builder;
};



# endif// DIRECTOR_HPP