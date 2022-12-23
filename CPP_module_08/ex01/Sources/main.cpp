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
	std::vector<int>::iterator	it;
	it = sp2.get_v().begin();
	std::vector<int> add1(1000, 5);
	std::vector<int> add2(1000, 3);
	std::vector<int> add3(1000, 17);
	std::vector<int> add4(1000, 9);
	std::vector<int> add5(1000, 9);
	std::vector<int> add6(1000, 11);
	std::vector<int> add7(3999, 24);
	std::vector<int> add8(1, 3);
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
	try
	{
		std::cout << "0 size of sp2 = " << sp2.get_v().size() << std::endl;
		it = sp2.addNumber(it, add1.begin(), add1.end());
		std::cout << "1 size of sp2 = " << sp2.get_v().size() << std::endl;
		it = sp2.addNumber(it, add2.begin(), add2.end());
		std::cout << "2 size of sp2 = " << sp2.get_v().size() << std::endl;
		it = sp2.addNumber(it, add3.begin(), add3.end());
		std::cout << "3 size of sp2 = " << sp2.get_v().size() << std::endl;
		it = sp2.addNumber(it, add4.begin(), add4.end());
		std::cout << "4 size of sp2 = " << sp2.get_v().size() << std::endl;
		it = sp2.addNumber(it, add5.begin(), add5.end());
		std::cout << "5 size of sp2 = " << sp2.get_v().size() << std::endl;
		it = sp2.addNumber(it, add6.begin(), add6.end());
		std::cout << "6 size of sp2 = " << sp2.get_v().size() << std::endl;
		it = sp2.addNumber(it, add7.begin(), add7.end());
		std::cout << "7 size of sp2 = " << sp2.get_v().size() << std::endl;
		it = sp2.addNumber(it, add8.begin(), add8.end());
		std::cout << "8 size of sp2 = " << sp2.get_v().size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
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