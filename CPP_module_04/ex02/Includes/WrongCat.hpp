#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(std::string type, std::string src[100]);
	WrongCat(const WrongCat& copy);
	WrongCat& operator=(const WrongCat& rhs);
	~WrongCat();

	void makeSound() const;
	Brain & get_Brain(void) const;
private:
	Brain* _Brain;	
};
