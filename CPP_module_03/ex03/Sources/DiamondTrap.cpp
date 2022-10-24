#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
						: ClapTrap("_clap_name"), ScavTrap(), FragTrap(), _Name(""){
	this->FragTrap::_Hit_points = 100;
	this->ScavTrap::_Energy_points = 50;
	this->FragTrap::_Attack_damage = 30;
	std::cout << "Constructor(void) in DaimmondTrap called" << std::endl; 
}

DiamondTrap::DiamondTrap(std::string Name)
						: ClapTrap(Name + "_clap_name"), ScavTrap(), FragTrap(), _Name(Name){
	this->FragTrap::_Hit_points = 100;
	this->ScavTrap::_Energy_points = 50;
	this->FragTrap::_Attack_damage = 30;
	std::cout << "Constructor(Name) in DaimmondTrap called argument >> " << Name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& C)
						: ClapTrap(C), ScavTrap(), FragTrap(), _Name(C._Name){
	this->FragTrap::_Hit_points = C._Hit_points;
	this->ScavTrap::_Energy_points = C._Energy_points;
	this->FragTrap::_Attack_damage = C._Attack_damage;
	std::cout << "constructor(Copy) in DaimmondTrap called argument >> " << C._Name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& C){
	this->FragTrap::_Hit_points = C._Hit_points;
	this->ScavTrap::_Energy_points = C._Energy_points;
	this->FragTrap::_Attack_damage = C._Attack_damage;
	std::string *N = const_cast <std::string*> (&this->_Name);
	*N = C._Name;	
	std::string *N2 = const_cast <std::string*> (&this->ClapTrap::_Name);
	*N2 = C.ClapTrap::_Name;
	std::cout << "Operator= in DaimmondTrap called argument >> " << C._Name << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap(){ std::cout << "Destructor in DaimmondTrap called for >> " << this->_Name << std::endl; }

void DiamondTrap::attack(std::string const & target){ this->ScavTrap::attack(target); }

void DiamondTrap::whoAmI(){ std::cout << "DiamondTrap >> " << this->_Name << " & ClapTrap >> " << this->ClapTrap::_Name << std::endl; }
