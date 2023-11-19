# include <iostream>
# include <string>
# include "AgeValidator.hpp"

AgeValidator::AgeValidator(std::unique_ptr<IInputValidator> handler)
	:	successor(std::move(handler))
{}



bool AgeValidator::validate(const std::string &input)
{
	try 
	{
		int age = std::stoi(input);
		if (age >= 18) 
		{
			std::cout << "Age is valid" << std::endl;
			return true;
		} 
	} 
	catch (const std::invalid_argument& e) 
	{
		if (successor != nullptr)
		{
			return successor->validate(input);
		}
		else 
		{
			std::cout << "Age must be 18 or older" << std::endl;;
			return false;
		}
	}
	std::cout << "Invalid age format" << std::endl;
	// std::cout << e.what() << std::endl;
	return false;
}