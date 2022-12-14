/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_nb_Bits_fractional = 8;

Fixed::Fixed(void) : _RawBits(0){ std::cout << "Default constructor called" << std::endl;}

Fixed::Fixed(Fixed const & rhs){ *this = rhs; std::cout << "Copy constructor called" << std::endl; }

Fixed &	Fixed::operator=(Fixed const & rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_RawBits = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed(){ std::cout << "Destructor called" << std::endl; }

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_RawBits;
}

void	Fixed::setRawBits(int const raw){ 
	this->_RawBits = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

Fixed::Fixed(int const in){ 
	this->_RawBits = (in << _nb_Bits_fractional);
	std::cout << "Int constructor called" << std::endl; 
}

Fixed::Fixed(float const floa){ 
	this->_RawBits = int(roundf(floa * (1 << _nb_Bits_fractional)));
	std::cout << "Float constructor called" << std::endl; 
}

float Fixed::toFloat( void ) const{ return float (this->_RawBits) / (1 << _nb_Bits_fractional);}

int Fixed::toInt( void ) const { return this->_RawBits >> _nb_Bits_fractional; }

std::ostream & operator<<(std::ostream & o, Fixed const & rhs){	return o << rhs.toFloat(); }
