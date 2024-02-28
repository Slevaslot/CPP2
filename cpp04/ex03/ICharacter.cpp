#include "AMateria.hpp"

ICharacter::ICharacter()
{

}

ICharacter::ICharacter(ICharacter &t)
{
    *this = t;
}

ICharacter& ICharacter::operator=(const ICharacter &t)
{
    _storage[4] = t._storage[4];
    this->_name = t._name;
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

void ICharacter::equip(AMateria* m)
{
    int i = -1;
    while(++i)
    {
        if (this->_storage[i] == NULL)
        {
            this->_storage[i] = m;
            break ;
        }
    }
}

void ICharacter::unequip(int idx)
{
    if (this->_storage[idx] != NULL)
        this->_storage[idx] = NULL;
}

void ICharacter::use(int idx, ICharacter& target)
{
    this->_storage[idx]->use(target);
}

