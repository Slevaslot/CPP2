#include "Character.hpp"


Character::Character()
{

}

Character::Character(Character &t)
{
    *this = t;
}

Character& Character::operator=(const Character &t)
{
    _storage[4] = t._storage[4];
    this->_name = t._name;
    return (*this);
}

Character::Character(std::string const & name)
{
    _name = name;
}


std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
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

void Character::unequip(int idx)
{
    if (this->_storage[idx] != NULL)
        this->_storage[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    this->_storage[idx]->use(target);
}
