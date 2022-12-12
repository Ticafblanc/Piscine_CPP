#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& other);

	RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);

	~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;
	std::string&  getarget();

private:
	std::string		_targetname;

};