#include "dog.hpp"

Dog::Dog()
{
	std::cout << "🐕 \033[38;5;95mDog constructor called\033[0m" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "🐕 \033[38;5;95mDog destructor called\033[0m" << std::endl;
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

void Dog::makeSound() const
{
	if (this->type == "Dog")
		std::cout << "🐕 \033[38;5;95mWaf Waf\033[0m " << std::endl;
}
