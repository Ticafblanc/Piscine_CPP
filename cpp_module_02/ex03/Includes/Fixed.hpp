/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp         			                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:

    	int					_RawBits;
	    static int const	_nb_Bits_fractional;

    public:

	    Fixed(void);
		Fixed(int const in);
		Fixed(float const floa);
		Fixed(Fixed const & rhs);
		~Fixed(void);

        

		bool operator>(Fixed const & rhs) const;		
		bool operator<(Fixed const & rhs) const;	
		bool operator>=(Fixed const & rhs) const;		
		bool operator<=(Fixed const & rhs) const;		
		bool operator==(Fixed const & rhs) const;		
		bool operator!=(Fixed const & rhs) const;		

		Fixed & operator=(Fixed const & rhs);

		Fixed operator+(Fixed const & rhs) const;		
		Fixed operator-(Fixed const & rhs) const;		
		Fixed operator*(Fixed const & rhs) const;	
		Fixed operator/(Fixed const & rhs) const;		

		Fixed & operator++();					
		Fixed & operator--();					
		Fixed operator++(int);				
		Fixed operator--(int);					

		const static Fixed	&	min(Fixed & a, Fixed & b);
		static Fixed const	& min(Fixed const & a, Fixed const & b);
		static Fixed	&	max(Fixed & a, Fixed & b);
		static Fixed const	& max(Fixed const & a, Fixed const & b);

	   
        int		getRawBits(void) const;
    	void	setRawBits(int const raw);

		
		float toFloat(void) const;
		int toInt(void) const;

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif