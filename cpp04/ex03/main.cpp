#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
int main()
{
	ICharacter *me0 = new Character();
	AMateria *mat = new Cure();
	ICharacter *me1 = new Character("slevaslo");
	me0->equip(mat);
	me0->use(0, *me0);
	me0->use(0, *me1);
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	delete me0;
	delete me1;
	return 0;
	return 0;
}
