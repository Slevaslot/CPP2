#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_Hit_point = 100;
	this->_Energy_point = 50;
	this->_Attack_damage = 20;
	this->_name = name;
	std::cout << "constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &t)
{
	*this = t;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &t)
{
	this->_Attack_damage = t._Attack_damage;
	this->_Energy_point = t._Energy_point;
	this->_Hit_point = t._Hit_point;
	return (*this);
}

ScavTrap::~ScavTrap(){

}

void ScavTrap::attack(const std::string& target)
{
	if (this->_Hit_point == 0)
	{
		std::cout << this->_name << " is dead..." << std::endl;
		return ;
	}
	std::cout << this->_name << " " << "attacks" << target << ", causing " << this->_Attack_damage <<" points of damage!" << std::endl;
	--this->_Energy_point;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_Hit_point == 0)
	{
		std::cout << this->_name << " is dead..." << std::endl;
		return ;
	}
	std::cout << this->_name << " repaired himself and get " << amount << " hit point back!" << std::endl;
	--this->_Energy_point;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_Hit_point == 0)
	{
		std::cout << this->_name << " is already dead let him alone..." << std::endl;
		return ;
	}
	std::cout << this->_name << " took " << amount << " damage!!" << std::endl;
}
