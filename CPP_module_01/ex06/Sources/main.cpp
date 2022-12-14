/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl_filter.cpp      			                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	
	std::string	cpl(argv[1]);
	if (cpl == "INFO" || cpl == "DEBUG" || cpl == "WARNING" || cpl == "ERROR")
	{

		Harl	harl;

		std::string levels[4] = { "INFO", "DEBUG", "WARNING", "ERROR" };
		for (int i = 0; i < 4; i++)
		{
			if (levels[i] == cpl)
				harl.complain(i);
		}
		// std::map<std::string, int>    m;
   		// m["INFO"] = 1;
    	// m["DEBUG"] = 2;
   		// m["WARNING"] = 3;
    	// m["ERROR"] = 4;
		// harl.complain(m[argv[1]]);
	}
	return 0;
}
	