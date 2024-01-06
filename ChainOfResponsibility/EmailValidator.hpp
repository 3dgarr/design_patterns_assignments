# ifndef EMAIL_VALIDATOR
# define EMAIL_VALIDATOR

# include <memory>	
# include "IInputValidator.hpp"

class EmailValidator
	:	public IInputValidator
{
	public:
		EmailValidator(std::unique_ptr<IInputValidator> handler);
		bool validate(const std::string& input) override;

	private:
		std::unique_ptr<IInputValidator> successor;
};

# endif// EMAIL_VALIDATOR