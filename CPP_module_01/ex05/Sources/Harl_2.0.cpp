/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl_2.0.cpp          			                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"
#include "Harl_2.0.hpp"


int main(void)
{
	std::string	cpl;
	Harl	harl;

	while (1)
	{
		std::cout << "Harl complain > ";
		std::getline(std::cin, cpl);
		if (cpl == "EXIT")
			break;
		if (cpl == "INFO" || cpl == "DEBUG" || cpl == "WARNING" || cpl == "ERROR")
			harl.complain(cpl);
	}
	return 0;
}
	