#include "HumanB.hpp"

HumanB::HumanB(std::string _newname)
{
	this->_weapon = NULL;
	this->_name = _newname;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	_weapon = &newWeapon;
}

void	HumanB::attack()
{
	if (this->_weapon == NULL)
		std::cout << _name << " " << "cant attack without weapon" << std::endl;
	return ;
	std::cout << _name << " "<<"attacks with their" << " "<< _weapon->getType() << std::endl;
}
