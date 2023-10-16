# ifndef	TABLE_HPP
# define	TABLE_HPP

#include <iostream>

class Table
{
	public:
		virtual void sitAt() const = 0;
	
		Table() = default;
		virtual	~Table() = default;
};

class VictorianTable
	:	public	Table
{
	public:
		void sitAt() const override;

		VictorianTable() = default;
		virtual	~VictorianTable() = default;
};


class ModernTable
	:	public	Table
{
	public:
		void sitAt() const;
		ModernTable() = default;
		virtual	~ModernTable() = default;
};

# endif//	TABLE_HPP