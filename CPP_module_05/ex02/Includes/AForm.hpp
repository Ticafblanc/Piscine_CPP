#pragma once
#include <string>
#include <iostream>

class Bureaucrat;

class AForm
{
public:
	AForm();
	AForm(const std::string& name, bool signe, const unsigned int gradeSign, const unsigned int gradeExec);
	AForm(const AForm& other);

	AForm& operator=(const AForm& rhs);

	virtual ~AForm();

	std::string getName() const;
	bool getSigned() const;
	unsigned int getGradeSign() const;
	unsigned int getGradeExec() const;

	void beSigned(const Bureaucrat& candidate);
	virtual void execute(Bureaucrat const & executor) const = 0;

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

	// class executeException : public std::exception
	// {
	// public:
	// 	const char* what() const throw();
	// };

private:

	std::string		_name;
	bool			_signed;
	unsigned int	_gradeSign;
	unsigned int	_gradeExec;
};

std::ostream& operator<<(std::ostream& o, const AForm& rhs);
std::ostream& operator<<(std::ostream& o, const AForm::SignedException& e);
