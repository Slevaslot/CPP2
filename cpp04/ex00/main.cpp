#include "animals.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << meta->getType() << " | sound : ";
	meta->makeSound();
	std::cout << std::endl;
	std::cout << j->getType() << "             | sound : ";
	j->makeSound();
	std::cout << std::endl;
	std::cout << i->getType() << "             | sound : ";
	i->makeSound();
	std::cout << std::endl;
	j = new Cat();
	std::cout << j->getType() << "             | sound : ";
	j->makeSound();
	std::cout << std::endl;
	j = new Animal();
	std::cout << j->getType() << " | sound : ";
	j->makeSound();
	std::cout << std::endl;

	const wrongAnimal* wrong = new wrongCat();
	std::cout << wrong->getType() << "        | sound : ";
	wrong->makeSound();
	std::cout << std::endl;

return 0;
}
