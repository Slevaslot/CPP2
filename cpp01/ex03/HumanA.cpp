#include "HumanA.hpp"

HumanA::HumanA(std::string _newname, Weapon &newWeapon)
{
	this->_name = _newname;
	_weapon = &newWeapon;
}

void	HumanA::attack()
{
	std::cout << _name << " "<<"attacks with their" << " "<< _weapon->getType() << std::endl;
}
