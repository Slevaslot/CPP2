#include "HumanB.hpp"

HumanB::HumanB(std::string _newname)
{
	this->_name = _newname;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	_weapon = &newWeapon;
}
