#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat& copy);
	Cat& operator=(const Cat& rhs);
	~Cat();

	void makeSound() const;
	Brain* getBrain() const;

private:
	Brain* _brain;
};
