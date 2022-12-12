#include <string>
#include "AForm.hpp"

class Intern
{
public:
	Intern();

	~Intern();

	class InterneException : public std::exception{};

	AForm* makeForm(const std::string& formName, const std::string& target) const;
};