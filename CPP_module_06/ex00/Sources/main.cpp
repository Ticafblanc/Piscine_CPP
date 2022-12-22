#include <iostream>
#include <string>
#include "Scalar.hpp"

int main(int argc,  char **argv)
{
	if (argc != 2)
	{
		std::cout << "just 1 !!" << std::endl;
		return 1;
	}
	try
	{
		Scalar	sc(argv[1]);
		std::cout << "char = ";
		try{ std::cout << sc.toChar() << std::endl; }
		catch(const std::exception& e){ std::cerr << e.what() << '\n'; }
		std::cout << "int = ";
		try{ std::cout << sc.toInt() << std::endl;}
		catch(const std::exception& e){ std::cerr << e.what() << '\n'; }
		std::cout << "float = ";
		try { std::cout << sc.toFloat() << "f" << std::endl; }
		catch(const std::exception& e){ std::cerr << e.what() << '\n'; }
		std::cout << "double = ";
		try { std::cout << sc.toDouble() << std::endl; }
		catch(const std::exception& e) {std::cerr << e.what() << '\n'; }
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}