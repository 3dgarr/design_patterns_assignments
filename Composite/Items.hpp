# ifndef ITEM_HPP
# define ITEM_HPP

# include <list>
# include <iostream>
# include <vector>
# include <algorithm>
# include <numeric>
# include <memory>
# include <iomanip>


class Item
{
	public:
		Item() = default;
		Item(size_t	price, const std::string& name);
		virtual size_t	getPrice() const; 
		virtual ~Item() = default;
	
	private:
		size_t		m_price;
		std::string	m_name;
};

class Hammer : public Item
{
	public:
		Hammer();
		~Hammer() = default;
};

class Phone : public Item
{
	public:
		Phone();
		~Phone() = default;
};

class Headphone : public Item
{
	public:
		Headphone();
		~Headphone() = default;
};

class Charger : public Item
{
	public:
		Charger();
		~Charger() = default;
};

class Box : public Item
{
	public:
		Box() = default;
		void	AddItem(std::shared_ptr<Item>);
		size_t	getPrice() const override; 
		~Box() = default;
		
	private:
		std::vector<std::shared_ptr<Item>>	items;
};

# endif// ITEM_HPP