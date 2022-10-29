#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Constructor Brain(void) called" << std::endl;
}

Brain::Brain(std::string src[100]){
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = scr[i];
	std::cout << "Constructor Brain (non-void) called >> " << std::endl; 	
}

Brain::Brain(const Brain& copy){
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	std::cout << "constructor Brain copy called" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs){
	std::cout << "Operator = Brain called >> "<< std::endl; 
	//if (this != &rhs)
	//{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	//}
	return *this;
}

Brain::~Brain(){ std::cout << "Destructor Brain called" << std::endl; }

