#include <string>
#include <iostream>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string const name, unsigned int grade);
	Bureaucrat(const Bureaucrat& other);

	Bureaucrat& operator=(const Bureaucrat& rhs);

	~Bureaucrat();

	std::string const getName() const;
	unsigned int getGrade() const;
	
	class GradeTooHighException : public std::exception
	{
	public:
		const char * what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char * what() const throw();
	};

	void incrementGrade();
	void decrementGrade();

private:

	std::string	_name;
	unsigned int		_grade;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);