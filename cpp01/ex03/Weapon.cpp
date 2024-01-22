#include "Weapon.hpp"

const std::string &Weapon::getType()
{
	return (_type);
}

void	Weapon::setType(std::string new_type)
{
	_type = new_type;
}

Weapon::Weapon(std::string weaponName)
{
	_type = weaponName;
}
