#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
{
public:
	Dog();
	Dog(std::string type, std::string src[100]);
	Dog(const Dog& copy);
	Dog& operator=(const Dog& rhs);
	~Dog();

	void makeSound() const;
	Brain & get_Brain(void) const ;

private:
	Brain* _Brain;
};
