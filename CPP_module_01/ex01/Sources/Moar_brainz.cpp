/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Moar_brainz.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Moar_brainz.hpp"
#include "Zombie.class.hpp"

int		main(void)
{
	std::string		number;
	std::string		name;

	std::cout << "number of Zombie >" ;
	std::getline(std::cin, number);
	std::cout << "name of Zombie >" ;
	std::getline(std::cin, name);

	Zombie *new_Zombie = zombieHorde( std::atoi(number.c_str()), name );
	
	for(int i = 0; i < std::atoi(number.c_str()); i++)
	new_Zombie->announce();
	delete []new_Zombie;
}
	
