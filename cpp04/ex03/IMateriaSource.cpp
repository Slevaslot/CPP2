#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{

}

IMateriaSource::IMateriaSource(IMateriaSource &t)
{
    _storage[0] = t._storage[0];
    _storage[1] = t._storage[1];
    _storage[2] = t._storage[2];
    _storage[3] = t._storage[3];
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource &t)
{
    _storage[0] = t._storage[0];
    _storage[1] = t._storage[1];
    _storage[2] = t._storage[2];
    _storage[3] = t._storage[3];
    return (*this);
}

void IMateriaSource::learnMateria(AMateria* m)
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
        std::cout << "No more space in inventory to learn Materias" << std::endl;
}

AMateria* IMateriaSource::createMateria(std::string const & type)
{
    if (this->_storage[0] && this->_storage[0]->getType() == type)
        return (this->_storage[0]);
    else if (this->_storage[1] && this->_storage[1]->getType() == type)
        return (this->_storage[1]);
    else if (this->_storage[2] && this->_storage[2]->getType() == type)
        return (this->_storage[2]);
    else if (this->_storage[3] && this->_storage[3]->getType() == type)
        return (this->_storage[3]);
    else
        return (0);
}

