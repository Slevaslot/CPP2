# ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include <string>
#include <new>
#include "Materias/Ice.hpp"
#include "Materias/Cure.hpp"

class AMateria;

class ICharacter
{
    protected:
    AMateria *_storage[4];
    public:
    std::string _name;

    ICharacter();
    ICharacter(ICharacter &t);
    ICharacter(std::string const & _name);
    ICharacter& operator=(const ICharacter &t);
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

#endif
