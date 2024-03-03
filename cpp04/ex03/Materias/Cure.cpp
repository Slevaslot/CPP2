#include "Cure.hpp"


Cure::~Cure()
{

}

Cure::Cure()
{
	this->_type = "cure";
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

Cure* Cure::clone() const
{
   return((Cure *)this);
}

void Cure::use(ICharacter& target)
{
    if (this->_type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
    else if (this->_type == "cure")
        std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
    else
        return ;
}
