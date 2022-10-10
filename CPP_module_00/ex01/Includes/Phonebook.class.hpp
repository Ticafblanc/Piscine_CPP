/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "My_Awesome_Phonebook.hpp"
#include "Contact.class.hpp"

class Phonebook{

	public:
		
		Phonebook(void);
		void		add(void);
		void		search(void);
		void		print(int trig);


	private:

		std::string	_header[5];
		int			_nb_contact;
		int			_old_contact;
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