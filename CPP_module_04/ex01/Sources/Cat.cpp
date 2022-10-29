#include "Cat.hpp"

Cat::Cat() : Animal("Cat") { std::cout << "Constructor cat (void) called" << std::endl; }

Cat::Cat(std::string type) : Animal(type) {	std::cout << "Constructor cat(type) called >> " << type << std::endl; }

Cat::Cat(const Cat& copy) : Animal(copy) { std::cout << "Constructor cat copy called >> " << copy._type << std::endl; }

Cat& Cat::operator=(const Cat& rhs) {
	this->_type = rhs._type;
	std::cout << "Operator = cat called >> " << rhs._type << std::endl;
	return *this;
}

Cat::~Cat() { std::cout << "Destructor cat called >> " << this->_type << std::endl; }

void Cat::makeSound() const { std::cout << "cat sound" << std::endl; }