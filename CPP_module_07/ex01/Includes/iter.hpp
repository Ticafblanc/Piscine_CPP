#include <iostream>

template <typename T>
void iter(T* a, size_t size, void (*f)(const T&))
{
	for (size_t i = 0; i < size; i++)
		(*f)(a[i]);
}

template <typename T>
void print(T& a){ std::cout << a << std::endl; }
