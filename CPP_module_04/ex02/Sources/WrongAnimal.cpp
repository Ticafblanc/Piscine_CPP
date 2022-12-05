/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:35:39 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/04 09:35:40 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){ std::cout << "WrongAnimal(void) constructor called" << std::endl; }

WrongAnimal::WrongAnimal(std::string type) : _type("WrongAnimal"){ std::cout << "WrongAnimal(\"" << type << "\") constructor called" << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type){ std::cout << "WrongAnimal copy constructor called on " << other._type << std::endl; }

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	this->_type = rhs._type;
	return *this;
}

WrongAnimal::~WrongAnimal(){ std::cout << "WrongAnimal destructor called for " << this->_type << std::endl; }

void WrongAnimal::makeSound() const{ std::cout << "Default WrongAnimal sound" << std::endl; }

std::string WrongAnimal::getType() const{ return this->_type; }