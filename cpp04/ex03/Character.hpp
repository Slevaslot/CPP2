# ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include <new>
#include "Materias/Ice.hpp"
#include "Materias/Cure.hpp"
#include "AMateria.hpp"
class AMateria;

class Character : public ICharacter
{
    protected:
    AMateria *_storage[4];
    public:
    std::string _name;

    Character();
    Character(Character &t);
    Character(std::string const & _name);
    Character& operator=(const Character &t);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif
