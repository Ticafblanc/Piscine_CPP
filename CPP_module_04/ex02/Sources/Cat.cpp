/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:35:27 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/04 20:01:01 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : A_Animal("Cat") , _Brain(new Brain()){ std::cout << "Cat(void) constructor called" << std::endl; }

Cat::Cat(std::string type , std::string src[100]) : A_Animal(type), _Brain(new Brain(src)){ std::cout << "Cat(\"" << type << "\") constructor called" << std::endl; }

Cat::Cat(const Cat& copy) : A_Animal(copy), _Brain(new Brain(copy.get_Brain()))
{
	std::cout << "Cat copy constructor called on " << copy._type << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	this->_type = rhs._type;
	delete this->_Brain;
	this->_Brain = new Brain(rhs.get_Brain());
	return *this;
}

Cat::~Cat()
{
	delete this->_Brain;
	std::cout << "Cat destructor called for " << this->_type << std::endl; 
}

void Cat::makeSound() const{ std::cout << "Meow" << std::endl; }

Brain & Cat::get_Brain() const { return *this->_Brain; }