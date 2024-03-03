#include "brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::	Brain(Brain const &t)
{
	*this = t;
}

Brain& Brain::operator=(const Brain &t)
{
	this->ideas[100] = t.ideas[100];
	return (*this);
}
