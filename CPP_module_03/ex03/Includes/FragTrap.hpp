#include "ClapTrap.hpp"

class FragTrap :  virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& C);

	FragTrap& operator=(const FragTrap& C);

	~FragTrap();

	void highFivesGuys();
};
