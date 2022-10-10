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
#include "Fixed.hpp"

float	fuck_bsp(Point const v1, Point const v2, Point const p){ return ((v1.get_X().toFloat() - p.get_X().toFloat()) * (v2.get_Y().toFloat() - p.get_Y().toFloat()) - (v1.get_Y().toFloat()- p.get_Y().toFloat()) * (v2.get_X().toFloat()- p.get_X().toFloat())); }

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float prod_vec_1, prod_vec_2, prod_vec_3;

	prod_vec_1 = fuck_bsp(a, b, point);
	prod_vec_2 = fuck_bsp(b, c, point);
	prod_vec_3 = fuck_bsp(c, a, point);

	return ((prod_vec_1 > 0 && prod_vec_2 > 0 && prod_vec_3 > 0) || (prod_vec_1 < 0 && prod_vec_2 < 0 && prod_vec_3 < 0)) ? true : false;
}
//a(1.f, 1.f);
//b(4.f, 1.f);
//c(2.5f, 3.f);
//p(2.f, 2.f)
int main( void ) {
	
	std::cout << "enter vector a :";
	const Point a(Point::PromptPoint());
	std::cout << "enter vector b :";
	const Point b(Point::PromptPoint());
	std::cout << "enter vector c :";
	const Point c(Point::PromptPoint());
	std::cout << "enter vector point :";
	const Point point(Point::PromptPoint());

	std::cout << (bsp(a, b, c, point) ? "Good" : "Bad") << std::endl;
	
}

