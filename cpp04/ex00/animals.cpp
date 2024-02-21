#include "animals.hpp"

Animals::Animals()
{

}

Animals::Animals(std::string &type)
{
	this->type = type;
}

Animals::~Animals()
{

}

Animals::	Animals(Animals &t)
{
	*this = t;
}

Animals& Animals::operator=(const Animals &t)
{
	this->type = t.type;
	return (*this);
}

Dog::Dog()
{
	this->type = "Dog";
}

Cat::Cat()
{
	this->type = "Cat";
}

