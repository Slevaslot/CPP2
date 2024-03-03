#ifndef ICE_HPP
#define ICE_HPP
#include "../AMateria.hpp"

class Ice : public AMateria
{
    public:
    Ice();
    Ice(std::string const & type);

    Ice(Ice &t);
    ~Ice();
    Ice &operator=(const Ice & t);
    Ice* clone() const;
    void use(ICharacter& target);
};

#endif
