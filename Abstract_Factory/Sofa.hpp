# ifndef	SOFA_HPP
# define	SOFA_HPP

#include <iostream>

class Sofa
{
	public:
		virtual void layOn() const = 0;
		
		Sofa() = default;
		virtual	~Sofa() = default;
};


class VictorianSofa
	:	public	Sofa
{
	public:
		void layOn() const override;
		
		VictorianSofa() = default;
		~VictorianSofa() = default;

};


class ModernSofa
	:	public	Sofa
{
	public:
		void layOn() const override;
		
		ModernSofa() = default;
		~ModernSofa() = default;
};

# endif//	SOFA_HPP