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


// std::string const & ICharacter::getName() const
// {
//     return (this->_name);
// }

void ICharacter::equip(AMateria* m)
{
    if (_storage[0] == NULL)
        _storage[0] = m;
    else if (_storage[1] == NULL)
        _storage[1] = m;
    else if (_storage[2] == NULL)
        _storage[2] = m;
    else if (_storage[3] == NULL)
        _storage[3] = m;
    else
        std::cout << "No more space in inventory" << std::endl;

}


void ICharacter::unequip(int idx)
{
    if (this->_storage[idx] != NULL)
        this->_storage[idx] = NULL;
}

void ICharacter::use(int idx, ICharacter& target)
{
    if (_storage[idx])
        _storage[idx]->use(target);
}

