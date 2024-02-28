#ifndef CURE_HPP
#define CURE_HPP
#include "../AMateria.hpp"

class Cure
{
    protected:
    std::string _type;
    std::string _name;
    public:
    Cure();
    Cure(std::string const & type);

    Cure(Cure &t);
    ~Cure();
    Cure &operator=(const Cure & t);
    Cure* clone();
};

#endif
