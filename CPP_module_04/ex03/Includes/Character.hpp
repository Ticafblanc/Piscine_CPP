#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	Character(void);
	Character(const std::string& name);
	Character(const Character& other);
	
	Character& operator=(const Character& rhs);

	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	AMateria* getmateria(int i) const; 

private:
	std::string _name;
	AMateria* _materia[4];
};