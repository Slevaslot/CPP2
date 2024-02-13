#ifndef FragTrap_HPP
# define FragTrap_HPP

#include <iostream>
#include <string>
#include <new>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public :
		FragTrap();
		FragTrap(const std::string name);
		// FragTrap(const FragTrap &Scav);
		~FragTrap();
		// FragTrap &operator=(const FragTrap &Scav);
		// void attack(const std::string &target);
		void highFivesGuys(void);
};

#endif
