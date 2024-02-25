#include "ICharacter.hpp"

ICharacter::ICharacter()
{

}

ICharacter::ICharacter(ICharacter &t)
{
    *this = t;
}

ICharacter& ICharacter::operator=(const ICharacter &t)
{
    *this = t;
    return (*this);
}

ICharacter::ICharacter(std::string const & name)
{
    _name = name;
}


std::string const & ICharacter::getName() const
{
    return (this->_name);
}