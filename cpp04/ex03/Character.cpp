#include "Character.hpp"


Character::Character()
{
    this->_storage[0] = NULL;
    this->_storage[1] = NULL;
    this->_storage[2] = NULL;
    this->_storage[3] = NULL;
}

Character::~Character()
{
    if (_storage[0])
        delete _storage[0];
    if (_storage[1])
        delete _storage[1];
    if (_storage[2])
        delete _storage[2];
    if (_storage[3])
        delete _storage[3];
}

Character& Character::operator=(const Character &t)
{
    _storage[0] = t._storage[0];
    _storage[1] = t._storage[1];
    _storage[2] = t._storage[2];
    _storage[3] = t._storage[3];
    this->_name = t._name;
    return (*this);
}

Character::Character(std::string const & name)
{
    this->_storage[0] = NULL;
    this->_storage[1] = NULL;
    this->_storage[2] = NULL;
    this->_storage[3] = NULL;
    _name = name;
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
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

void Character::unequip(int idx)
{
    if (this->_storage[idx] != NULL)
        this->_storage[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (this->_storage[idx])
        this->_storage[idx]->use(target);
    else
        std::cout << "This item has no type" << std::endl;
}
