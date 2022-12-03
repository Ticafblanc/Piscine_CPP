#include "ClapTrap.hpp"

class ScavTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& C);

	ScavTrap& operator=(const ScavTrap& C);

	~ScavTrap();

	void attack(std::string const & target);
	void guardGate();
	ClapTrap & get_clap(void);
private:
	ClapTrap Clap;
};
