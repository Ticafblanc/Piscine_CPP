// #include "Array.hpp"
// #include <iostream>

// int main()
// {
// 	Array<int> a;
// 	Array<int> f(4);
// 	a = f;
// 	try
// 	{
// 		a[0] = 1;
// 		a[1] = 2;
// 		a[2] = 3;
// 		a[3] = 4;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	Array<int> b(a);

// 	Array<std::string> str(4);
// 	try
// 	{
// 		str[0] = "hello";
// 		str[1] = "coucou";
// 		str[2] = "salur";
// 		str[3] = "bay";
// 		str[4] = "error";
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	for(int s = b.size() - 1; s >= 0 ;s--)
// 		std::cout << b[s] << std::endl;
// 	for(int s = str.size() - 1 ; s >= 0; s--)
// 		std::cout << str[s] << std::endl;
	
// }
#include <iostream>
#include <Array.hpp>
#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
	} 
	//SCOPE 
	{
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
			return 1; 
		}
	} 
	try 
	{
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	try 
	{
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
		// std::cout << "ok";
    }
    delete [] mirror;//
	return 0; 
}
