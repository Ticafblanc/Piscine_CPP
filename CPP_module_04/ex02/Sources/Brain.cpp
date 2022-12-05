/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:56:26 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/04 18:29:40 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){ std::cout << "Constructor Brain(void) called" << std::endl; }

Brain::Brain(const std::string src[100])
{
	for (int i = 0; i < 100 && src[i].size(); i++)
	{
		this->ideas[i] = src[i];
		std::cout << "Ideas numbers " << i << " stored" << std::endl;
	}
	std::cout << "Constructor Brain (non-void) called >> " << std::endl; 	
}

Brain::Brain(const Brain& copy){
	for (int i = 0; i < 100 && copy.ideas[i].size(); i++)
		this->ideas[i] = copy.ideas[i];
	std::cout << "constructor Brain copy called" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs){
	std::cout << "Operator = Brain called >> "<< std::endl; 
	for (int i = 0; i < 100 && rhs.ideas[i].size(); i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

Brain::~Brain(){ std::cout << "Destructor Brain called" << std::endl; }

