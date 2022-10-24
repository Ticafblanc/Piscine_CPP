#include <string>

class ClapTrap
{
public:

	ClapTrap();
	ClapTrap(std::string Name);
	ClapTrap(const ClapTrap& C);

	ClapTrap& operator=(const ClapTrap& C);

	~ClapTrap();

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string const & get_Name(void);
	unsigned int get_Attack_damage(void);
	unsigned int get_Energy_points(void);
	unsigned int get_Hit_points(void);

protected:
	const std::string		_Name;
	unsigned int	_Hit_points;
	unsigned int	_Energy_points;
	unsigned int	_Attack_damage;
};
