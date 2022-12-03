#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat") , _Brain(new(Brain()))
{ std::cout << "Constructor cat (void) called" << std::endl; }

Cat::Cat(std::string type , std::string src[100]) : Animal(type), _Brain(new Brain(src))
{	std::cout << "Constructor cat(type) called >> " << type << std::endl; }

Cat::Cat(const Cat& copy) : Animal(copy) 
{ 
	this->_Brain = new Brain(*copy._Brain)
	std::cout << "Constructor cat copy called >> " << copy._type << std::endl; 
}

Cat& Cat::operator=(const Cat& rhs) {
	this->_type = rhs._type;
	delete this->_Brain;
	*this->_brain = *rhs._Brain;
	std::cout << "Operator = cat called >> " << rhs._type << std::endl;
	return *this;
}

Cat::~Cat() { std::cout << "Destructor cat called >> " << this->_type << std::endl; }

void Cat::makeSound() const { std::cout << "cat sound" << std::endl; }
