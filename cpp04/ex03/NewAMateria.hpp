# ifndef NEWAMATERIA_H
#define NEWAMATERIA_H


#include "AMateria.hpp"

class NewAMateria : public AMateria {
private:
    std::string type_;
public:
    NewAMateria();
    NewAMateria(std::string const & type);

    NewAMateria(NewAMateria &t);
    ~NewAMateria();
    NewAMateria &operator=(const NewAMateria & ani);
    std::string const & getType() const;
    NewAMateria* clone() const;

};

#endif
