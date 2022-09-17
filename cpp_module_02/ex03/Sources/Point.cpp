/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0)){}

Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y)){}

Point::Point(Point const & src){ *this = src }

Point::~Point(void){}

Point & Point::operator=(Point const & rhs){

	if (this != &rhs)
	{
		this->_x = rhs.getX();
		this->_x = rhs.getX();
	}
	return *this;
}

Fixed const Point::getX(void) const{ return this->_x; }

Fixed const Point::getY(void) const{ return this->_y; }