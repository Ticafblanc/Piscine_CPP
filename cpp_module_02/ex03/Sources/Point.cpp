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
#include "Fixed.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0)){}

Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y)){}

Point::Point(Point const & src) : _x(src._x), _y(src._y) {}

Point::~Point(void){}

Point & Point::operator=(Point const & rhs){
	Fixed *X = const_cast <Fixed*> (&this->_x);
	Fixed *Y = const_cast <Fixed*> (&this->_x);
	*X = rhs._x;
	*Y = rhs._y;
	return *this;
}

Fixed const Point::get_X(void) const{ return this->_x; }

Fixed const Point::get_Y(void) const{ return this->_y; }

Point	Point::PromptPoint(void) {
	float f1;
	float f2;

	std::cout << "reference(float) => x : ";
    std::cin >> f1;
	std::cout << "reference(float) => y : ";
    std::cin >> f2;
	Point t(f1, f2);
	std::cout << t.get_X().toFloat()<< " " << t.get_Y().toFloat()<< std::endl;
	return t;
}