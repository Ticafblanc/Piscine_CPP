#include <string>
#include <iostream>

class AForm;

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

	class executeException : public std::exception
	{
	public:
		void whats(Bureaucrat& b, const AForm& F) const throw();
	};

	void incrementGrade();
	void decrementGrade();
	void executeForm(AForm const & form);

private:

	std::string	_name;
	unsigned int		_grade;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);