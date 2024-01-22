#include "HumanA.hpp"

HumanA::HumanA(std::string _newname, Weapon &newWeapon)
{
	this->_name = _newname;
	_weapon = &newWeapon;
}
