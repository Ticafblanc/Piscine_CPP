/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp         					                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"


class Point
{
	private:

		Fixed const _x;
		Fixed const _y;	

	public:

		Point(void);
		Point(const float x, const float y);
		Point(const Point& copy);
		~Point(void);


		Point& operator=(const Point& rhs);

		Fixed const getX(void) const;
		Fixed const getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif