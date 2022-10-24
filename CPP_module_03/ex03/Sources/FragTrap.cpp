#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() 
				: ClapTrap(){
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "Constructor(void) in FragTrap called" << std::endl; 
}

FragTrap::FragTrap(std::string Name)
				: ClapTrap(Name){
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "Constructor(Name) in FragTrap called argument >> " << Name << std::endl;
}

FragTrap::FragTrap(const FragTrap& C)
				: ClapTrap(C){
	std::cout << "constructor(Copy) in FragTrap called argument >> " << C._Name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& C){
					ClapTrap::operator=(C);
	std::cout << "Operator= in FragTrap called argument >> " << C._Name << std::endl;
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "Destructor in FragTrap called for >> " << this->_Name << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap >> " << this->_Name << " want an high Fives" << std::endl;
}
