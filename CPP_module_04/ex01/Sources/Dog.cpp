/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:33:57 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/04 18:49:25 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog") , _Brain (new Brain()) { std::cout << "Dog(void) constructor called" << std::endl; }

Dog::Dog(std::string type, std::string src[100]) : Animal(type), _Brain(new Brain(src)){ std::cout << "Dog(\"" << type << "\") constructor called" << std::endl; }

Dog::Dog(const Dog& copy) : Animal(copy), _Brain(new Brain(copy.get_Brain()))
{ 
	std::cout << "Dog copy constructor called on " << copy._type << std::endl; 
}

Dog& Dog::operator=(const Dog& rhs)
{
	this->_type = rhs._type;
	delete this->_Brain;
	this->_Brain = new Brain(rhs.get_Brain());
	return *this;
}

Dog::~Dog()
{ 
	delete this->_Brain;
	std::cout << "Dog destructor called for " << this->_type << std::endl; 
}

void Dog::makeSound() const{ std::cout << "Bark" << std::endl; }

Brain & Dog::get_Brain() const { return *this->_Brain; }