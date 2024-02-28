#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(Cure &t)
{
    *this = t;
}

Cure& Cure::operator=(const Cure &t)
{
    this->_type = t._type;
	this->_name = t._name;
    return (*this);
}

Cure::Cure(std::string const & name)
{
	this->_type = "cure";
    _name = name;
}

Cure* Cure::clone()
{
   return((Cure *)this);
}
