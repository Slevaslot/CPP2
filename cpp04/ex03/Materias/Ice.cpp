#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(Ice &t)
{
    *this = t;
}

Ice& Ice::operator=(const Ice &t)
{
    this->_type = t._type;
	this->_name = t._name;
    return (*this);
}

Ice::Ice(std::string const & name)
{
	this->_type = "ice";
    _name = name;
}

Ice* Ice::clone()
{
   return((Ice *)this);
}
