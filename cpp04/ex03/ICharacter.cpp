#include "AMateria.hpp"

ICharacter::ICharacter()
{
    this->_storage[0] = NULL;
    this->_storage[1] = NULL;
    this->_storage[2] = NULL;
    this->_storage[3] = NULL;
}

ICharacter::ICharacter(ICharacter &t)
{
    _storage[0] = t._storage[0];
    _storage[1] = t._storage[1];
    _storage[2] = t._storage[2];
    _storage[3] = t._storage[3];
    this->_name = t._name;
}

ICharacter& ICharacter::operator=(const ICharacter &t)
{
    _storage[0] = t._storage[0];
    _storage[1] = t._storage[1];
    _storage[2] = t._storage[2];
    _storage[3] = t._storage[3];
    this->_name = t._name;
    return (*this);
}

ICharacter::ICharacter(std::string const & name)
{
    this->_storage[0] = NULL;
    this->_storage[1] = NULL;
    this->_storage[2] = NULL;
    this->_storage[3] = NULL;
    _name = name;
}


// std::string const & ICharacter::getName() const
// {
//     return (this->_name);
// }

void ICharacter::equip(AMateria* m)
{
    if (!_storage[0])
        _storage[0] = m;
    else if (!_storage[1])
        _storage[1] = m;
    else if (!_storage[2])
        _storage[2] = m;
    else if (!_storage[3])
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

