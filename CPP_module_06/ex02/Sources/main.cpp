#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base* generate()
{
	std::cout << " generat class >> ";
	switch (rand() % 3)
	{
	case 0:
		std::cout << "A" << std::endl;
		return new A();
	case 1:
		std::cout << "B" << std::endl;
		return new B();
	case 2:
		std::cout << "C" << std::endl;
		return new C();
	default:
		return NULL;
	}
}

void identify(Base* p)
{
	std::cout << "identify ptr * >> ";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cerr << "bad cast" << std::endl;

}

void identify(Base& p)
{

	std::cout << " identify ref & >> ";
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
	else
		std::cerr << "error" << std::endl;

}

int main()
{
	srand(time(NULL));
	std::cout << "ptr * >>";
	Base* ptr = generate();
	std::cout << "ptr * >>";
	identify(ptr);
	std::cout << "ref & >>";
	identify(*ptr);

	delete ptr;
}