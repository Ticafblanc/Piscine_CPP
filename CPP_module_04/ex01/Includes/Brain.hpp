#pragma once
#include <iostream>

class Brain
{
public:
	Brain();
	Brain(const Brain& copy);
	Brain& operator=(const Brain& rhs);
	~Brain();
	
private:
	std::string _ideas[100];
};
