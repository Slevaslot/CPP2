#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>

class Weapon{
	private :
	std::string _type;
	public :
	const	std::string &getType();
	void	setType(std::string);
	Weapon(std::string newName);
};

#endif
