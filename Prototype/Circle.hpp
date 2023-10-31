# ifndef CIRCLE_HPP
# define CIRCLE_HPP

# include "Shape.hpp"

class Circle
	:	public	Shape
{
	public:
		Shape*	clone() const override;
		void	print_info() const override;
		Circle();
		Circle(int radius);
		Circle(const Circle&);
		Circle& operator=(const Circle&);
		~Circle();

	private:
		int	m_radius;
};

# endif// CIRCLE_HPP