# ifndef I_BUILDER_HPP
# define I_BUILDER_HPP

#include "Product.hpp"
#include <memory>
class IBuilder
{
	public:
		virtual void	reset()      = 0;
		virtual	void	buildPartA() = 0;
		virtual	void	buildPartB() = 0;
		virtual	void	buildPartC() = 0;
		virtual	std::shared_ptr<Product>	getProduct() = 0;

	public:
		IBuilder() = default;
		virtual ~IBuilder() = default;

};



# endif// I_BUILDER_HPP