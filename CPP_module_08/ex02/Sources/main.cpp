#include "mutantstack.tpp"
#include <stack>
#include <list>
#include <iostream>

int main()
{
	std::cout << "Stack" << std::endl;
	std::stack<int> Mstack = MutantStack<int>();

	Mstack.push(5);
	std::cout 	<< "top: " << Mstack.top()
				<< " size: " << Mstack.size() << std::endl;

	Mstack.push(17);
	std::cout 	<< "top: " << Mstack.top()
			 	<< " size: " << Mstack.size() << std::endl;

	Mstack.push(11);
	std::cout 	<< "top: " << Mstack.top()
			 	<< " size: " << Mstack.size() << std::endl;

	Mstack.push(21);
	std::cout 	<< "top: " << Mstack.top()
			 	<< " size: " << Mstack.size() << std::endl;

	Mstack.push(12);
	std::cout 	<< "top: " << Mstack.top()
			 	<< " size: " << Mstack.size() << std::endl;

	Mstack.push(54);
	std::cout 	<< "top: " << Mstack.top()
			 	<< " size: " << Mstack.size() << std::endl;

	Mstack.push(87);
	std::cout 	<< "top: " << Mstack.top()
			 	<< " size: " << Mstack.size() << std::endl;

	Mstack.push(45);
	std::cout 	<< "top: " << Mstack.top()
			 	<< " size: " << Mstack.size() << std::endl;

	Mstack.pop();
	std::cout 	<< "top: " << Mstack.top()
			 	<< " size: " << Mstack.size() << std::endl;
	// std::stack<int>::iterator ite;
	// std::stack<int>::iterator ite;

	std::cout << "mutant" << std::endl;

	MutantStack<int> 	mut;
	mut.push(5);
	std::cout 	<< "top: " << mut.top()
				<< " size: " << mut.size() << std::endl;

	mut.push(17);
	std::cout 	<< "top: " << mut.top()
			 	<< " size: " << mut.size() << std::endl;

	mut.push(11);
	std::cout 	<< "top: " << mut.top()
			 	<< " size: " << mut.size() << std::endl;

	mut.push(21);
	std::cout 	<< "top: " << mut.top()
			 	<< " size: " << mut.size() << std::endl;

	mut.push(12);
	std::cout 	<< "top: " << mut.top()
			 	<< " size: " << mut.size() << std::endl;

	mut.push(54);
	std::cout 	<< "top: " << mut.top()
			 	<< " size: " << mut.size() << std::endl;

	mut.push(87);
	std::cout 	<< "top: " << mut.top()
			 	<< " size: " << mut.size() << std::endl;

	mut.push(45);
	std::cout 	<< "top: " << mut.top()
			 	<< " size: " << mut.size() << std::endl;

	mut.pop();
	std::cout 	<< "top: " << mut.top()
			 	<< " size: " << mut.size() << std::endl;

	MutantStack<int>::iterator it = mut.begin();
	MutantStack<int>::iterator ite = mut.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout  << "mut = "<< *it << std::endl;
		++it;
	}
	std::stack<int> s(mut);

	std::list<int>    list;

    list.push_back(5);
    list.push_back(99);

	std::list<int>::iterator itlist = list.begin();
    std::list<int>::iterator itliste = list.end();

	while (itlist != itliste)
	{
		std::cout << "list = "<< *itlist << std::endl;
		++itlist;
	}
	return 0;
}

// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5); mstack.push(17);
// 	std::cout << mstack.top() << std::endl; mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite) {
//     std::cout << *it << std::endl;
// 	++it; }
// 	std::stack<int> s(mstack); return 0;
// }