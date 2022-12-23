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

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

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
	    Fixed(Fixed const & rhs);
        Fixed & operator=(Fixed const & rhs);
	    ~Fixed();
        int		getRawBits(void) const;
    	void	setRawBits(int const raw);

		Fixed(int const in);
		Fixed(float const floa);
		float toFloat(void) const;
		int toInt(void) const;

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif