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

#include "Fixed.class.hpp"

int const Fixed::_nb_Bits_fractional = 8;

Fixed::Fixed(void) : _RawBits(0){
	
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & rhs){
	
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed &	Fixed::operator=(Fixed const & rhs){

	std::cout << "Copy assignment operator called" << std::endl;
	this->_RawBits = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed(){

	std::cout << "Destructor called" << std::endl;

}

int	Fixed::getRawBits(void) const{

	std::cout << "getRawBits member function called" << std::endl;
	return this->_RawBits;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_RawBits = raw;
}

Fixed::Fixed(int const in){

	std::cout << "Int constructor called" << std::endl;
	this->_RawBits = (in << _nb_Bits_fractional);
}

Fixed::Fixed(float const floa){

	std::cout << "Float constructor called" << std::endl;
	this->_RawBits = int(roundf(floa * (1 << _nb_Bits_fractional)));
}

float Fixed::toFloat( void ) const
{
	return float (this->_RawBits) / (1 << _nb_Bits_fractional);
}

int Fixed::toInt( void ) const
{
	return this->_RawBits >> _nb_Bits_fractional;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
