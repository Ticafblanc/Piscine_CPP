#pragma once
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
public:
	Form();
	Form(const std::string& name, bool signe, const unsigned int gradeSign, const unsigned int gradeExec);
	Form(const Form& other);

	Form& operator=(const Form& rhs);

	~Form();

	std::string getName() const;
	bool getSigned() const;
	unsigned int getGradeSign() const;
	unsigned int getGradeExec() const;

	void beSigned(const Bureaucrat& candidate);

	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();	
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	class SignedException : public std::exception{};

private:

	std::string		_name;
	bool			_signed;
	unsigned int	_gradeSign;
	unsigned int	_gradeExec;
};

std::ostream& operator<<(std::ostream& o, const Form& rhs);
std::ostream& operator<<(std::ostream& o, const Form::SignedException& e);
