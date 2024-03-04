
#include "cat.hpp"

Cat::Cat()
{
	std::cout << "😺 \033[33mCat constructor called\033[0m" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "😺 \033[33mCat destructor called\033[0m" << std::endl;
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

void Cat::makeSound() const
{
	if (this->type == "Cat")
		std::cout << "😺 \033[33mMiaou Miaou\033[0m" << std::endl;
}

