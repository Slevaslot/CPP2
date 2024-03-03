#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::~Ice()
{

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

Ice* Ice::clone() const
{
   return((Ice *)this);
}

void Ice::use(ICharacter& target)
{
    if (this->_type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
    else if (this->_type == "cure")
        std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
    else
        return ;
}
