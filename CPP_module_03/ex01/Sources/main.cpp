#include "ScavTrap.hpp"
#include <iostream>

int main (void)
{
  ScavTrap Matthis;
  ScavTrap tmp("Matthis");
  ScavTrap tmp2(tmp);
  Matthis = tmp2;

  ScavTrap Looser("Looser");

  std::cout << "Energy Matthis >> " << Matthis.get_clap().get_Energy_points() << std::endl;
  std::cout << "Hit Matthis >> " << Matthis.get_clap().get_Hit_points() << std::endl;
  std::cout << "Energy Looser >> " << Looser.get_clap().get_Energy_points() << std::endl;
  std::cout << "Hit Looser >> " << Looser.get_clap().get_Hit_points() << std::endl;
	Matthis.attack(Looser.get_clap().get_Name());
	Looser.get_clap().takeDamage(Matthis.get_clap().get_Attack_damage());
  std::cout << "Energy Matthis >> " << Matthis.get_clap().get_Energy_points() << std::endl;
  std::cout << "Hit Matthis >> " << Matthis.get_clap().get_Hit_points() << std::endl;
  std::cout << "Energy Looser >> " << Looser.get_clap().get_Energy_points() << std::endl;
  std::cout << "Hit Looser >> " << Looser.get_clap().get_Hit_points() << std::endl;
	Looser.get_clap().takeDamage(20);
  std::cout << "Energy Matthis >> " << Matthis.get_clap().get_Energy_points() << std::endl;
  std::cout << "Hit Matthis >> " << Matthis.get_clap().get_Hit_points() << std::endl;
  std::cout << "Energy Looser >> " << Looser.get_clap().get_Energy_points() << std::endl;
  std::cout << "Hit Looser >> " << Looser.get_clap().get_Hit_points() << std::endl;
	Looser.get_clap().takeDamage(80);
  std::cout << "Energy Matthis >> " << Matthis.get_clap().get_Energy_points() << std::endl;
  std::cout << "Hit Matthis >> " << Matthis.get_clap().get_Hit_points() << std::endl;
  std::cout << "Energy Looser >> " << Looser.get_clap().get_Energy_points() << std::endl;
  std::cout << "Hit Looser >> " << Looser.get_clap().get_Hit_points() << std::endl;
	Looser.get_clap().takeDamage(8);
  std::cout << "Energy Matthis >> " << Matthis.get_clap().get_Energy_points() << std::endl;
  std::cout << "Hit Matthis >> " << Matthis.get_clap().get_Hit_points() << std::endl;
  std::cout << "Energy Looser >> " << Looser.get_clap().get_Energy_points() << std::endl;
  std::cout << "Hit Looser >> " << Looser.get_clap().get_Hit_points() << std::endl;
  Looser.get_clap().beRepaired(2);
  std::cout << "Energy Matthis >> " << Matthis.get_clap().get_Energy_points() << std::endl;
  std::cout << "Hit Matthis >> " << Matthis.get_clap().get_Hit_points() << std::endl;
  std::cout << "Energy Looser >> " << Looser.get_clap().get_Energy_points() << std::endl;
  std::cout << "Hit Looser >> " << Looser.get_clap().get_Hit_points() << std::endl;
  Matthis.get_clap().takeDamage(1);
  std::cout << "Energy Matthis >> " << Matthis.get_clap().get_Energy_points() << std::endl;
  std::cout << "Hit Matthis >> " << Matthis.get_clap().get_Hit_points() << std::endl;
  std::cout << "Energy Looser >> " << Looser.get_clap().get_Energy_points() << std::endl;
  std::cout << "Hit Looser >> " << Looser.get_clap().get_Hit_points() << std::endl;
	Matthis.get_clap().beRepaired(10);
  std::cout << "Energy Matthis >> " << Matthis.get_clap().get_Energy_points() << std::endl;
  std::cout << "Hit Matthis >> " << Matthis.get_clap().get_Hit_points() << std::endl;
  std::cout << "Energy Looser >> " << Looser.get_clap().get_Energy_points() << std::endl;
  std::cout << "Hit Looser >> " << Looser.get_clap().get_Hit_points() << std::endl;
  Matthis.guardGate();
	return 0;
}
