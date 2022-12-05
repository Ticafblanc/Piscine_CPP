/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:35:09 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/04 14:16:10 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal"){ std::cout << "Animal(void) constructor called" << std::endl; }

Animal::Animal(std::string type) : _type(type){ std::cout << "Animal(\"" << type << "\") constructor called" << std::endl; }

Animal::Animal(const Animal& other) : _type(other._type){ std::cout << "Animal copy constructor called on " << other._type << std::endl; }

Animal& Animal::operator=(const Animal& rhs)
{
	this->_type = rhs._type;
	std::cout << "Animal overload = called for " << this->_type << std::endl;
	return *this;
}

Animal::~Animal(){ std::cout << "Animal destructor called for " << this->_type << std::endl; }

void Animal::makeSound() const { std::cout << "Default animal sound" << std::endl; }

std::string Animal::getType() const { return this->_type; }
