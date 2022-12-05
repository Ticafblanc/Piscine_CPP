#pragma once
#include <iostream>

class A_Animal{
public:
	A_Animal();
	A_Animal(std::string type);
	A_Animal(const A_Animal& copy);
	A_Animal& operator=(const A_Animal& rhs);
	virtual ~A_Animal();

	std::string getType() const;
	virtual void makeSound() const = 0;

protected:
	std::string _type;
};
