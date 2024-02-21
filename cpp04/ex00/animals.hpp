#include <iostream>
#include <sys/wait.h>

class Animals
{
	protected :
	std::string type;
	public :

	Animals();
	Animals(std::string &type);
	Animals(Animals &t);
	Animals &operator=(const Animals &t);
	~Animals();

};

class Dog : protected Animals
{
	public :

	Dog();
	Dog(Dog &t);
	Dog &operator=(const Dog &t);
	~Dog();

};

class Cat : protected Animals
{
	public :

	Cat();
	Cat(Cat &t);
	Cat &operator=(const Cat &t);
	~Cat();

};
