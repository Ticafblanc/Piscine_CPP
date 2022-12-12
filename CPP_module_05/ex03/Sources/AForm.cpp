/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:03:46 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/12 15:03:46 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("inconu"), _signed(false), _gradeSign(150), _gradeExec(150){}

AForm::AForm(const std::string& name, bool signe, const unsigned int gradeSign, const unsigned int gradeExec)
	: _name(name), _signed(signe), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw AForm::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& other)
	: _name(other._name), _signed(other._signed), _gradeSign(other._gradeSign), _gradeExec(other._gradeExec){}

AForm& AForm::operator=(const AForm& rhs)
{
	this->_name = rhs.getName();
	this->_signed = rhs.getSigned();
	this->_gradeSign = rhs.getGradeSign();
	this->_gradeExec = rhs.getGradeExec();
	return *this;
}

AForm::~AForm(){}

std::string AForm::getName() const{ return this->_name;}

bool AForm::getSigned() const{ return this->_signed;}

unsigned int AForm::getGradeSign() const{ return this->_gradeSign; }

unsigned int AForm::getGradeExec() const{ return this->_gradeExec; }

void AForm::beSigned(const Bureaucrat& candidate) 
{
	try
	{
		if (!this->_signed && candidate.getGrade() <= this->_gradeSign)
		{
			this->_signed = true;
			std::cout << candidate << "\b >>just signed<<\n" << *this << "\n" <<std::endl;
		}	
		else
			throw AForm::SignedException();
	}
	catch(const AForm::SignedException& e)
	{
		AForm::GradeTooLowException lo;

		(this->getSigned() == true) 
			? std::cerr << candidate << "\b signed\n" << *this << "\n" <<std::endl 
			: std::cerr << candidate << "\b couldn’t sign\n" << *this << "because " << lo.what() << "\n" << std::endl;
	}	
}

const char* AForm::GradeTooHighException::what() const throw(){ return ("grade is too high !"); }

const char* AForm::GradeTooLowException::what() const throw(){ return ("grade is too low !"); }

// const char* AForm::executeException::what() const throw()
// { 
// 	return ("grade is too low !"); 
// }

std::ostream& operator<<(std::ostream& o, const AForm& rhs)
{
	std::string  signe = (rhs.getSigned() == true) ? ">>Already signed<<" : ">>To signe<<";
	return o 	<< "Form : " << rhs.getName() << "\n" 
				<< signe << " by grade " << rhs.getGradeSign() << "\n" 
				<< "To execute by grade " << rhs.getGradeExec() << std::endl;

}

