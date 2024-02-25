#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(AMateria &t)
{
    *this = t;
}

AMateria& AMateria::operator=(const AMateria &t)
{
    *this = t;
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
    std::cout << "the" << this->_type << " is used on " << target._name << std::endl;
}


