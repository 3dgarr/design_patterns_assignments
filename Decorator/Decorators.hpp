# ifndef	DECORATOR_HPP
# define	DECORATOR_HPP

# include "VisualComponent.hpp"

class BorderDecorator
	:	public	Decorator
{
	public:
		void	draw() const override;
		void	drawBorder() const;
		BorderDecorator(std::unique_ptr<VisualComponent>);
		~BorderDecorator() = default;
	
	private:
		/* data */
};

class ScrollDecorator
	:	public	Decorator
{
	public:
		void	draw() const override;
		void	ScrollTo() const;
		ScrollDecorator(std::unique_ptr<VisualComponent>);
		~ScrollDecorator() = default;
	
	private:
		/* data */
};


# endif//	DECORATOR_HPP