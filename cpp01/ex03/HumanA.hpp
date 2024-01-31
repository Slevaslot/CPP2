#ifndef HUMANA_H
# define HUMANA_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA{
	private :
	std::string _name;
	Weapon *_weapon;
	public :
	void	attack();
	HumanA(std::string _newname, Weapon &weapon);
};

#endif
