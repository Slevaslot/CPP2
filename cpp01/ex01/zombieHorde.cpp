#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombieHorde;
	zombieHorde = new Zombie[N];

	while(N > 0)
		zombieHorde[--N].set_zombie(name);
	return (zombieHorde);
}
