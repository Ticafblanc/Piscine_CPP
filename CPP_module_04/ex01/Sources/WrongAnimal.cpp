#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("wrongAnimal") { std::cout << "Constructor WrongAnimal(void) called" << std::endl; }

WrongAnimal::WrongAnimal(std::string type) : _type(type) {  std::cout << "Constructor WrongAnimal (Type) called >> " << type << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal& copy) : _type(copy._type) { std::cout << "Constructor WrongAnimal copy called >> " << copy._type << std::endl; }

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs){
	this->_type = rhs._type;
	std::cout << "Operator = WrongAnimal called >> " << rhs._type << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal(){ std::cout << "Destructor WrongAnimal called >> " << this->_type << std::endl; }

void WrongAnimal::makeSound() const { std::cout << "WrongAnimal sound" << std::endl; }

std::string WrongAnimal::getType() const { return this->_type; }
