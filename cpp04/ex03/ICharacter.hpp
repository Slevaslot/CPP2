#include "AMateria.hpp"

class AMateria;

class ICharacter
{
    protected:
    int storage_left;
    public:
    std::string _name;

    ICharacter();
    ICharacter(ICharacter &t);
    ICharacter(std::string const & _name);
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};
