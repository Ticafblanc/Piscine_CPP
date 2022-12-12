#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& other);

	PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);

	~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;

private:
	std::string		_targetname;	
};