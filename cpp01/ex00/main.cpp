#include "Zombie.hpp"

int main ()
{
	Zombie zombie2;
	Zombie *zombie3;

	zombie2.set_zombie("soul");
	zombie2.announce();
	zombie2.announce();
	zombie2.set_zombie("sheyyy");
	zombie2.announce();
	zombie3 = newZombie("lev");
	zombie3->announce();
	delete(zombie3);
	randomChump("tess");
}
