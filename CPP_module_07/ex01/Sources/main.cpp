#include "iter.hpp"
#include <iostream>

int main()
{
	std::cout << "Int : ";
	int a[4] = {1,2,3,4};
	std::cout << "a = " << std::endl;
	iter(a, 4, print);
	std::cout << std::endl;

	std::cout << "String : ";
	std::string str[4] = {"hello","coucouc","salut","bay"};
	std::cout << "str = " << std::endl;
	::iter <std::string> (str, 4, print);
	std::cout << std::endl;
}