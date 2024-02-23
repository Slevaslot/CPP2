#include "animals.hpp"

Animal::Animal()
{
	this->type = "No match animal";
}

std::string Animal::getType() const
{
	return (this->type);
}

Animal::~Animal()
{

}

Animal::	Animal(Animal const &t)
{
	*this = t;
}

Animal& Animal::operator=(const Animal &t)
{
	this->type = t.type;
	return (*this);
}

void Animal::makeSound() const
{
	if (this->type == "Cat")
		std::cout << "😺 \033[33mMiaou Miaou\033[0m" << std::endl;
	else if (this->type == "Dog")
		std::cout << "🐕 \033[38;5;95mWaf Waf\033[0m " << std::endl;
	else
		std::cout << "😑 \033[1;31muknown sound\033[0m" << std::endl;
}




