# include "IInputValidator.hpp"
# include "EmailValidator.hpp"
# include "PasswordValidator.hpp"
# include "AgeValidator.hpp"
# include <iostream>


int main()
{
    std::unique_ptr<IInputValidator> validatorChain =
        std::make_unique<AgeValidator>(
            std::make_unique<PasswordValidator>(
                std::make_unique<EmailValidator>(nullptr)
            )
        );
	std::string emailInput = "smth@b";
    std::string passwordInput = "barlusaxperjan";
    std::string ageInput = "24";

    bool isInputValid = validatorChain->validate(emailInput) &&
                        validatorChain->validate(passwordInput) &&
                        validatorChain->validate(ageInput);

    if (isInputValid) 
	{
        std::cout << "All inputs are valid" << std:: endl;
    } 
	else 
	{
        std::cout << "Invalid inputs" << std::endl;
    }
}
