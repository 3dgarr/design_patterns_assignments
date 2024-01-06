# ifndef	REMOTE_HPP
# define	REMOTE_HPP

# include <memory>
# include "IDevice.hpp"

class Remote
{
	public:
		Remote(std::unique_ptr<IDevice>);

		void	togglePower();
		void	volumeDown();
		void	volumeUp();
		void	channelDown();
		void	channelUp();

	private:
		std::unique_ptr<IDevice> device;
};

# endif //	REMOTE_HPP