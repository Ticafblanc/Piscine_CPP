#include "whatever.hpp"
#include <iostream>

// int main()
// {
// 	std::cout << "Int : befor swap " << std::endl;
// 	double a = 2;
// 	double b = 3;
// 	std::cout << "a = " << a << std::endl;
// 	std::cout << "b = " << b << std::endl;
// 	swap( a, b );
// 	std::cout << "Int : after swap " << std::endl;
// 	std::cout << "a = " << a << std::endl;
// 	std::cout << "b = " << b << std::endl;
// 	std::cout << "min = " << min( a, b ) << std::endl;
// 	std::cout << "max = " << max( a, b ) << std::endl;
// 	std::cout << "min = " << min <int> ( a, b ) << std::endl;
// 	std::cout << "max = " << max <int> ( a, b ) << std::endl;

// 	std::cout << "String : befor swap " << std::endl;
// 	std::string str1 = "str1";
// 	std::string str2 = "str2";
// 	std::cout << "str1 = " << str1 << std::endl;
// 	std::cout << "str2 = " << str2 << std::endl;
// 	swap(str1, str2);
// 	std::cout << "String : after swap " << std::endl;
// 	std::cout << "str1 = " << str1 << std::endl;
// 	std::cout << "str2 = " << str2 << std::endl;
// 	std::cout << "min = " << ::min( str1, str2 ) << std::endl;
// 	std::cout << "max = " << ::max( str1, str2 ) << std::endl;
// 	std::cout << "min = " << ::min <std::string> ( str1, str2 ) << std::endl;
// 	std::cout << "max = " << ::max <std::string> ( str1, str2 ) << std::endl;

// }

int	main( void ) 
{ 
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}