#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

AForm* Intern::makeForm(const std::string& FormName, const std::string& target) const
{
	if (FormName == "ShrubberyCreationForm")
	{
		std::cout << "Intern creates " << FormName << std::endl;
		return new ShrubberyCreationForm(target);
	}
	else if (FormName == "RobotomyRequestForm")
	{
		std::cout << "Intern creates " << FormName << std::endl;
		return new RobotomyRequestForm(target);
	}
	else if (FormName == "PresidentialPardonForm")
	{
		std::cout << "Intern creates " << FormName << std::endl;
		return new PresidentialPardonForm(target);
	}
	else
		throw Intern::InterneException();
	
}