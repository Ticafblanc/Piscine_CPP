#include "Array.hpp"
#include <iostream>

int main()
{
	Array<int> a;
	Array<int> f(4);
	a = f;
	try
	{
		a[0] = 1;
		a[1] = 2;
		a[2] = 3;
		a[3] = 4;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Array<int> b(a);

	Array<std::string> str(4);
	try
	{
		str[0] = "hello";
		str[1] = "coucou";
		str[2] = "salur";
		str[3] = "bay";
		str[4] = "error";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	for(int s = b.size() - 1; s >= 0 ;s--)
		std::cout << b[s] << std::endl;
	for(int s = str.size() - 1 ; s >= 0; s--)
		std::cout << str[s] << std::endl;
	
}
