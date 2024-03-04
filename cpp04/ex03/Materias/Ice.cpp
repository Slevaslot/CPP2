#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::~Ice()
{

}

Ice::Ice(Ice &t) : AMateria()
{
    this->_name = t._name;
    this->_type = t._type;
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
    Ice *tmp = new Ice();
    tmp->_name = this->_name;
    tmp->_type = this->_type;
    return(tmp);
}

void Ice::use(ICharacter& target)
{
    if (this->_type == "ice")
        std::cout << "* shoots an \e[0;36mice bolt\e[0m at " << target.getName() << "*" << std::endl;
    return ;
}
