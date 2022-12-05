#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::string cat_brain[] = {"cat", "cat1", "cat2", ""};
	std::string dog_brain[] = {"dog", "dog1", "dog2", ""};

	//const A_Animal* meta = new A_Animal();
	//std::cout << std::endl;
	const A_Animal* i = new Cat();
	std::cout << std::endl;
	const A_Animal* j = new Dog("Golden Retriever", dog_brain);
	std::cout << std::endl;
	const WrongAnimal* k = new WrongCat();
	std::cout << std::endl;
	const WrongCat* l = new WrongCat("Black Tabby", cat_brain);
	std::cout << std::endl;
	// A_Animal cat("1");
	// A_Animal dog("2");
	std::cout << std::endl;
	A_Animal *animals[10];
	std::cout << std::endl;
	std::cout << std::endl;
	
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Dog("Golden Retriever", dog_brain);
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl << animals[i]->getType() << std::endl;
	 	animals[i]->makeSound();
		for (int i2 = 0; i2 < 100 && (!(((Cat *)animals[i])->get_Brain().ideas[i2].empty()) || !(((Dog *)animals[i])->get_Brain().ideas[i2].empty())); i2++)
		{
			if (i < 5)
				std::cout << ((Dog *)animals[i])->get_Brain().ideas[i2] << std::endl;
			else
				std::cout << ((Cat *)animals[i])->get_Brain().ideas[i2] << std::endl;
		}
		std::cout << std::endl;
	}

	std::cout << std::endl<< ">>>>Fin du tableau brain<<<<"<< std::endl;
	// std::cout << std::endl << meta->getType() << std::endl;
	// meta->makeSound();
	// std::cout << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	std::cout << std::endl;
	std::cout << j->getType() << std::endl;
	j->makeSound();
	std::cout << std::endl;
	std::cout << k->getType() << std::endl;
	k->makeSound();
	std::cout << std::endl;
	// std::cout << std::endl;
	// std::cout << cat.getType() << std::endl;
	// cat.makeSound();
	// std::cout << std::endl;
	// std::cout << dog.getType() << std::endl;
	// dog.makeSound();
	// std::cout << std::endl;
	*(Dog *)i = *(Dog *)j;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	std::cout << std::endl;
	//dog = cat;
	// std::cout << std::endl;
	// std::cout << cat.getType() << std::endl;
	// cat.makeSound();
	// std::cout << std::endl;
	// std::cout << dog.getType() << std::endl;
	// dog.makeSound();
	const A_Animal* copy = new Dog(*(const Dog*)j);
	std::cout << std::endl;
	std::cout << copy->getType() << std::endl;
	copy->makeSound();
	std::cout << std::endl;
	std::cout << j->getType() << std::endl;
	j->makeSound();

	//delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
	delete copy;
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			delete animals[i];
		else
			delete animals[i];
		std::cout << std::endl;
	}
}
