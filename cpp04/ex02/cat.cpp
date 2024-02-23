
#include "cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->catBrain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete catBrain;
}

Cat::	Cat(Cat const &t) : Animal()
{
	this->catBrain = t.catBrain;
	*this = t;
}

Cat& Cat::operator=(const Cat &t)
{
	this->type = t.type;
	return (*this);
}
