# include <iostream>
# include <string>
# include "PasswordValidator.hpp"

PasswordValidator::PasswordValidator(std::unique_ptr<IInputValidator> handler)
	:	successor(std::move(handler))
{}

bool PasswordValidator::validate(const std::string &input)
{
	if (input.length() > 8)
	{
		std::cout << "Password meets the requirements" << std::endl;
		return true;
	}
	else if (successor != nullptr)
	{
		return successor->validate(input);
	}
	else
	{
		std::cout << "Password must be at least 8 characters long" << std::endl;
		return false;
	}
}
