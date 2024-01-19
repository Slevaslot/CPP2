#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zombie2;
	zombie2 = new(Zombie);
	zombie2->set_zombie(name);
	return (zombie2);
}
