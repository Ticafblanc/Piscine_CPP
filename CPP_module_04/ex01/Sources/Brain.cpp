#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Constructor Brain(void) called" << std::endl;
}

Brain::Brain(std::string src[100]){
	for (int i = 0; i < 100 && scr[i]; i++)
	{
		this->ideas[i] = scr[i];
		std::out << "Ideas numbers " << i << " stored" << std::endl;
	}
	std::cout << "Constructor Brain (non-void) called >> " << std::endl; 	
}

Brain::Brain(const Brain& copy){
	for (int i = 0; i < 100 && copy.ideas[i]; i++)
		this->ideas[i] = copy.ideas[i];
	std::cout << "constructor Brain copy called" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs){
	std::cout << "Operator = Brain called >> "<< std::endl; 
	for (int i = 0; i < 100 && rhs.ideas[i]; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

Brain::~Brain(){ std::cout << "Destructor Brain called" << std::endl; }

