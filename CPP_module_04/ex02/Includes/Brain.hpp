#pragma once
#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const std::string src[100]);
		Brain(const Brain& copy);
		Brain& operator=(const Brain& rhs);
		~Brain();
	
		std::string ideas[100];
};
