/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:04:38 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/12 15:04:39 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", false, 145, 137), _targetname("<no_target>")
{
  	std::ofstream	_target(this->_targetname);
	if (!_target.is_open())
		throw std::ofstream::failure(strerror(errno));
	_target.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreationForm", false, 145, 137), _targetname(target)
{
	std::ofstream	_target(this->_targetname);
	if (!_target.is_open())
		throw std::ofstream::failure(strerror(errno));
	_target.close();	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: AForm(other), _targetname(other._targetname){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	this->AForm::operator=(rhs);
	this->_targetname = rhs._targetname;
	return *this;
}

std::string&  ShrubberyCreationForm::getarget() { return this->_targetname;}

ShrubberyCreationForm::~ShrubberyCreationForm(){ remove(this->_targetname.c_str());}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->AForm::getSigned() && executor.getGrade() <= this->AForm::getGradeExec())
	{
		std::ofstream	_target(this->_targetname);
		if (!_target.is_open())
			throw std::ofstream::failure(strerror(errno));
	

		_target << "               ,@@@@@@@," << std::endl;
		_target << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		_target << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
		_target << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		_target << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		_target << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		_target << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
		_target << "       |o|        | |         | |" << std::endl;
		_target << "       |.|        | |         | |" << std::endl;
		_target << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
		_target.close();
	}
	else
		throw Bureaucrat::executeException();
	
}