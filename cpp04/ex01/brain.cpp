#include "brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor brain called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Destructor brain called" << std::endl;
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
