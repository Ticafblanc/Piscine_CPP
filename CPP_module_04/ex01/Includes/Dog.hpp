#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog& copy);
	Dog& operator=(const Dog& rhs);
	~Dog();

	void makeSound() const;
	Brain* getBrain() const;

private:
	Brain* _brain;
};
