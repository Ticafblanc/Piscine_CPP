#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "\x1B[2J\x1B[H";
	std::string	input;
	Bureaucrat Bur;
	Bureaucrat *Matthis;
	Form 		form;
	Form		*contrat;


	for(int i = 0; i < 29; i++)
		std::cout << "-";	
	std::cout << " start ";
	for(int i = 0; i < 34; i++)
		std::cout << "-";
	std::cout << std::endl;

	try
	{
		Matthis = new Bureaucrat("Matthis", 149);
		contrat = new Form("contrat", false, 148, 148);
		//Form 		errform("errform", false, 200, 100);
		//Form 		errform2("errform2", false, 100, 200);
		//Bureaucrat error("error", 200);
		//Bureaucrat error2("error2", 0);
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
		if (Matthis)
			delete Matthis;
		if (contrat)
			delete contrat;
		return -1;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
		if (Matthis)
			delete Matthis;
		if (contrat)
			delete contrat;
		return -1;
	}

	while (input != "exit")
	{
		std::cout << Bur << std::endl;
		std::cout << *Matthis << std::endl;
		std::cout << form << std::endl;
		std::cout << *contrat << std::endl;

		std::cout << "enter your command: ";
		std::getline(std::cin, input);
		std::cout << "\x1B[2J\x1B[H";
		if (input == "inc")
		{
			try
			{
				Matthis->incrementGrade();
				Bur.incrementGrade();
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
		else if (input == "sign")
		{
			form.beSigned(Bur);
			contrat->beSigned(*Matthis);
		}
		else if (input == "exit")
			break;
		else
		{
			std::cout << "command invalide !!" << std::endl;
			std::cout << "usage: \tinc to increase," << std::endl
				<< "\tdec to decrase, " << std::endl
				<< "\tsign to decrase, " << std::endl;
		}
	}
	delete Matthis;
	delete contrat;

	for(int i = 0; i < 29; i++)
		std::cout << "-";	
	std::cout << "  end  ";
	for(int i = 0; i < 34; i++)
		std::cout << "-";
	std::cout << std::endl;

	return 0;
}