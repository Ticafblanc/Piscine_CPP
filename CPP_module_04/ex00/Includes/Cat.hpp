/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:34:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/04 09:34:07 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat& other);
	Cat& operator=(const Cat& rhs);
	~Cat();

	virtual void makeSound() const;
};
