#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _Brain(new Brain())
{ std::cout << "Constructor Dog(void) called" << std::endl; }

Dog::Dog(std::string type, std::string src[100]) : Animal(type), _Brain(new Brain(src))
{	std::cout << "Constructor Dog(type) called >> " << type << std::endl; }

Dog::Dog(const Dog& copy) : Animal(copy) 
{ 
	this->_Brain = new Brain(*copy._Brain);
	std::cout << "Constructor dog copy called >> " << copy._type << std::endl; 
}

Dog& Dog::operator=(const Dog& rhs){
	this->_type = rhs._type;
	delete this->_Brain;
	*this->_brain = *rhs._Brain;
	std::cout << "Operator = dog called >> " << rhs._type << std::endl;
	return *this;
}

Dog::~Dog(){ std::cout << "Destructor  dog called >> " << this->_type << std::endl; }

void Dog::makeSound() const { std::cout << "Dog sound" << std::endl; }
