#include "mutantstack.tpp"
#include <stack>
#include <iostream>

int main()
{
	std::stack<int> *Mstack = new MutantStack<int>();
	std::stack<int> Scopy;

	// Mstack.push(5);
	// std::cout 	<< "top: " << Mstack.top()
	// 			<< " size: " << Mstack.size() << std::endl;

	// Mstack.push(17);
	// std::cout 	<< "top: " << Mstack.top()
	// 		 	<< " size: " << Mstack.size() << std::endl;

	// Mstack.push(11);
	// std::cout 	<< "top: " << Mstack.top()
	// 		 	<< " size: " << Mstack.size() << std::endl;

	// Mstack.push(21);
	// std::cout 	<< "top: " << Mstack.top()
	// 		 	<< " size: " << Mstack.size() << std::endl;

	// Mstack.push(12);
	// std::cout 	<< "top: " << Mstack.top()
	// 		 	<< " size: " << Mstack.size() << std::endl;

	// Mstack.push(54);
	// std::cout 	<< "top: " << Mstack.top()
	// 		 	<< " size: " << Mstack.size() << std::endl;

	// Mstack.push(87);
	// std::cout 	<< "top: " << Mstack.top()
	// 		 	<< " size: " << Mstack.size() << std::endl;

	// Mstack.push(45);
	// std::cout 	<< "top: " << Mstack.top()
	// 		 	<< " size: " << Mstack.size() << std::endl;

	// Mstack.pop();
	// std::cout 	<< "top: " << Mstack.top()
	// 		 	<< " size: " << Mstack.size() << std::endl;

	// Scopy = Mstack;
	// Scopy.pop();
	// std::cout 	<< "copy >> "<< "top: " << Scopy.top()
	// 		 	<< " size: " << Scopy.size() << std::endl;
	// std::cout 	<< "stack >> "<< "top: " << Mstack.top()
	// 		 	<< " size: " << Mstack.size() << std::endl;

	MutantStack<int>::iterator it = Mstack->begin();
	MutantStack<int>::iterator ite = Mstack->end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	// std::stack<int> s(mstack);

	// // MutantStack<std::string> rev;

	// rev.push("one");
	// rev.push("two");
	// rev.push("three");
	// rev.push("four");
	// rev.push("five");

	// MutantStack<std::string>::reverse_iterator rev_itr = rev.rbegin();
	// for (; rev_itr != rev.rend(); rev_itr++)
	// 	std::cout << *rev_itr << std::endl;

	// std::cout << "--- Copy constructor ---" << std::endl;

	// MutantStack<int> copy(mstack);
	// MutantStack<int> a_copy = mstack;

	// copy.pop();
	// copy.pop();
	// copy.pop();
	// copy.push(64);
	// copy.push(65);
	// copy.push(66);

	// MutantStack<int>::iterator copy_itr = copy.begin();
	// for (; copy_itr != copy.end(); copy_itr++)
	// 	std::cout << *copy_itr << std::endl;

	// std::cout << "--- Assignment operator ---" << std::endl;

	// a_copy.pop();
	// a_copy.pop();
	// a_copy.pop();
	// a_copy.push(128);
	// a_copy.push(129);
	// a_copy.push(130);

	// MutantStack<int>::iterator a_copy_itr = a_copy.begin();
	// for (; a_copy_itr != a_copy.end(); a_copy_itr++)
	// 	std::cout << *a_copy_itr << std::endl;
	return 0;
}