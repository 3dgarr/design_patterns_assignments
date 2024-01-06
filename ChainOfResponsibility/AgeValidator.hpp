# ifndef AGE_VALIDATOR
# define AGE_VALIDATOR

# include <memory>	
# include "IInputValidator.hpp"

class AgeValidator
	:	public IInputValidator
{
	public:
		AgeValidator(std::unique_ptr<IInputValidator> handler);
		bool validate(const std::string& input) override;

	private:
		std::unique_ptr<IInputValidator> successor;
};

# endif// AGE_VALIDATOR