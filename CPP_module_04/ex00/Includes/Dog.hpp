/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:34:17 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/04 09:34:25 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog& other);
	Dog& operator=(const Dog& rhs);
	~Dog();

	virtual void makeSound() const;
};
