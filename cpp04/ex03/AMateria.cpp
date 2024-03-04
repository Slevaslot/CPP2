#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::~AMateria()
{

}

AMateria::AMateria(AMateria &t)
{
    this->_name = t._name;
    this->_type = t._type;
}

AMateria& AMateria::operator=(const AMateria &t)
{
    this->_type = t._type;
    this->_name = t._name;
    return (*this);
}

AMateria::AMateria(std::string const & type)
{
    _type = type;
}


std::string const & AMateria::getType() const
{
    return (this->_type);
}

AMateria* AMateria::clone() const
{
   return((AMateria *)this);
}

void AMateria::use(ICharacter& target)
{
    // if (this->_type == "ice")
    //     std::cout << "\034[1;31m* shoots an ice bolt at\034[0m\n " << target.getName() << "*" << std::endl;
    // else if (this->_type == "cure")
    //     std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
    // else
    (void)target;
    return ;
}


