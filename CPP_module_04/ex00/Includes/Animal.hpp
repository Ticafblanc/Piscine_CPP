/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:33:25 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/04 14:16:57 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal{
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& copy);
	Animal& operator=(const Animal& rhs);
	virtual ~Animal();

	std::string getType() const;
	virtual void makeSound() const;

protected:
	std::string _type;
};
