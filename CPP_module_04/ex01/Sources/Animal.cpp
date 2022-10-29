#include "Animal.hpp"

Animal::Animal() : _type("Animal"){ std::cout << "Constructor Animal(void) called" << std::endl; }

Animal::Animal(std::string type) : _type(type) { std::cout << "Constructor Animal (Type) called >> "<< type << std::endl; }

Animal::Animal(const Animal& copy) : _type(copy._type) { std::cout << "Constructor copy called >> " << copy._type << std::endl; }

Animal& Animal::operator=(const Animal& rhs) {
	this->_type = rhs._type;
	std::cout << "Operator = Animal called >> " << rhs._type << std::endl;
	return *this;
}

Animal::~Animal(){ std::cout << "Destructor Animal called >> " << this->_type << std::endl; }

void Animal::makeSound() const{ std::cout << "Animal sound" << std::endl; }

std::string Animal::getType() const { return this->_type; }
