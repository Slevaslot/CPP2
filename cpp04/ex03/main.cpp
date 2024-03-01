#include "AMateria.hpp"
#include "NewAMateria.hpp"
#include "Character.hpp"
int main()
{
	ICharacter *test = new Character;
	AMateria *mat = new NewAMateria;
	test->equip(mat);
	test->use(0, *test);
}
