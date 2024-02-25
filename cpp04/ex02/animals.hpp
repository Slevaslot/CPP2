#ifndef ANIMALS_HPP
# define ANIMALS_HPP

#include <iostream>
#include <string>
#include <new>

class Animal {
	protected :
		std::string type;
	public :
		Animal();
		Animal(const Animal & ani);
		Animal &operator=(const Animal & ani);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif
