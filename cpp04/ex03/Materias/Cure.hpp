#ifndef CURE_HPP
#define CURE_HPP
#include "../AMateria.hpp"

class Cure : public AMateria
{
    public:
    Cure();
    Cure(std::string const & type);

    Cure(Cure &t);
    ~Cure();
    Cure &operator=(const Cure & t);
    Cure* clone() const;
    void use(ICharacter& target);
};

#endif
