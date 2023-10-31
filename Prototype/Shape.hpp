# ifndef SHAPE_HPP
# define SHAPE_HPP

# include <iostream>
# include <string>
# include <memory>

class Shape
{
	public:
		virtual	Shape*	clone() const = 0;
		virtual	void	print_info() const;

		Shape();
		Shape(int x_cor, int y_cor, std::string color);
		Shape(const Shape&);
		Shape& operator=(const Shape&);
		virtual ~Shape();

	protected:
		int			m_x_cor;
		int			m_y_cor;
		std::string	m_color;
};

# endif// SHAPE_HPP