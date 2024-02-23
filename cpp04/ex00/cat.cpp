
#include "cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
}

Cat::~Cat()
{

}

Cat::	Cat(Cat const &t) : Animal()
{
	*this = t;
}

Cat& Cat::operator=(const Cat &t)
{
	this->type = t.type;
	return (*this);
}
