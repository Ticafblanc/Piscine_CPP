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

#include "my_awesome_phonebook.class.hpp"


Phonebook::Phonebook(void){

	this->_nb_contact = 0;
	this->_repertoire[0] = & this->_contact0;
	this->_repertoire[1] = & this->_contact1;
	this->_repertoire[2] = & this->_contact2;
	this->_repertoire[3] = & this->_contact3;
	this->_repertoire[4] = & this->_contact4;
	this->_repertoire[5] = & this->_contact5;
	this->_repertoire[6] = & this->_contact6;
	this->_repertoire[7] = & this->_contact7;
	this->_header[FIRST_NAME] = "First name";
	this->_header[LAST_NAME] = "Last name";
	this->_header[NICKNAME] = "Nickname";
	this->_header[PHONE_NUMBER] = "Phone number";
	this->_header[DARKEST_SECRET] = "Darkest secret";
}

void	Phonebook::add(void){

	this->_repertoire[this->_nb_contact]->add();
	if (this->_nb_contact < 7)
		this->_nb_contact++;
}

void	Phonebook::search(void){

	std::string		input;

	std::cout << "enter index (ex:1) : ";
	getline(std::cin, input);
	if (std::atoi(input.c_str()) >= 1 && std::atoi(input.c_str()) <= this->_nb_contact)
		this->print(std::atoi(input.c_str()) - 1);
	else
		std::cout << "index invalide" << std::endl;
}

void	Phonebook::print(int trig){

	int		i;

	i = 0;
	std::cout.fill('_');
	std::cout.width(68);
	std::cout << '\n';
	std::cout << "|";
	std::cout.fill(' ');
	std::cout.width(10);
	std::cout << std::right << "id" << "|";
	while (i < 5)
	{
		std::string str(this->_header[i]);
		unsigned sz = str.size();
		if (sz > 10)
		{
			str.resize(9);
			str.resize(10, '.');
		}
		std::cout.fill(' ');
		std::cout.width(10);
		std::cout << std::right << str << "|";
		i++;
	}
	std::cout << std::endl;
	std::cout.fill('_');
	std::cout.width(68);
	std::cout << '\n';
	if (trig > -1)
	{
		this->_repertoire[trig]->print(trig);
		std::cout.fill('_');
		std::cout.width(68);
		std::cout << '\n';
		std::cout << std::endl;
		return;
	}
	i = 0;			
	while (i < this->_nb_contact + 1)
	{
		this->_repertoire[i]->print(i);
		i++;
		std::cout.fill('_');
		std::cout.width(68);
		std::cout << '\n';
	}
	std::cout << std::endl;
}

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

