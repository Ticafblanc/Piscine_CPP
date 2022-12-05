/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:33:51 by mdoquocb          #+#    #+#             */
/*   Updated: 2022/12/04 14:27:57 by mdoquocb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog("Golden Retriever");
	const WrongAnimal* k = new WrongCat();
	const WrongCat* l = new WrongCat("Black Tabby");
	Animal cat("1");
	Animal dog("2");

	std::cout << std::endl << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << std::endl;
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << cat.getType() << " " << std::endl;
	cat.makeSound();
	std::cout << std::endl;
	std::cout << dog.getType() << " " << std::endl;
	dog.makeSound();
	//*(Animal *)i = *(Animal *)j;
	dog = cat;
	std::cout << std::endl;
	std::cout << cat.getType() << " " << std::endl;
	cat.makeSound();
	std::cout << std::endl;
	std::cout << dog.getType() << " " << std::endl;
	dog.makeSound();
	const Animal* copy = new Animal((const Animal)*j);
	std::cout << std::endl;
	std::cout << copy->getType() << " " << std::endl;
	copy->makeSound();
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();

	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
	delete copy;

}