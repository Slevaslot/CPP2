#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <new>

class Brain {
	protected :
		std::string ideas[100];
	public :
		Brain();
		Brain(const Brain & ani);
		Brain &operator=(const Brain & ani);
		~Brain();
};

#endif
