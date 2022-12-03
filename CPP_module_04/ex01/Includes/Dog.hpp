#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(std::string type, std::string src[100]);
	Dog(const Dog& copy);
	Dog& operator=(const Dog& rhs);
	~Dog();

	void makeSound() const;

private:
	Brain* _Brain;
};
