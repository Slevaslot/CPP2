# ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string.h>
#include <iostream>

class ClapTrap{
	private:
		int _Hit_point;
		int _Energy_point;
		int _Attack_damage;
		std::string _name;
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &t);
		ClapTrap &operator=(const ClapTrap &t);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
