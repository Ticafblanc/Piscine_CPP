/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp      			                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include "My_Awesome_Phonebook.hpp"

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

#endif