#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("inconu"), _grade(1){}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other.getName()), _grade(other.getGrade()){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat(){}

void Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

std::string const Bureaucrat::getName() const{ return this->_name; }

unsigned int Bureaucrat::getGrade() const { return this->_grade; }

const char *  Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs){ return o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl; }