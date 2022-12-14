/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:33:57 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/04 13:34:43 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){ std::cout << "Dog(void) constructor called" << std::endl; }

Dog::Dog(std::string type) : Animal(type){ std::cout << "Dog(\"" << type << "\") constructor called" << std::endl; }

Dog::Dog(const Dog& other) : Animal(other){ std::cout << "Dog copy constructor called on " << other._type << std::endl; }

Dog& Dog::operator=(const Dog& rhs)
{
	this->_type = rhs._type;
	return *this;
}

Dog::~Dog(){ std::cout << "Dog destructor called for " << this->_type << std::endl; }

void Dog::makeSound() const{ std::cout << "Bark" << std::endl; }