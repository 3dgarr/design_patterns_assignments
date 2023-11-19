# ifndef IDEVICE_HPP
# define IDEVICE_HPP

# include <string>

class IDevice
{
	public:
		virtual	bool	isEnabled() const =0;
		virtual	void	enable() =0;
		virtual	void	disable() =0;
		virtual int		getVolume() const =0;
		virtual	void	setVolume(int percent) =0;
		virtual	int		getChannel() const =0;
		virtual	void	setChannel(int channel) = 0;	
};

# endif// IDEVICE_HPP