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

void Dog::makeSound() const
{
	if (this->type == "Cat")
		std::cout << "😺 \033[33mMiaou Miaou\033[0m" << std::endl;
	else if (this->type == "Dog")
		std::cout << "🐕 \033[38;5;95mWaf Waf\033[0m " << std::endl;
	else
		std::cout << "😑 \033[1;31muknown sound\033[0m" << std::endl;
}