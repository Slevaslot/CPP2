#ifndef DOG_HPP
# define DOG_HPP

#include "brain.hpp"
#include "animals.hpp"

class Dog : public Animal
{
	private :
	Brain *dogBrain;

	public :

	Dog();
	Dog(const Dog &t);
	Dog &operator=(const Dog &t);

	~Dog();

};

#endif
