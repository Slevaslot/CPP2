#include "NewAMateria.hpp"

NewAMateria::NewAMateria()
{

}

NewAMateria::~NewAMateria()
{

}

NewAMateria::NewAMateria(NewAMateria &t)
{
    *this = t;
}

NewAMateria& NewAMateria::operator=(const NewAMateria &t)
{
    this->_type = t._type;
    return (*this);
}

NewAMateria::NewAMateria(std::string const & type)
{
    _type = type;
}


std::string const & NewAMateria::getType() const
{
    return (this->_type);
}

NewAMateria* NewAMateria::clone() const
{
   return((NewAMateria *)this);
}
