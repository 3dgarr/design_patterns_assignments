# ifndef	IINPUT_VALIDATOR_HPP
# define	IINPUT_VALIDATOR_HPP

# include <string>
class IInputValidator
{
	public:
		virtual bool validate(const std::string& input) = 0;
    	virtual ~IInputValidator() = default;
};

# endif//	IINPUT_VALIDATOR_HPP