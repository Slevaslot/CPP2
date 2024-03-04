#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>
#include <new>

class wrongAnimal {
	protected :
		std::string type;
	public :
		wrongAnimal();
		wrongAnimal(const wrongAnimal & ani);
		wrongAnimal &operator=(const wrongAnimal & ani);
		virtual ~wrongAnimal();
		std::string getType() const;
		void makeSound() const;
};

#endif
