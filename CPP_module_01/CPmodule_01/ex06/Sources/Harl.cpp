/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::complain(int	level){

	std::string levels[4] = { "INFO", "DEBUG", "WARNING", "ERROR" };
	void (Harl::*f[4])(void) = { &Harl::info, &Harl::debug, &Harl::warning, &Harl::error };
	for (int i = level; i < 4; i++)
	{
		std::cout << levels[i] << std::endl;
		(this->*f[i])();
		std::cout << std::endl;
	}

	// std::map<int, void (Harl:: *)()>		m;
	// m[1] = &Harl::info;
    // m[2] = &Harl::debug;
    // m[3] = &Harl::warning;
    // m[4] = &Harl::error;
	// std::map<int, std::string>    m2;
    // m2[1] = "[INFO]";
    // m2[2] = "[DEBUG]";
    // m2[3] = "[WARNING]";
    // m2[4] = "[ERROR]";
	// while (level < 5)
	// {
	// 	std::cout << m2[level] << std::endl;
	// 	(this->*m[level++])();
	// 	std::cout << std::endl;
	// }
}

void Harl::debug(void){

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info(void){

	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){

	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void){

	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

