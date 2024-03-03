
#include "cat.hpp"

Cat::Cat()
{
	std::cout << "😺 \033[33mCat constructor called\033[0m" << std::endl;
	this->type = "Cat";
	this->catBrain = new Brain();
}

Cat::~Cat()
{
	std::cout << "😺 \033[33mCat destructor called\033[0m" << std::endl;
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

void Cat::makeSound() const
{
	if (this->type == "Cat")
		std::cout << "😺 \033[33mMiaou Miaou\033[0m" << std::endl;
	else if (this->type == "Dog")
		std::cout << "🐕 \033[38;5;95mWaf Waf\033[0m " << std::endl;
	else
		std::cout << "😑 \033[1;31muknown sound\033[0m" << std::endl;
}
