#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Cat* i2   = new Cat();
	const WrongAnimal* Wmeta = new WrongAnimal();
	const WrongAnimal* Wi = new WrongCat();
	const WrongCat* Wi2 = new WrongCat();
	const Animal* t1 = new Animal();
	const Animal* t2 = new Dog("milou");
	const Animal* t3 = new Animal(*t2);

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << i2->getType() << " " << std::endl;
	std::cout << Wmeta->getType() << " " << std::endl;
	std::cout << Wi->getType() << " " << std::endl;
	std::cout << Wi2->getType() << " " << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound();
	i2->makeSound();
	Wmeta->makeSound();
	Wi->makeSound();
	Wi2->makeSound();
	std::cout << t1->getType() << " " << std::endl;
	std::cout << t2->getType() << " " << std::endl;
	std::cout << t3->getType() << " " << std::endl;
	t1->makeSound();
	t2->makeSound();
	t3->makeSound();
	t1 = t3;
	std::cout << t1->getType() << " " << std::endl;
	std::cout << t3->getType() << " " << std::endl;
	t1->makeSound();
	t3->makeSound();
	delete meta;
	delete j;
	delete i;
	delete Wmeta;
	delete Wi;
	delete t1;
	delete t2;
	delete t3;

	Animal* animals[10];
	
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	Cat copy(*(Cat *)animals[0]);
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << std::setw(30) << std::left << copy.getBrain()->getIdea(i);
		std::cout << std::setw(30) << std::left << ((Cat *)animals[0])->getBrain()->getIdea(i) << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
}
