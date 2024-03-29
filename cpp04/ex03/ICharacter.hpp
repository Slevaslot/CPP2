# ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include <string>
#include <new>

class AMateria;

class ICharacter
{
    protected:
    AMateria *_storage[4];
    std::string _name;
    public:

    ICharacter();
    ICharacter(ICharacter &t);
    ICharacter(std::string const & _name);
    ICharacter& operator=(const ICharacter &t);
    virtual ~ICharacter(){};
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

#endif
