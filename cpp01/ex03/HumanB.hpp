#ifndef HUMANB_H
# define HUMANB_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB{
	private :
	std::string _name;
	Weapon *_weapon;
	public :
	void	attack();
	HumanB(std::string _newname);
	void setWeapon(Weapon &weapon);
};

#endif
