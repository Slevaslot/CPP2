#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
int main()
{
	{
		std::cout << "-------- Subject main --------\n" << std::endl;
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
		std::cout << "\n------------------------------\n" << std::endl;
	}
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	Character* me = new Character("me");
	// Character me1 = *dynamic_cast<Character*>(me);
	// Character me1(*me);
	// const	Character me3("test");
	// Character me4 = me3;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	Cure test;
	Cure *test1;
	test1 = test.clone();
	src->learnMateria(test1);
	me->equip(tmp);
	Character me1(*me);
	me->equip(tmp);
	me->equip(tmp);
	me1.use(0, *me);
	me1.use(2, *me);
	me1.use(3, *me);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(3, *bob);
	me->use(6, *bob);
	tmp = src->createMateria("notypedawda");
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	me->equip(tmp);
	me->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	me->equip(tmp);
	me->equip(tmp);
	me1.delete_aftercpy();
	delete bob;
	delete me;
	delete src;
	return 0;
	return 0;
}
