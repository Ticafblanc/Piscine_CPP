/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp        			                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include "Unnecessary_violence.hpp"
#include "Weapon.class.hpp"

class HumanB{
	public:
		
		HumanB(std::string name);
		~HumanB(void);
		void setWeapon(Weapon& weapon);
		void attack(void) const;

	private:

		std::string _name;
		Weapon* _weapon;
};

#endif