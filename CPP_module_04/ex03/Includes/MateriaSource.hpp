#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	
	MateriaSource& operator=(const MateriaSource& rhs);

	~MateriaSource();

	void learnMateria(AMateria* m);
	AMateria* createMateria(const std::string& type);
	AMateria* getmateria(int i) const; 

private:

	AMateria* _materia[4];
};
