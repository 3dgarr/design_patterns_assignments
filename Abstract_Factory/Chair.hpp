# ifndef	CHAIR_HPP
# define	CHAIR_HPP

#include <iostream>

class Chair
{
	public:
		virtual void sitOn() const = 0;
		
		Chair() = default;
		virtual	~Chair() = default;
};


class VictorianChair
	:	public	Chair
{
	public:
		void sitOn() const override;
		
		VictorianChair() = default;
		~VictorianChair() = default;
};


class ModernChair
	:	public	Chair
{
	public:
		void sitOn() const override;
		
		ModernChair() = default;
		~ModernChair() = default;
};

# endif//	CHAIR_HPP