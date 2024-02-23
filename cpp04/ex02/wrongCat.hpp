#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP


#include "wrongCat.hpp"
#include "wrongAnimal.hpp"

class wrongCat : public wrongAnimal
{
	public :

	wrongCat();
	wrongCat(const wrongCat &t);
	wrongCat &operator=(const wrongCat &t);

	~wrongCat();

};

#endif
