#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <iostream>

static void Print(MateriaSource* Source, Character* Chara)
{
	std::cout << "\n\tMateria\t\t\t|\t\tCharactere" << std::endl;
	for(int i = 0; i < 70; i++)
		std::cout << "-";
	std::cout << std::endl;
	for(int i = 0; i < 4; i++)
	{
		std::cout	<< "Materia Source n:" << i + 1 << " => " << ((Source->getmateria(i)) ? Source->getmateria(i)->getType() : "Null") << "\t|"
					<< "\tCharactere equipe n:" << i + 1 << " => " << ((Chara->getmateria(i)) ? Chara->getmateria(i)->getType() : "Null") << std::endl << std::endl;
	}
}

int main()
{
	std::string	input;

	std::cout << "\ndo you want 42 test y/n: ";
	std::getline(std::cin, input);

	if (input == "y")
	{
		IMateriaSource* src = new MateriaSource(); 
		src->learnMateria(new Ice()); 
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

   		AMateria* tmp;
    	tmp = src->createMateria("ice");
    	me->equip(tmp);
    	tmp = src->createMateria("cure");
    	me->equip(tmp);

		ICharacter* bob = new Character("bob");

		Print((MateriaSource*)src, (Character*)bob);

		me->use(0, *bob);
    	me->use(1, *bob);

		Print((MateriaSource*)src, (Character*)me);

		delete bob; 
		delete me; 
		delete src;

		return 0; 
	}

	for(int i = 0; i < 29; i++)
		std::cout << "-";	
	std::cout << " start ";
	for(int i = 0; i < 34; i++)
		std::cout << "-";
	std::cout << std::endl;
	MateriaSource* Source = new MateriaSource();
	Character* Chara = new Character("Chara");
	AMateria* save[4];
	int garbage = 0;
	while (input != "exit")
	{
		Print(Source, Chara);
		std::cout << "enter your command: ";
		std::getline(std::cin, input);
		std::cout << "\x1B[2J\x1B[H";
		if (!input.empty())
			std::cout << "You are in " << input << " mode" << std::endl;
		if (input == "learn")
		{
			std::cout << "enter your Materia: ";
			std::getline(std::cin, input);
			if (input == "ice")
				Source->learnMateria(new Ice());
			else if (input == "cure")
				Source->learnMateria(new Cure());
			input = "learn";
		}
		else if (input == "create")
		{
			std::cout << "enter your Materia: ";
			std::getline(std::cin, input);
			Chara->equip(Source->createMateria(input));
			input = "create";
		}
		else if(input == "use")
		{
			Print(Source, Chara);
			std::cout << "enter your idx: ";
			std::getline(std::cin, input);
			Chara->use((atoi(input.c_str()) - 1), *Chara);
			input = "use";
		}
		else if(input == "equipe")
		{
			std::cout << "enter your Materia: ";
			std::getline(std::cin, input);
			if (input == "ice")
				Chara->equip(new Ice());
			else if (input == "cure")
				Chara->equip(new Cure());
			input = "equipe";
		}
		else if(input == "unequipe")
		{
			Print(Source, Chara);
			std::cout << "enter your idx: ";
			std::getline(std::cin, input);
			if (Chara->getmateria((atoi(input.c_str()) - 1)))
			{
				if (garbage < 4)
				{
					save[garbage] = Chara->getmateria((atoi(input.c_str()) - 1));
					garbage++;
					Chara->unequip((atoi(input.c_str()) - 1));
				}
				else
				std::cout	<< "Garbage is full clear befor unequipe !!" << std::endl;
			}
			input = "unequipe";
		}
		else if(input == "garbage")
		{
			std::cout << "enter your commande print/clear: ";
			std::getline(std::cin, input);
			if(input == "print")
			{
				if (!garbage)
					std::cout	<< "Garbage empty !!" << std::endl;
				else
				{
					std::cout << "\n\tGarbge" << std::endl;
					for(int i = 0; i < 30; i++)
					std::cout << "-";
					std::cout << std::endl;
					for(int i = 0; i < garbage && save[i] != NULL; i++)
					{
						if (save[i] != NULL)
							std::cout	<< "Garbage materia n:" << i + 1 << " => " << save[i]->getType() << std::endl;
					}
					if (garbage > 3)
						std::cout	<< "Garbage is full !!" << std::endl;
				}
			}
			if(input == "clear")
			{
				for(int i = 0; i < garbage && save[i] != NULL; i++)
				{
					if (save[i] != NULL)
						delete save[i];
				}
				garbage = 0;
				std::cout	<< "Garbage empty !!" << std::endl;
			}
			input = "garbage";
		}
		else if (input == "exit")
			break;
		else
		{
			std::cout << "command invalide !!" << std::endl;
			std::cout << "usage: \tLEARN to materia Source," << std::endl
				<< "\tcreate to give charactere, " << std::endl
				<< "\tuse to use, " << std::endl
				<< "\tequipe to equipe, " << std::endl
				<< "\tunequipe to unequipe, " << std::endl
				<< "\tgarbage to manage garbage print/clear, " << std::endl
				<< "\texit to leave" << std::endl;
		}
		
	}
	delete Chara;
	delete Source;
	for(int i = 0; i < garbage && save[i] != NULL; i++)
	{
		if (save[i] != NULL)
			delete save[i];
	}
	std::cout << "------------- end -------------" << std::endl;
	return 0;
}