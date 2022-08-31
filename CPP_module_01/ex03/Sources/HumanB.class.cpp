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

#include "HumanB.class.hpp"

HumanB::HumanB(std::string name) : _name(name){}

HumanB::~HumanB(void){}

void HumanB::setWeapon(Weapon& weapon){
	
	this->_weapon = &weapon;
}

void HumanB::attack(void) const{
	
	std::cout << this->_name << " attacks with his ";
	if (this->_weapon)
		std::cout << this->_weapon->getType();
	else
		std::cout << "bare fists";
	std::cout << std::endl;
}