#include <iostream>
#include <bitset>
#include "Data.hpp"

int main()
{
	Data d;
	Data *ptr;

	d.str = "str";
	d.c = 'c';
	d.i = 12345;
	d.f = 12.12f;
	d.d = 12.123;

	std::cout << "str = " << d.str << std::endl;
	std::cout << "c = " << d.c << std::endl;
	std::cout << "i = " << d.i << std::endl;
	std::cout << "f = " << d.f<< std::endl;
	std::cout << "d = " << d.d << std::endl;


	uintptr_t output_uintptr = serialize(&d);
	ptr= deserialize(output_uintptr);

	std::cout << "str = " << ptr->str << std::endl;
	std::cout << "c = " << ptr->c << std::endl;
	std::cout << "i = " << ptr->i << std::endl;
	std::cout << "f = " << ptr->f<< std::endl;
	std::cout << "d = " << ptr->d << std::endl;
}