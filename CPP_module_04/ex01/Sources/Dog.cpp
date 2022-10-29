#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){ std::cout << "Constructor Dog(void) called" << std::endl; }

Dog::Dog(std::string type) : Animal(type) {	std::cout << "Constructor Dog(type) called >> " << type << std::endl; }

Dog::Dog(const Dog& copy) : Animal(copy) { std::cout << "Constructor dog copy called >> " << copy._type << std::endl; }

Dog& Dog::operator=(const Dog& rhs){
	this->_type = rhs._type;
	std::cout << "Operator = Dog called >> " << rhs._type << std::endl;
	return *this;
}

Dog::~Dog(){ std::cout << "Destructor  dog called >> " << this->_type << std::endl; }

void Dog::makeSound() const { std::cout << "Dog sound" << std::endl; }