/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:35:43 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/04 17:42:07 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Brain.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"), _Brain(new Brain()){ std::cout << "WrongCat(void) constructor called" << std::endl; }

WrongCat::WrongCat(std::string type, std::string src[100]) : WrongAnimal("WrongCat"), _Brain(new Brain(src)){ std::cout << "WrongCat(\"" << type << "\") constructor called" << std::endl; }

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other), _Brain(new Brain(other.get_Brain())){ std::cout << "WrongCat copy constructor called on " << other._type << std::endl; }

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	this->_type = rhs._type;
	delete this->_Brain;
	this->_Brain = new Brain(rhs.get_Brain());
	return *this;
}

WrongCat::~WrongCat()
{
	delete this->_Brain;
	std::cout << "WrongCat destructor called for " << this->_type << std::endl; 
}

void WrongCat::makeSound() const { std::cout << "Wrong Meow" << std::endl; }

Brain & WrongCat::get_Brain() const { return *this->_Brain; }