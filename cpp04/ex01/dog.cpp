#include "dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->dogBrain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete dogBrain;
}

Dog::	Dog(Dog const &t): Animal()
{
	this->dogBrain = t.dogBrain;
	*this = t;
}

Dog& Dog::operator=(const Dog &t)
{
	this->type = t.type;
	return (*this);
}
