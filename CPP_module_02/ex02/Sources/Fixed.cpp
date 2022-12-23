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

Fixed::Fixed(void) : _RawBits(0){}

Fixed::Fixed(Fixed const & rhs){ *this = rhs; }

Fixed &	Fixed::operator=(Fixed const & rhs){ this->_RawBits = rhs.getRawBits(); return *this; }

Fixed::~Fixed(){}

int	Fixed::getRawBits(void) const{ return this->_RawBits; }

void	Fixed::setRawBits(int const raw){ this->_RawBits = raw; }

Fixed::Fixed(int const in){ this->_RawBits = (in << _nb_Bits_fractional); }

Fixed::Fixed(float const floa){ this->_RawBits = int(roundf(floa * (1 << _nb_Bits_fractional))); }

float Fixed::toFloat( void ) const{ return float (this->_RawBits) / (1 << _nb_Bits_fractional);}

int Fixed::toInt( void ) const { return this->_RawBits >> _nb_Bits_fractional; }

std::ostream & operator<<(std::ostream & o, Fixed const & rhs){	return o << rhs.toFloat(); }

Fixed	Fixed::operator*(Fixed const & rhs) const{ return toFloat() * rhs.toFloat(); }

Fixed	Fixed::operator+(Fixed const & rhs) const { return toFloat() + rhs.toFloat(); }

Fixed	Fixed::operator-(Fixed const & rhs) const { return toFloat() - rhs.toFloat(); }

Fixed	Fixed::operator/(Fixed const & rhs) const {	return toFloat() / rhs.toFloat(); }

Fixed & Fixed::operator++(void) { this->_RawBits++; return *this; }

Fixed	Fixed::operator++(int) { Fixed	tmp (*this); this->_RawBits++; return tmp; }

Fixed & Fixed::operator--(void) { this->_RawBits--; return *this; }

Fixed	Fixed::operator--(int) { Fixed	tmp (*this); this->_RawBits--; return tmp; }

bool	Fixed::operator<(Fixed const & rhs) const { return toFloat() < rhs.toFloat(); }

bool	Fixed::operator>(Fixed const & rhs) const { return toFloat() > rhs.toFloat(); }

bool	Fixed::operator<=(Fixed const & rhs) const { return toFloat() <= rhs.toFloat(); }

bool	Fixed::operator>=(Fixed const & rhs) const { return toFloat() >= rhs.toFloat(); }

bool	Fixed::operator==(Fixed const & rhs) const { return toFloat() == rhs.toFloat(); }

bool	Fixed::operator!=(Fixed const & rhs) const { return toFloat() != rhs.toFloat(); }

const Fixed	&	Fixed::min(Fixed & a, Fixed & b) { return (a.toFloat() < b.toFloat()) ? a : b; }

Fixed const	&	Fixed::min(Fixed const & a, Fixed const & b) { return (a.toFloat() < b.toFloat()) ? a : b; }

Fixed&	Fixed::max(Fixed & a, Fixed & b){ return (a.toFloat() > b.toFloat()) ? a : b; }

Fixed const	&	Fixed::max(Fixed const & a, Fixed const & b){ return (a.toFloat() > b.toFloat()) ? a : b; }