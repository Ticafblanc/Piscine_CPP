#include "DiamondTrap.hpp"
#include <iostream>

int main (void)
{
  DiamondTrap Matthis;
  DiamondTrap tmp("Matthis");
  DiamondTrap tmp2(tmp);
  Matthis = tmp2;

  DiamondTrap Looser("Looser");

  std::cout << "Energy Matthis >> " << Matthis.get_Energy_points() << std::endl;
  std::cout << "Hit Matthis >> " << Matthis.get_Hit_points() << std::endl;
  std::cout << "Energy Looser >> " << Looser.get_Energy_points() << std::endl;
  std::cout << "Hit Looser >> " << Looser.get_Hit_points() << std::endl;
	Matthis.attack(Looser.get_Name());
	Looser.takeDamage(Matthis.get_Attack_damage());
  std::cout << "Energy Matthis >> " << Matthis.get_Energy_points() << std::endl;
  std::cout << "Hit Matthis >> " << Matthis.get_Hit_points() << std::endl;
  std::cout << "Energy Looser >> " << Looser.get_Energy_points() << std::endl;
  std::cout << "Hit Looser >> " << Looser.get_Hit_points() << std::endl;
	Looser.takeDamage(20);
  std::cout << "Energy Matthis >> " << Matthis.get_Energy_points() << std::endl;
  std::cout << "Hit Matthis >> " << Matthis.get_Hit_points() << std::endl;
  std::cout << "Energy Looser >> " << Looser.get_Energy_points() << std::endl;
  std::cout << "Hit Looser >> " << Looser.get_Hit_points() << std::endl;
	Looser.takeDamage(80);
  std::cout << "Energy Matthis >> " << Matthis.get_Energy_points() << std::endl;
  std::cout << "Hit Matthis >> " << Matthis.get_Hit_points() << std::endl;
  std::cout << "Energy Looser >> " << Looser.get_Energy_points() << std::endl;
  std::cout << "Hit Looser >> " << Looser.get_Hit_points() << std::endl;
	Looser.takeDamage(8);
  std::cout << "Energy Matthis >> " << Matthis.get_Energy_points() << std::endl;
  std::cout << "Hit Matthis >> " << Matthis.get_Hit_points() << std::endl;
  std::cout << "Energy Looser >> " << Looser.get_Energy_points() << std::endl;
  std::cout << "Hit Looser >> " << Looser.get_Hit_points() << std::endl;
  Looser.beRepaired(2);
  std::cout << "Energy Matthis >> " << Matthis.get_Energy_points() << std::endl;
  std::cout << "Hit Matthis >> " << Matthis.get_Hit_points() << std::endl;
  std::cout << "Energy Looser >> " << Looser.get_Energy_points() << std::endl;
  std::cout << "Hit Looser >> " << Looser.get_Hit_points() << std::endl;
  Matthis.takeDamage(1);
  std::cout << "Energy Matthis >> " << Matthis.get_Energy_points() << std::endl;
  std::cout << "Hit Matthis >> " << Matthis.get_Hit_points() << std::endl;
  std::cout << "Energy Looser >> " << Looser.get_Energy_points() << std::endl;
  std::cout << "Hit Looser >> " << Looser.get_Hit_points() << std::endl;
	Matthis.beRepaired(10);
  std::cout << "Energy Matthis >> " << Matthis.get_Energy_points() << std::endl;
  std::cout << "Hit Matthis >> " << Matthis.get_Hit_points() << std::endl;
  std::cout << "Energy Looser >> " << Looser.get_Energy_points() << std::endl;
  std::cout << "Hit Looser >> " << Looser.get_Hit_points() << std::endl;
  Matthis.guardGate();
  Matthis.highFivesGuys();
  Matthis.whoAmI();
	return 0;
}
