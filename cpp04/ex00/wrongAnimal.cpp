#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal()
{
	this->type = "no match wrongAnimals";
}

std::string wrongAnimal::getType() const
{
	return (this->type);
}

wrongAnimal::~wrongAnimal()
{

}

wrongAnimal::	wrongAnimal(wrongAnimal const &t)
{
	*this = t;
}

wrongAnimal& wrongAnimal::operator=(const wrongAnimal &t)
{
	this->type = t.type;
	return (*this);
}

void wrongAnimal::makeSound() const
{
	std::cout << "uknown sound" << std::endl;
}



