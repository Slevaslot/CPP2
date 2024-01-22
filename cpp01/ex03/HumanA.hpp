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
	void	attack()
	{
		std::cout << _name << " "<<"attacks with their" << " "<< _weapon->getType() << std::endl;
	}
	HumanA(std::string _newname, Weapon &weapon);
};

#endif
