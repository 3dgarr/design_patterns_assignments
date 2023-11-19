# ifndef	TV_HPP
# define	TV_HPP

# include "IDevice.hpp"
# include <vector>

class	TV
	: public IDevice
{
	public:
		TV();

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

# endif //	TV_HPP