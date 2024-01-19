#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie *zombie2;
	zombie2 = newZombie(name);
	zombie2->announce();
	delete(zombie2);
}
