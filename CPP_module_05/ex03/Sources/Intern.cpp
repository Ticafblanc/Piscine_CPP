/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:04:02 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/12 15:04:03 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
