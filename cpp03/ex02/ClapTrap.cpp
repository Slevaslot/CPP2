#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_Attack_damage = 10;
	this->_Energy_point = 10;
	this->_Attack_damage = 0;
	this->_name = name;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap()
{
	this->_Attack_damage = 10;
	this->_Energy_point = 10;
	this->_Attack_damage = 0;
	this->_name = "Default";
	std::cout << "ClapTrap Default constructor called" << std::endl;
}


ClapTrap::ClapTrap(ClapTrap &t)
{
	*this = t;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &t)
{
	this->_Attack_damage = t._Attack_damage;
	this->_Energy_point = t._Energy_point;
	this->_Hit_point = t._Hit_point;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_Hit_point == 0)
	{
		std::cout << this->_name << " is dead..." << std::endl;
		return ;
	}
	std::cout << this->_name << " " << "attacks " << target << ", causing " << this->_Attack_damage <<" points of damage!" << std::endl;
	--this->_Energy_point;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Hit_point == 0)
	{
		std::cout << this->_name << " is dead..." << std::endl;
		return ;
	}
	std::cout << this->_name << " repaired himself and get " << amount << " hit point back!" << std::endl;
	--this->_Energy_point;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hit_point == 0)
	{
		std::cout << this->_name << " is already dead let him alone..." << std::endl;
		return ;
	}
	std::cout << this->_name << " took " << amount << " damage!!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : "<< this->_name << " destructor called" << std::endl;
}


