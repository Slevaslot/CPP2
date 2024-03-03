#include "MateriaSource.hpp"
#include "Character.hpp"

MateriaSource::MateriaSource()
{
    _matstorage[0] = NULL;
    _matstorage[1] = NULL;
    _matstorage[2] = NULL;
    _matstorage[3] = NULL;
}

MateriaSource::~MateriaSource()
{

        // delete _matstorage[0];

        // delete _matstorage[1];

        // delete _matstorage[2];

        // delete _matstorage[3];
}

MateriaSource::MateriaSource(MateriaSource &t) : IMateriaSource(t)
{
    _matstorage[0] = t._matstorage[0];
    _matstorage[1] = t._matstorage[1];
    _matstorage[2] = t._matstorage[2];
    _matstorage[3] = t._matstorage[3];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &t)
{
    _matstorage[0] = t._matstorage[0];
    _matstorage[1] = t._matstorage[1];
    _matstorage[2] = t._matstorage[2];
    _matstorage[3] = t._matstorage[3];
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!_matstorage[0])
        _matstorage[0] = m;
   else if (!_matstorage[1])
        _matstorage[1] = m;
   else if (!_matstorage[2])
        _matstorage[2] = m;
   else if (!_matstorage[3])
        _matstorage[3] = m;
    else
        std::cout << "No more space in inventory to learn Materias" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (this->_matstorage[0] && this->_matstorage[0]->getType() == type)
        return (this->_matstorage[0]);
    else if (this->_matstorage[1] && this->_matstorage[1]->getType() == type)
        return (this->_matstorage[1]);
    else if (this->_matstorage[2] && this->_matstorage[2]->getType() == type)
        return (this->_matstorage[2]);
    else if (this->_matstorage[3] && this->_matstorage[3]->getType() == type)
        return (this->_matstorage[3]);
    else
        return (0);
}

