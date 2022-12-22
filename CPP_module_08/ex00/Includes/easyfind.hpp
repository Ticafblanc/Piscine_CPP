#include <algorithm>
#include <iostream>

template <typename T>
void easyfind(T& container, int Int)
{
	typename T::iterator it = find (container.begin(), container.end(), Int);
	if (it != container.end())
   		std::cout << "Element found in container: " << *it << '\n';
 	else
		std::cout << "Element not found in container\n";
}