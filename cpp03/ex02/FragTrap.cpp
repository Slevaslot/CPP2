#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	this->_Hit_point = 100;
	this->_Energy_point = 100;
	this->_Attack_damage = 30;
	this->_name = "Default";
	std::cout << "FragTrap constructor called" << std::endl;
}

// FragTrap::FragTrap(FragTrap &t)
// {
// 	*this = t;
// }

// FragTrap& FragTrap::operator=(const FragTrap &t)
// {
// 	this->_Attack_damage = t._Attack_damage;
// 	this->_Energy_point = t._Energy_point;
// 	this->_Hit_point = t._Hit_point;
// 	return (*this);
// }

FragTrap::~FragTrap(){
	std::cout << "FragTrap : "<< this->_name << " destructor called" << std::endl;
}

FragTrap::FragTrap():ClapTrap()
{
	this->_Hit_point = 100;
	this->_Energy_point = 100;
	this->_Attack_damage = 30;
	this->_name = "FragTrap Default";
	std::cout << "Fragtrap Default constructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Fragtrap : " << this->_name << "Request a high fives" << std::endl;
}