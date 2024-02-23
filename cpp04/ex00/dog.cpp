#include "dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
}

Dog::~Dog()
{

}

Dog::	Dog(Dog const &t): Animal()
{
	*this = t;
}

Dog& Dog::operator=(const Dog &t)
{
	this->type = t.type;
	return (*this);
}
