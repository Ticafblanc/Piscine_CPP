#include "Animal.hpp"

class Dog : public Animal
{
public:
	// Constructors
	Dog();
	Dog(std::string type);
	Dog(const Dog& other);
	Dog& operator=(const Dog& rhs);
	~Dog();

	void makeSound() const;
};
