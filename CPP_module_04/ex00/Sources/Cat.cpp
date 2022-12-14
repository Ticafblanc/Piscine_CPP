/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:35:27 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/04 13:34:55 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){ std::cout << "Cat(void) constructor called" << std::endl; }

Cat::Cat(std::string type) : Animal(type){ std::cout << "Cat(\"" << type << "\") constructor called" << std::endl; }

Cat::Cat(const Cat& other) : Animal(other){ std::cout << "Cat copy constructor called on " << other._type << std::endl; }

Cat& Cat::operator=(const Cat& rhs)
{
	this->_type = rhs._type;
	return *this;
}

Cat::~Cat(){ std::cout << "Cat destructor called for " << this->_type << std::endl; }

void Cat::makeSound() const{ std::cout << "Meow" << std::endl; }