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
class Point{
	private:

		Fixed const _x;
		Fixed const _y;	

	public:

		Point(void);
		Point(const float x, const float y);
		Point(const Point& copy);
		Point& operator=(const Point& rhs);
		~Point(void);

		Fixed const get_X(void) const;
		Fixed const get_Y(void) const;

		Point static PromptPoint(void);
};



#endif