#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	this->Clap.set_Hit_points(100);
	this->Clap.set_Energy_points(50);
	this->Clap.set_Attack_damage(20);
	std::cout << "Constructor(void) in ScavTrap called" << std::endl; 
}

ScavTrap::ScavTrap(std::string Name)
{
	this->Clap.set_Name(Name);
	this->Clap.set_Hit_points(100);
	this->Clap.set_Energy_points(50);
	this->Clap.set_Attack_damage(20);
	std::cout << "Constructor(Name) in ScavTrap called argument >> " << Name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& C)
{
	this->Clap = C.Clap;
	std::cout << "constructor(Copy) in ScavTrap called argument >> " << this->Clap.get_Name() << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& C)
{
	this->Clap = C.Clap;
	std::cout << "Operator= in ScavTrap called argument >> " << this->Clap.get_Name() << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "Destructor in ScavTrap called for >> " << this->Clap.get_Name() << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	if (this->Clap.get_Hit_points() > 0 && this->Clap.get_Energy_points() > 0){
		this->Clap.set_Energy_points(this->Clap.get_Energy_points() - 1);
		std::cout << "ScavTrap " << this->Clap.get_Name()
							<< " attacks " << target
							<< ", causing " << this->Clap.get_Attack_damage()
							<< " points of damage!" << std::endl;
	}
	else
		std::cout << this->Clap.get_Name() << " can't attack already dead hit point >> "
							<< this->Clap.get_Hit_points()
							<< " energy points >> "
							<< this->Clap.get_Energy_points() << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap >> " << this->Clap.get_Name() << " in Gate keeper mode" << std::endl;
}

ClapTrap & ScavTrap::get_clap(void){ return this->Clap; }
