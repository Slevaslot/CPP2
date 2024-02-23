#ifndef CAT_HPP
# define CAT_HPP

#include "brain.hpp"
#include "animals.hpp"

class Cat : public Animal
{
	private :
	Brain *catBrain;
	public :

	Cat();
	Cat(const Cat &t);
	Cat &operator=(const Cat &t);

	~Cat();

};

#endif
