# ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string.h>
#include <iostream>

class ClapTrap{
	private:
		int _Hit_point = 10;
		int _Energy_point = 10;
		int _Attack_damage = 0;
	public:
		ClapTrap();
		ClapTrap(ClapTrap &t);
		ClapTrap &operator=(const ClapTrap &t);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
