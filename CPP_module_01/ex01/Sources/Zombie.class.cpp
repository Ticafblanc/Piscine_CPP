/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2021/10/07 14:15:32 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie::Zombie(){}

Zombie::~Zombie(){

	std::cout << this->_name << " : is destroyed." << std::endl ;
}

void	Zombie::init(std::string	name){this->_name = name;}

void	Zombie::announce(void)const{

	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl ;
}