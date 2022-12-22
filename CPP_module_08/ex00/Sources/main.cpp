#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>

void print(int i)
{
	std::cout << i << std::endl; 
}

int main()
{
	std::list<int> list;
	std::cout << "container list int" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		list.push_back(i);
		std::cout << i << std::endl;
	}
	easyfind(list, 5);
	easyfind(list, 12);
	std::vector<int> vector;
	std::cout << "container vector int" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		vector.push_back(i);
		std::cout << i << std::endl;
	}
	 easyfind(vector, 3);
	 easyfind(vector, 23);
}