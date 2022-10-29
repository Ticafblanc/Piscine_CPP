#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){ std::cout << "Constructor WrongCat(void) called" << std::endl; }

WrongCat::WrongCat(std::string type) : WrongAnimal(type) { std::cout << "Constructor Wrongcat(type) called >> " << type << std::endl; }

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy) { std::cout << "Constructor copy WrongCat called >> " << copy._type << std::endl; }

WrongCat& WrongCat::operator=(const WrongCat& rhs){
	this->_type = rhs._type;
	std::cout << "Operator = Wrongcat called >> " << rhs._type << std::endl;
	return *this;
}

WrongCat::~WrongCat(){ std::cout << "Destructor WrongCat called >> " << this->_type << std::endl; }

void WrongCat::makeSound() const { std::cout << "WrongCat sound" << std::endl; }