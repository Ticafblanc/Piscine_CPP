#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("inconu"), _signed(false), _gradeSign(150), _gradeExec(150){}

Form::Form(const std::string& name, bool signe, const unsigned int gradeSign, const unsigned int gradeExec)
	: _name(name), _signed(signe), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& other)
	: _name(other._name), _signed(other._signed), _gradeSign(other._gradeSign), _gradeExec(other._gradeExec){}

Form& Form::operator=(const Form& rhs)
{
	this->_name = rhs.getName();
	this->_signed = rhs.getSigned();
	this->_gradeSign = rhs.getGradeSign();
	this->_gradeExec = rhs.getGradeExec();
	return *this;
}

Form::~Form(){}

std::string Form::getName() const{ return this->_name;}

bool Form::getSigned() const{ return this->_signed;}

unsigned int Form::getGradeSign() const{ return this->_gradeSign; }

unsigned int Form::getGradeExec() const{ return this->_gradeExec; }

void Form::beSigned(const Bureaucrat& candidate)
{
	try
	{
		if (!this->_signed && candidate.getGrade() <= this->_gradeSign)
		{
			this->_signed = true;
			std::cout << candidate << "\b >>just signed<<\n" << *this << "\n" <<std::endl;
		}
			
		else
			throw Form::SignedException();
	}
	catch(const Form::SignedException& e)
	{
		Form::GradeTooLowException lo;

		(this->getSigned() == true) 
			? std::cerr << candidate << "\b signed\n" << *this << "\n" <<std::endl 
			: std::cerr << candidate << "\b couldn’t sign\n" << *this << "because " << lo.what() << "\n" << std::endl;
	}	
}

const char* Form::GradeTooHighException::what() const throw(){ return ("grade is too high !"); }

const char* Form::GradeTooLowException::what() const throw(){ return ("grade is too low !"); }

std::ostream& operator<<(std::ostream& o, const Form& rhs)
{
	std::string  signe = (rhs.getSigned() == true) ? ">>Already signed<<" : ">>To signe<<";
	return o 	<< "Form : " << rhs.getName() << "\n" 
				<< signe << " by grade " << rhs.getGradeSign() << "\n" 
				<< "To execute by grade " << rhs.getGradeExec() << std::endl;

}

