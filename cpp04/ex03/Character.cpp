#include "Character.hpp"

void Character::initStorage()
{
    for (int i = 0; i < 4 ; i++)
		this->_storage[i] = NULL;
}

Character::Character()
{
   this->initStorage();
}

Character::~Character()
{

}

Character::Character(Character &t) : ICharacter()
{
    this->initStorage();
    for (int i = 0; i <= 3 ;i++)
    {
        if (t._storage[i])
            this->_storage[i] = t._storage[i]->clone();
        // std::cout << "addr des materias :" << &this->_storage[i] << " | " << &t._storage[i] << std::endl;
    }
    this->_name = t._name;
}

Character& Character::operator=(const Character &t)
{
    std::cout << "ARAHHHH" << std::endl;
    delete this;
    Character *tmp = new Character;
    for (int i = 0; i <= 3 ;i++)
    {
        std::cout << "STORAGE I" << tmp->_storage[i] << std::endl;
        tmp->_storage[i] = t._storage[i];
        delete t._storage[i];
    }
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
    if (idx >= 0 && idx <= 3)
    {
        if (this->_storage[idx])
            this->_storage[idx]->use(target);
        else
            std::cout << "This item has no type" << std::endl;
    }
    else
        std::cout << "Index for storage is out of range" << std::endl;
}
