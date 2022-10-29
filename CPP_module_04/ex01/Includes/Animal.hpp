#pragma once
#include <iostream>

class Animal{
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& copy);
	Animal& operator=(const Animal& rhs);
	virtual ~Animal();

	std::string getType() const;
	virtual void makeSound() const;

protected:
	std::string _type;
};
