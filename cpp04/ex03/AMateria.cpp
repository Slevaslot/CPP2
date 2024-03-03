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
    *this = t;
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
    std::cout << "test" << std::endl;
    if (this->_type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
    else if (this->_type == "cure")
        std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
    else
        return ;
}


