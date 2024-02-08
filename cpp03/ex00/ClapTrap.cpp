#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "constructor called" << std::endl;
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
}


