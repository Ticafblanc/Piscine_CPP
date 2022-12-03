#include "ClapTrap.hpp" 
#include <iostream>

ClapTrap::ClapTrap() 
	: _Name(""), _Hit_points(10), _Energy_points(10), _Attack_damage(0){
	std::cout << "constructor(void) called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) 
	: _Name(Name), _Hit_points(10), _Energy_points(10), _Attack_damage(0){
	std::cout << "Constructor(Name) called argument >> " << Name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& C)
	: _Name(C._Name), _Hit_points(C._Hit_points),
	_Energy_points(C._Energy_points), _Attack_damage(C._Attack_damage){
	std::cout << "constructor(Copy) called argument >> " << C._Name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& C){
	std::string *N = const_cast <std::string*> (&this->_Name);
	*N = C._Name;
	this->_Hit_points = C._Hit_points;
	this->_Energy_points = C._Energy_points;
	this->_Attack_damage = C._Attack_damage;
	std::cout << "Operator= called argument >> " << C._Name << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called for >> " << this->_Name << std::endl;
}

void ClapTrap::attack(std::string const & target){
	if (this->_Hit_points > 0 && this->_Energy_points > 0){
		this->_Energy_points--;
		std::cout << "ClapTrap " << this->_Name
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

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_Hit_points > 0 && this->_Energy_points > 0){
		this->_Hit_points -= (this->_Hit_points < amount)? _Hit_points : amount;
		std::cout << "ClapTrap " << this->_Name
							<< " take a damage " << amount
							<< " points of damage!" << std::endl;
	}
	else
		std::cout << this->_Name << " can't take a damage already dead hit point >> "
							<< this->_Hit_points
							<< " energy points >> "
							<< this->_Energy_points	<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_Hit_points > 0 && this->_Energy_points > 0){
		this->_Hit_points += amount;
		std::cout << "ClapTrap " << this->_Name
							<< " repaired " << amount
							<< " points of hit!" << std::endl;
	}
	else
		std::cout << this->_Name << " can't to be repaired already dead hit point >> "
							<< this->_Hit_points
							<< " energy points >> "
							<< this->_Energy_points	<< std::endl;
}

std::string const & ClapTrap::get_Name(void){ return this->_Name; }
unsigned int ClapTrap::get_Attack_damage(void){ return this->_Attack_damage; }
unsigned int ClapTrap::get_Hit_points(void){ return this->_Hit_points; }
unsigned int ClapTrap::get_Energy_points(void){ return this->_Energy_points; }

void ClapTrap::set_Name(std::string Name)
{
	std::string *N = const_cast <std::string*> (&this->_Name);
	*N = Name;
}

void ClapTrap::set_Attack_damage(int p){ this->_Attack_damage = p; }
void ClapTrap::set_Hit_points(int p){ this->_Hit_points = p; }
void ClapTrap::set_Energy_points(int p){ this->_Energy_points = p; }
