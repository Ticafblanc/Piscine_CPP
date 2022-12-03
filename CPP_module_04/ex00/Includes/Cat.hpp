#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat& other);
	Cat& operator=(const Cat& rhs);
	~Cat();

	void makeSound() const;
};