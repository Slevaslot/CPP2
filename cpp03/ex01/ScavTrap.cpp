#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_Hit_point = 100;
	this->_Energy_point = 50;
	this->_Attack_damage = 20;
	this->_name = name;
	std::cout << "constructor called" << std::endl;
}

// ScavTrap::ScavTrap(ScavTrap &t)
// {
// 	*this = t;
// }

// ScavTrap& ScavTrap::operator=(const ScavTrap &t)
// {
// 	this->_Attack_damage = t._Attack_damage;
// 	this->_Energy_point = t._Energy_point;
// 	this->_Hit_point = t._Hit_point;
// 	return (*this);
// }

// ScavTrap::~ScavTrap(){

// }

ScavTrap::ScavTrap()
{
	this->_Hit_point = 100;
	this->_Energy_point = 50;
	this->_Attack_damage = 20;
	this->_name = "Default";
	std::cout << "Default constructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap "<< this->_name << "is now in Gate keeper mode" << std::endl;
}
