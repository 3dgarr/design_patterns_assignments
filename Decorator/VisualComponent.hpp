# ifndef	VISUAL_COMPONENT_HPP
# define	VISUAL_COMPONENT_HPP

#include <iostream>
#include <memory>


class VisualComponent
{
	public:
		virtual void	draw() const = 0;
		
		VisualComponent() = default;
		virtual ~VisualComponent() = default;
};

class Decorator 
	:	public	VisualComponent
{
	public:
		void	draw() const override;

		Decorator(std::unique_ptr<VisualComponent>);
		virtual ~Decorator() = default;
	
	protected:
		std::unique_ptr<VisualComponent>	component;
};

class TextView 
	:	public	VisualComponent
{
	public:
		void	draw() const override;

		TextView();
		virtual ~TextView() = default;
};


# endif//	VISUAL_COMPONENT_HPP