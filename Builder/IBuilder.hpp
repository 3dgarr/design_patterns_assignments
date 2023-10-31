# ifndef I_BUILDER_HPP
# define I_BUILDER_HPP

#include "Product.hpp"
#include <memory>
class IBuilder
{
	public:
		virtual	Product&	getProduct() = 0;
	
	public:
		virtual void		reset()      = 0;
		virtual	IBuilder*	buildPartA() = 0;
		virtual	IBuilder*	buildPartB() = 0;
		virtual	IBuilder*	buildPartC() = 0;

	public:
		IBuilder() = default;
		virtual ~IBuilder() = default;

};



# endif// I_BUILDER_HPP