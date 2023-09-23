# ifndef	PRODUCT_HPP
# define	PRODUCT_HPP

#include <string>

class Product
{
	public:
		void	setPartA(const std::string&);
		void	setPartB(const std::string&);
		void	setPartC(const std::string&);

		Product();
		~Product() = default;

	private:
		std::string	partA;
		std::string	partB;
		std::string	partC;
};

# endif//	PRODUCT_HPP