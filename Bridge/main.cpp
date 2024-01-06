# include "Remote.hpp"
# include "TV.hpp"
# include "Radio.hpp"
# include <memory>

int main()
{
	Remote remote(std::make_unique<Radio>());
	remote.volumeUp();
	remote.togglePower();
	remote.volumeUp();
	remote.togglePower();

}