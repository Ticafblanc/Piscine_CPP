#include "AForm.hpp"

class Bureaucrate;

class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);

	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);

	~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;

private:
	std::string		_targetname;
	
};