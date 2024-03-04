#ifndef DOG_HPP
# define DOG_HPP


#include "animals.hpp"

class Dog : public Animal
{
	public :

	Dog();
	Dog(const Dog &t);
	Dog &operator=(const Dog &t);
	virtual void makeSound() const;
	~Dog();

};

#endif
