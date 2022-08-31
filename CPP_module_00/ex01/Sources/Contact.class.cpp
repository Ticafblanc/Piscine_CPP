/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void		Contact::print(int id){

	int		e;

	e = 0;
	std::cout << "|";
	std::cout.fill(' ');
	std::cout.width(10);
	std::cout << std::right << id + 1 << "|";
	while (e < 5)
	{
		std::string str(this->_contact[e]);
		unsigned sz = str.size();
		if (sz > 10)
		{
			str.resize(9);
			str.resize(10, '.');
		}
		std::cout.fill(' ');
		std::cout.width(10);
		std::cout << std::right << str << "|";
		e++;
	}
	std::cout << std::endl;
}

static int		check_input(const char *input){

	for (int i=0; i<(int)std::strlen(input); i++)
    {
        if (!isspace(input[i]))
        	return (0);
   	}
	return (1);
}

void	Contact::add(void){

	this->_contact[FIRST_NAME] = " ";
	while (check_input(this->_contact[FIRST_NAME].c_str()))
	{
		std::cout << "First name: ";
		getline(std::cin, this->_contact[FIRST_NAME]);
	}
	this->_contact[LAST_NAME] = " ";
	while (check_input(this->_contact[LAST_NAME].c_str()))
	{
		std::cout << "Last name: ";
		getline(std::cin, this->_contact[LAST_NAME]);
	}
	this->_contact[NICKNAME] = " ";
	while (check_input(this->_contact[NICKNAME].c_str()))
	{
		std::cout << "Nickname: ";
		getline(std::cin, this->_contact[NICKNAME]);
	}
	this->_contact[PHONE_NUMBER] = " ";
	while (check_input(this->_contact[PHONE_NUMBER].c_str()))
	{
		std::cout << "Phone number: ";
		getline(std::cin, this->_contact[PHONE_NUMBER]);
	}
	this->_contact[DARKEST_SECRET] = " ";
	while (check_input(this->_contact[DARKEST_SECRET].c_str()))
	{
		std::cout << "Darkest secret: ";
		getline(std::cin, this->_contact[DARKEST_SECRET]);
	}
}

