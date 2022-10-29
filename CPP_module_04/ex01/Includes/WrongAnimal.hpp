#pragma once
#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& copy);
	WrongAnimal& operator=(const WrongAnimal& rhs);
	virtual ~WrongAnimal();

	std::string getType() const;
	void makeSound() const;

protected:

	std::string _type;
};