#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <new>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public :
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &Scav);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &Scav);
		void attack(const std::string &target);
};

#endif
