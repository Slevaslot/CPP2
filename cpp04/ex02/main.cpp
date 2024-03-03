#include "animals.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wrongCat.hpp"

int main()
{
	Animal *tabAnim[10];
	std::cout << "\n- - - - - Constructor - - - - -\n\n";
	for(int i = 0; i < 5; i++)
	{
		std::cout << i << " : ";
		tabAnim[i] = new Dog();
	}
	for(int i = 5; i < 10; i++)
	{
		std::cout << i << " : ";
		tabAnim[i] = new Cat();
	}

	std::cout << "\n - - - - - - Sound - - - - - -\n";

	std::cout << std::endl << "Sound of 0 : ";
	tabAnim[0]->makeSound();
	std::cout << "Sound of 5 : ";
	tabAnim[5]->makeSound();
	std::cout << std::endl;
	std::cout << "- - - - - Destructor - - - - -\n\n";
	int i = 0;
	while(i < 10)
	{
		std::cout << i << " : ";
		delete tabAnim[i++];
	}
	return 0;
}
