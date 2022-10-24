#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() 
				: ClapTrap(){
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << "Constructor(void) in ScavTrap called" << std::endl; 
}

ScavTrap::ScavTrap(std::string Name)
				: ClapTrap(Name){
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << "Constructor(Name) in ScavTrap called argument >> " << Name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& C)
				: ClapTrap(C){
	std::cout << "constructor(Copy) in ScavTrap called argument >> " << C._Name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& C){
					ClapTrap::operator=(C);
	std::cout << "Operator= in ScavTrap called argument >> " << C._Name << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "Destructor in ScavTrap called for >> " << this->_Name << std::endl;
}

void ScavTrap::attack(std::string const & target){
	if (this->_Hit_points > 0 && this->_Energy_points > 0){
		this->_Energy_points--;
		std::cout << "ScavTrap " << this->_Name
							<< " attacks " << target
							<< ", causing " << this->_Attack_damage
							<< " points of damage!" << std::endl;
	}
	else
		std::cout << this->_Name << " can't attack already dead hit point >> "
							<< this->_Hit_points
							<< " energy points >> "
							<< this->_Energy_points	<< std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap >> " << this->_Name << " in Gate keeper mode" << std::endl;
}
