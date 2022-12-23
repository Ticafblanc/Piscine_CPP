#include "Span.hpp"
#include <iostream>

int main()
{
	Span sp(5);

	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "sp min = " <<  sp.shortestSpan() << std::endl;
		std::cout << "sp max = " << sp.longestSpan() << std::endl;
		sp.addNumber(24);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Span sp2(10000);
	std::vector<int> add1(20, 400);
	std::vector<int> add1(20, 400);
	std::cout << "full with = " << sp.get_v().size() << std::endl;
	try
	{
		std::cout << "sp2 max = " << sp2.longestSpan() << std::endl;
		std::cout << "sp2 min = " << sp2.shortestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "full with = " << sp2.get_v().size() << std::endl;
	sp2.addNumber(sp.get_v().begin(), sp.get_v().end());
	std::cout << "full with = " << sp2.get_v().size() << std::endl;
	sp2.addNumber(c2.begin(), c2.end());
	std::cout << "full with = " << sp2.get_v().size() << std::endl;

	std::cout << "full with = " << sp2.get_v().size() << std::endl;
	try
	{
		std::cout << "sp2 min = " << sp2.shortestSpan() << std::endl;
		std::cout << "sp2 max = " << sp2.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}