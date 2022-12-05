/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:35:09 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/04 20:06:57 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

A_Animal::A_Animal() : _type("A_Animal"){ std::cout << "A_Animal(void) constructor called" << std::endl; }

A_Animal::A_Animal(std::string type) : _type(type){ std::cout << "A_Animal(\"" << type << "\") constructor called" << std::endl; }

A_Animal::A_Animal(const A_Animal& other) : _type(other._type){ std::cout << "A_Animal copy constructor called on " << other._type << std::endl; }

A_Animal& A_Animal::operator=(const A_Animal& rhs)
{
	this->_type = rhs._type;
	std::cout << "Animal overload = called for " << this->_type << std::endl;
	return *this;
}

A_Animal::~A_Animal(){ std::cout << "Animal destructor called for " << this->_type << std::endl; }

void A_Animal::makeSound() const { std::cout << "Default animal sound" << std::endl; }

std::string A_Animal::getType() const { return this->_type; }
