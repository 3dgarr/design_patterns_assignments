# ifndef	RADIO_HPP
# define	RADIO_HPP

# include "IDevice.hpp"

class	Radio
	: public IDevice
{
	public:
		Radio();

		bool	isEnabled() const override;
		void	enable() override;
		void	disable() override;
		int		getVolume() const override;
		void	setVolume(int percent) override;
		int		getChannel() const override;
		void	setChannel(int channel) override;

	private:
		int		volume;
		int		channel;
		bool	state;

};

# endif //	RADIO_HPP