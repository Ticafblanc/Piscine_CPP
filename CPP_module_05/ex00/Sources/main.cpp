#include "Bureaucrat.hpp"

int main()
{
	std::cout << "\x1B[2J\x1B[H";
	std::string	input;
	Bureaucrat Bur;
	Bureaucrat *Matthis;

	for(int i = 0; i < 29; i++)
		std::cout << "-";	
	std::cout << " start ";
	for(int i = 0; i < 34; i++)
		std::cout << "-";
	std::cout << std::endl;

	try
	{
		Matthis = new Bureaucrat("Matthis", 149);
		//Bureaucrat error("error", 200);
		//Bureaucrat error2("error2", 0);
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
		if (Matthis)
			delete Matthis;
		return -1;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
		if (Matthis)
			delete Matthis;
		return -1;
	}

	while (input != "exit")
	{
		std::cout << Bur << std::endl;
		std::cout << *Matthis << std::endl;

		std::cout << "enter your command: ";
		std::getline(std::cin, input);
		std::cout << "\x1B[2J\x1B[H";
		if (input == "inc")
		{
			try
			{
				Bur.incrementGrade();
				Matthis->incrementGrade();
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		else if (input == "dec")
		{
			try
			{
				Bur.decrementGrade();
				Matthis->decrementGrade();
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}	
		}
		else if (input == "exit")
			break;
		else
		{
			std::cout << "command invalide !!" << std::endl;
			std::cout << "usage: \tinc to increase," << std::endl
				<< "\tdec to decrase, " << std::endl;
		}
	}
	delete Matthis;

	for(int i = 0; i < 29; i++)
		std::cout << "-";	
	std::cout << "  end  ";
	for(int i = 0; i < 34; i++)
		std::cout << "-";
	std::cout << std::endl;
	return 0;
}