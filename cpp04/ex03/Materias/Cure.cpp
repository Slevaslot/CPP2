#include "Cure.hpp"


Cure::~Cure()
{

}

Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(Cure &t) : AMateria()
{
    this->_name = t._name;
    this->_type = t._type;
}

Cure& Cure::operator=(const Cure &t)
{
    this->_type = t._type;
	this->_name = t._name;
    return (*this);
}

Cure::Cure(std::string const & name)
{
	this->_type = "cure";
    _name = name;
}

Cure* Cure::clone() const
{
    Cure *tmp = new Cure();
    tmp->_name = this->_name;
    tmp->_type = this->_type;
    return(tmp);
}

void Cure::use(ICharacter& target)
{
    if (this->_type == "cure")
        std::cout << "* \e[0;32mheals \e[0m" << target.getName() <<"’s wounds *" << std::endl;
    else
        return ;
}
