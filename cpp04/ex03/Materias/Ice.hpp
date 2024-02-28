#ifndef ICE_HPP
#define ICE_HPP
#include "../AMateria.hpp"

class Ice
{
    protected:
    std::string _type;
    std::string _name;
    public:
    Ice();
    Ice(std::string const & type);

    Ice(Ice &t);
    ~Ice();
    Ice &operator=(const Ice & t);
    Ice* clone();
};

#endif
