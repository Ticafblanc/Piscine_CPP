/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:04:22 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/12 15:04:23 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardonForm", false, 25, 5), _targetname("<no_target>"){}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("PresidentialPardonForm", false, 25, 5), _targetname(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
	: AForm(other),  _targetname(other._targetname){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	this->AForm::operator=(rhs);
	this->_targetname = rhs._targetname;
	return *this;
}

std::string&  PresidentialPardonForm::getarget() { return this->_targetname;}

PresidentialPardonForm::~PresidentialPardonForm(){}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->AForm::getSigned() && executor.getGrade() <= this->AForm::getGradeExec())
	{
		std::cout << "\n\t\t"<< this->_targetname << " has have been forgiven!!!\n" << std::endl;
		std::cout << "______              _     _            _   _       _  ______             _             " << std::endl;
		std::cout << "| ___ \\            (_)   | |          | | (_)     | | | ___ \\           | |            " << std::endl;
		std::cout << "| |_/ / __ ___  ___ _  __| | ___ _ __ | |_ _  __ _| | | |_/ /_ _ _ __ __| | ___  _ __  " << std::endl;
		std::cout << "|  __/ '__/ _ \\/ __| |/ _` |/ _ \\ '_ \\| __| |/ _` | | |  __/ _` | '__/ _` |/ _ \\| '_ \\ " << std::endl;
		std::cout << "| |  | | |  __/\\__ \\ | (_| |  __/ | | | |_| | (_| | | | | | (_| | | | (_| | (_) | | | |" << std::endl;
		std::cout << "\\_|  |_|  \\___||___/_|\\__,_|\\___|_| |_|\\__|_|\\__,_|_| \\_|  \\__,_|_|  \\__,_|\\___/|_| |_|" << "\n" << std::endl;
	
		std::cout << "									______       	" << std::endl;
		std::cout << "									| ___ \\     	" << std::endl; 
		std::cout << "									| |_/ /_   _ 	" << std::endl;
		std::cout << "									| ___ \\ | | |	" << std::endl;
		std::cout << "									| |_/ / |_| |	" << std::endl;
		std::cout << "									\\____/ \\__, |	" << std::endl;
		std::cout << "									        __/ |	" << std::endl;
		std::cout << "									       |___/ 	" << "\n" << std::endl;	

		std::cout << " ______            _               _  ______           _     _      _                    " << std::endl;
		std::cout << "|___  /           | |             | | | ___ \\         | |   | |    | |                   " << std::endl;
		std::cout << "   / /  __ _ _ __ | |__   ___   __| | | |_/ / ___  ___| |__ | | ___| |__  _ __ _____  __ " << std::endl;
		std::cout << "  / /  / _` | '_ \\| '_ \\ / _ \\ / _` | | ___ \\/ _ \\/ _ \\ '_ \\| |/ _ \\ '_ \\| '__/ _ \\ \\/ / " << std::endl;
		std::cout << "./ /__| (_| | |_) | | | | (_) | (_| | | |_/ /  __/  __/ |_) | |  __/ |_) | | | (_) >  <  " << std::endl;
		std::cout << "\\_____/\\__,_| .__/|_| |_|\\___/ \\__,_| \\____/ \\___|\\___|_.__/|_|\\___|_.__/|_|  \\___/_/\\_\\ " << std::endl;
		std::cout << "            | |                                                                          " << std::endl;
		std::cout << "            |_|   																	   " << std::endl;
	
	
	
	
	}
	else
		throw Bureaucrat::executeException();
}