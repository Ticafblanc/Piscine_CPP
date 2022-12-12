#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <fstream>
#include <cstdio>
#include <unistd.h>

void print(Bureaucrat *Bur[10], int n_bur, AForm *Form[10] , int n_form)
{
	int i_b = 0, i_f = 0;

	std::cout << "\n\tBureaucrat\t|\t\tForm" << std::endl;
	for(int i = 0; i < 90; i++)
		std::cout << "-";
	std::cout << std::endl;
	while(i_b < n_bur | i_f < n_form)
	{
		if (i_b < n_bur)
			std::cout	<< ((i_b <= i_f) ? i_f + 1 : i_b + 1 ) << " " <<   ((i_b < n_bur ) ? Bur[i_b]->getName() : "") << "\t" << " grade " << Bur[i_b]->getGrade() << "\t|";
		else
			std::cout << "\t\t\t|";
		if (i_f < n_form)
			std::cout << ((i_b <= i_f) ? i_f + 1 : i_b + 1 ) << "  " <<  ((i_f < n_form ) ? Form[i_f]->getarget() : "")<< "  " <<  ((i_f < n_form ) ? Form[i_f]->getName() : "") << " " << " grade sign " << Form[i_f]->getGradeSign() << " grade exec " << Form[i_f]->getGradeExec() << (( Form[i_f]->getSigned()) ? " => signed" : " => not signed") << std::endl << std::endl;
		else
			std::cout << std::endl << std::endl;

		i_b++;
		i_f++;
	}
	for(int i = 0; i < 90; i++)
		std::cout << "-";
	std::cout << std::endl;
}

int main()
{
	std::cout << "\x1B[2J\x1B[H";
	std::string	input;
	std::string input2;
	int 		grade = 0;
	int 		grade2 = 0;
	Bureaucrat *Bur[10];
	AForm	*Form[10];
	std::string form[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	Intern 	*Int = new Intern();
	int n_bur = 0;
	int n_form = 0;

	for(int i = 0; i < 29; i++)
		std::cout << "-";	
	std::cout << " start ";
	for(int i = 0; i < 39; i++)
		std::cout << "-";
	std::cout << std::endl;

	while (input != "exit")
	{
		print(Bur, n_bur, Form, n_form);
		std::cout << "enter your command: ";
		std::getline(std::cin, input);
		if (input == "add")
		{
			std::cout << "What would you add ? form/bur: ";
			std::getline(std::cin, input);
			if (input == "bur")
			{
				try
				{
					if (n_bur > 8)
						throw std::overflow_error("to much Bur");
					std::cout << "Which garde of bur 1/150: ";
					std::getline(std::cin, input);
					grade = std::atoi(input.c_str());
					std::cout << "What name of bur max(4 lettre): ";
					std::getline(std::cin, input);
					Bur[n_bur] = new Bureaucrat(input, grade);
					n_bur++;
				}
				catch(const Bureaucrat::GradeTooHighException& e)
				{
					std::cerr << e.what() << std::endl;
				}
				catch(const Bureaucrat::GradeTooLowException& e)
				{
					std::cerr << e.what() << std::endl;
				}
				catch(const std::overflow_error& e)
				{
					std::cerr << e.what() << std::endl;
				}
			}
			else if (input == "form")
			{
				try
				{
					if (n_form > 8)
						throw std::overflow_error("to much Form");
					std::cout << "What name of form 1-shr/2-rob/3-pre: ";
					std::getline(std::cin, input);
					input = form[(std::atoi(input.c_str())) - 1];
					std::cout << "What target of Form max(4 lettre): ";
					std::getline(std::cin, input2);
					Form[n_form] = Int->makeForm(input, input2);
					n_form++;
				}
				catch(const Bureaucrat::GradeTooHighException& e)
				{
					std::cerr << e.what() << std::endl;
				}
				catch(const Bureaucrat::GradeTooLowException& e)
				{
					std::cerr << e.what() << std::endl;
				}
				catch(const Intern::InterneException& e)
				{
					std::cerr << "Form inconnu" << std::endl;
				}
			}
			std::cout << "\x1B[2J\x1B[H";
		}
		else if (input == "inc")
		{
			try
			{
				std::cout << "Which bur to increase : ";
				std::getline(std::cin, input);
				grade = std::atoi(input.c_str());
				if (grade > n_bur || n_bur < 1)
					continue;
				Bur[grade - 1 ]->incrementGrade();
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
			std::cout << "\x1B[2J\x1B[H";
		}
		else if (input == "dec")
		{
			try
			{
				std::cout << "Which bur to decrease : ";
				std::getline(std::cin, input);
				grade = std::atoi(input.c_str());
				if (grade > n_bur || n_bur < 1)
					continue;
				Bur[grade - 1 ]->decrementGrade();	
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}	
			std::cout << "\x1B[2J\x1B[H";
		}
		else if (input == "sign")
		{
			std::cout << "Which form to sign : ";
			std::getline(std::cin, input);
			grade = std::atoi(input.c_str());//or try
			std::cout << "by which bur : ";
			std::getline(std::cin, input);
			grade2 = std::atoi(input.c_str());
			if (grade2 > n_bur || grade > n_form || n_bur < 1 || n_form < 1)
					continue;
			Form[grade - 1]->beSigned(*Bur[grade2 - 1]);
			std::cout << "\x1B[2J\x1B[H";
		}
		else if (input == "exec")
		{
			std::cout << "Which form to exec : ";
			std::getline(std::cin, input);//dans le try
			grade = std::atoi(input.c_str());
			std::cout << "by which bur : ";
			std::getline(std::cin, input);
			grade2 = std::atoi(input.c_str());
			if (grade2 > n_bur || grade > n_form || n_bur < 1 || n_form < 1)
					continue;
			Bur[grade2 - 1]->executeForm(*Form[grade - 1]);
			std::cout << "\x1B[2J\x1B[H";
		}
		else if (input == "exit")
			break;
		else
		{
			std::cout << "command invalide !!" << std::endl;
			std::cout << "usage: \tinc to increase," << std::endl
				<< "\tdec to decrase, " << std::endl
				<< "\tsign to decrase, " << std::endl
				<< "\texec to decrase, " << std::endl
				<< "\tadd to add form or bur, " << std::endl;
		}
	}

	while(--n_bur > -1)
		delete Bur[n_bur];
	while(--n_form > -1)
		delete Form[n_form];
	delete Int;
	

	for(int i = 0; i < 29; i++)
		std::cout << "-";	
	std::cout << "  end  ";
	for(int i = 0; i < 34; i++)
		std::cout << "-";
	std::cout << std::endl;

	return 0;
}