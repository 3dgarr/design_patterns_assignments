# ifndef RECTANGLE_HPP
# define RECTANGLE_HPP

# include "Shape.hpp"

class Rectangle
	:	public	Shape
{
	public:
		Shape*	clone() const override;
		void	print_info() const override;

		Rectangle();
		Rectangle(int width, int height);
		Rectangle(const Rectangle&);
		Rectangle& operator=(const Rectangle&);
		~Rectangle();

	private:
		int	m_width;
		int	m_height;
};

# endif// RECTANGLE_HPP