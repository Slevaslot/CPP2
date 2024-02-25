# ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include <new>

#include "ICharacter.hpp"

// class ICharacter
// {
//     protected:
//     int storage_left = 4;
//     public:
//     std::string _name;
//     virtual ~ICharacter() {}
//     virtual std::string const & getName() const = 0;
//     virtual void equip(AMateria* m) = 0;
//     virtual void unequip(int idx) = 0;
//     virtual void use(int idx, ICharacter& target) = 0;
// };

class ICharacter;

class AMateria
{
    protected:
    std::string _type;
    public:
    AMateria();
    AMateria(std::string const & type);

    AMateria(AMateria &t);
    ~AMateria();
    AMateria &operator=(const AMateria & ani);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};



#endif