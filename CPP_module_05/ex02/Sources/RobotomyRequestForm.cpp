#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("<no_target>_RobotomyRequestForm", false, 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm(target + "_RobotomyRequestForm", false, 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other), _targetname(other._targetname){}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	this->AForm::operator=(rhs);
	this->_targetname = rhs._targetname;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->AForm::getSigned() && executor.getGrade() <= this->AForm::getGradeExec())
	{
		std::cout << "Makes some drilling noises" << std::endl;
		system("say riuoa riuoa riuoa riuoa riuoa riuoa riuoa riuoa riuoa riuoa riuoa riuoa riuoa riuoa riuoa riuoa riuoa riuoa");
		if (rand() % 2)
			std::cout << this->_targetname << " as been robotomized successfully !!" << std::endl;
		else
			std::cout << this->_targetname << " operation failed !!" << std::endl;
	}
	else
		throw Bureaucrat::executeException();
}