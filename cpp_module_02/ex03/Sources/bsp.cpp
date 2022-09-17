/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Maintenant_on_peut_parler.cpp                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float sign(Point const point, Point const a, Point const b)
{
	return ((point.getX().toFloat() - b.getX().toFloat()) * (a.getY().toFloat() - b.getY().toFloat()) - (a.getX().toFloat() - b.getX().toFloat()) * (point.getY().toFloat() - b.getY().toFloat()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float d1, d2, d3;
	bool has_neg, has_pos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	has_neg = d1 < 0 || d2 < 0 || d3 < 0;
	has_pos = d1 > 0 || d2 > 0 || d3 > 0;

	return !(has_neg && has_pos);
}
