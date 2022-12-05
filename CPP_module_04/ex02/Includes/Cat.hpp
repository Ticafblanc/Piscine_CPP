#include "A_Animal.hpp"
#include "Brain.hpp"

class Cat : public A_Animal
{
public:
	Cat();
	Cat(std::string type, std::string src[100]);
	Cat(const Cat& copy);
	Cat& operator=(const Cat& rhs);
	~Cat();

	void makeSound() const;
	Brain & get_Brain(void) const;

private:
	Brain* _Brain;
};
