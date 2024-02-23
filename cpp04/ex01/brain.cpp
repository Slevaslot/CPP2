#include "brain.hpp"

Brain::Brain()
{

}

Brain::~Brain()
{

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
