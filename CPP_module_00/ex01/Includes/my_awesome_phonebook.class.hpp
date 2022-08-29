/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awesome_phonebook.class.hpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_AWESOME_PHONEBOOK_CLASS_HPP
# define MY_AWESOME_PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

enum	e_status{

	EXIT = 0,
	ADD = 1,
	SEARCH = 2,
};

enum	e_contact{

	FIRST_NAME = 0,
	LAST_NAME= 1,
	NICKNAME = 2,
	PHONE_NUMBER = 3,
	DARKEST_SECRET = 4,
};

class Contact{

	public:

		void	add(void);
		void	print(int id);

	private:

		std::string	_contact[5];
};

class Phonebook{

	public:
		
		Phonebook(void);
		void		add(void);
		void		search(void);
		void		print(int trig);


	private:

		std::string	_header[5];
		int			_nb_contact;
		Contact	*_repertoire[8];
		Contact	_contact0;
		Contact	_contact1;
		Contact	_contact2;
		Contact	_contact3;
		Contact	_contact4;
		Contact	_contact5;
		Contact	_contact6;
		Contact	_contact7;
};

#endif