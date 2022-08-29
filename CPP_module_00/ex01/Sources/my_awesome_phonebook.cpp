/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <random>
#include <string>
#include <iostream>
#include "my_awesome_phonebook.class.hpp"

int		main(void){

	Phonebook	repertoire;
	std::string	input;

	std::cout << "My awesome phonebook is open" << std::endl;
	while (input != "EXIT")
	{
		std::cout << "enter your command: ";
		std::getline(std::cin, input);
		if (input == "SEARCH")
			repertoire.search();
		else if(input == "ADD")
			repertoire.add();
		else if (input == "EXIT")
			break;
		else
		{
			std::cout << "command invalide !!" << std::endl;
			std::cout << "usage: \tSEARCH to browse your contacts," << std::endl
				<< "\tADD to add one, " << std::endl
				<< "\tEXIT to leave" << std::endl;
		}
		repertoire.print(-1);
	}
	std::cout << "My awesome phonebook is close" << std::endl;
}
