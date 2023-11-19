# ifndef	HOME_THEATER_FACADE_HPP
# define	HOME_THEATER_FACADE_HPP

# include "TV.hpp"
# include "Speaker.hpp"
# include "DVD.hpp"


class HomeTheaterFacade
{
	public:
		void	startWatching(void);
		void	stopWatching(void);

	private:
		TV		tv;
		Speaker	speaker;
		DVD		dvd;
	
};

# endif	//HOME_THEATER_FACADE_HPP