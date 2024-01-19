#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << this->_name << " : " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_zombie(std::string string)
{
	_name = string;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " Is now dead" << std::endl;
}
