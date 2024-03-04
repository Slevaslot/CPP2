
#include "wrongCat.hpp"

wrongCat::wrongCat()
{
	this->type = "wrongCat";
}

wrongCat::~wrongCat()
{

}

wrongCat::	wrongCat(wrongCat const &t) : wrongAnimal()
{
	*this = t;
}

wrongCat& wrongCat::operator=(const wrongCat &t)
{
	this->type = t.type;
	return (*this);
}

void wrongCat::makeSound() const
{
	if (this->type == "wrongCat")
		std::cout << "🙀 Miaourrr Miaourrrrriieqw 🐙" << std::endl;
}
