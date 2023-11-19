# include "EmailValidator.hpp"
# include <iostream>
# include <string>


EmailValidator::EmailValidator(std::unique_ptr<IInputValidator> handler)
	:	successor(std::move(handler))
{}


bool EmailValidator::validate(const std::string &input)
{
	if (input.find('@') != std::string::npos)
	{
		std::cout << "Email meets the requirements" << std::endl;
		return true;
	}
	else if (successor != nullptr)
	{
		return (successor->validate(input));
	}
	else
	{
		std::cout << "Email must contain '@' symbol" << std::endl;
		return false;
	}
}