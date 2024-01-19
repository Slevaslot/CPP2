#include "Zombie.hpp"

int main ()
{
	Zombie *manyZombies;
	manyZombies = zombieHorde(4, "hey");

	manyZombies[0].announce();
	manyZombies[1].announce();
	manyZombies[2].announce();
	manyZombies[3].announce();
	delete[] (manyZombies);
}
