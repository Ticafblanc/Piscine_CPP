#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat& copy);
	WrongCat& operator=(const WrongCat& rhs);
	~WrongCat();

	void makeSound() const;
private:
	Brain* _brain;	
};
