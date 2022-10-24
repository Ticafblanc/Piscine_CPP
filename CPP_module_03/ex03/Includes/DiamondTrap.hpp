#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string Name);
	DiamondTrap(const DiamondTrap& C);

	DiamondTrap& operator=(const DiamondTrap& C);

	~DiamondTrap();

	void attack(std::string const & target);
	void whoAmI();

private:
	const std::string _Name;
};
