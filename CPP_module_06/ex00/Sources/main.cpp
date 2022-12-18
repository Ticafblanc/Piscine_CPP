#include <iostream>
#include <string>
#include "Scalar.hpp"

int main()
{
	std::cout << "\x1B[2J\x1B[H";
	std::string	input;
	enum Type type = Invalid;
	std::string	t[4] = {"Char", "Int", "Float", "Double"};

	while (input != "exit")
	{
		
		std::cout << "enter your valeur: ";
		std::getline(std::cin, input);
		if (input == "exit")
			break;
		try
		{
			Scalar	sc(input);	
			std::cout << "enter your ouput: ";
			std::getline(std::cin, input);
			for(int i = 0; i < 4; i++)
			{
				if (input == t[i])
				{
					type = static_cast<Type>(i + 1);
					break;
				}
			}
			switch (type)
			{
				case Char:
					printf("Char = %c\n", sc.toChar());
					break;
				case Int:
					printf("Int = %d\n", sc.toInt());	
					break;
				case Float:
					printf("Float = %ff\n", sc.toFloat());
					break;
				case Double:	
					printf("Double = %f\n", sc.toDouble());
					break;
				default:
					std::cout << "error syntax : Char/Int/Float/Double" << std::endl;
					break;
			}
			type = Invalid;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}