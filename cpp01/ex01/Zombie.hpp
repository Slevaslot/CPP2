#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Zombie{
	private :
	std::string _name;

	public :
	void	set_zombie(std::string name);
	void	announce( void );
	~Zombie();

};

Zombie* zombieHorde( int N, std::string name );

#endif
