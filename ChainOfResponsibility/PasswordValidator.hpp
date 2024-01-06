# ifndef PASSWORD_VALIDATOR
# define PASSWORD_VALIDATOR

# include <memory>	
# include "IInputValidator.hpp"

class PasswordValidator
	:	public IInputValidator
{
	public:
		PasswordValidator(std::unique_ptr<IInputValidator> handler);
		bool validate(const std::string& input) override;

	private:
		std::unique_ptr<IInputValidator> successor;
};

# endif// PASSWORD_VALIDATOR