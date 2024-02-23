#ifndef CAT_HPP
# define CAT_HPP


#include "animals.hpp"

class Cat : public Animal
{
	public :

	Cat();
	Cat(const Cat &t);
	Cat &operator=(const Cat &t);

	~Cat();

};

#endif
