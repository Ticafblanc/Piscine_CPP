#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = (other._materia[i]) ? other._materia[i]->clone() : NULL;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
	if (this != &rhs)
	{
		this->~MateriaSource();
		for (int i = 0; i < 4; i++)
		{
			if (this->_materia[i] != NULL)
			{
				delete(this->_materia[i]);
				this->_materia[i] = rhs._materia[i]->clone();
			}
			else
				this->_materia[i] = NULL;	
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_materia[i])
			delete this->_materia[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->_materia[i])
			{
				this->_materia[i] = m;
				return;
			}
		}
		delete(m);
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] && this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	}
	return NULL;
}

AMateria* MateriaSource::getmateria(int i) const
{
	if (i < 4)
		return this->_materia[i];
	return NULL;
}