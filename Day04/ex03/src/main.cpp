#include "../includes/head.hpp"


int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		ICharacter* me = new Character("Player1");
		AMateria* tmp;
		ICharacter* bob = new Character("Player2");

		std::cout << "------------------------------------------\n";

		src->learnMateria(new Cure());
		tmp = src->createMateria("cure");
		me->equip(tmp);
		delete(tmp);
		std::cout << "------------------------------------------\n";

		src->learnMateria(new Ice());
		tmp = src->createMateria("ice");
		me->equip(tmp);
		delete(tmp);
		std::cout << "------------------------------------------\n";

		me->use(1, *bob);
		std::cout << "------------------------------------------\n";

		me->use(2, *bob);
		std::cout << "------------------------------------------\n";

		me->use(3, *bob);
		std::cout << "------------------------------------------\n";

		me->use(4, *bob);
		std::cout << "------------------------------------------\n";

		me->unequip(2);
		std::cout << "------------------------------------------\n";

		src->learnMateria(new Ice());
		tmp = src->createMateria("ice");
		me->equip(tmp);
		delete(tmp);
		std::cout << "------------------------------------------\n";

		me->use(1, *bob);
		std::cout << "------------------------------------------\n";

		me->use(2, *bob);
		std::cout << "------------------------------------------\n";

		me->use(3, *bob);
		std::cout << "------------------------------------------\n";

		me->use(4, *bob);
		std::cout << "------------------------------------------\n";

		src->learnMateria(new Cure());
		tmp = src->createMateria("cure");
		me->equip(tmp);
		delete(tmp);
		std::cout << "------------------------------------------\n";

		me->use(1, *bob);
		std::cout << "------------------------------------------\n";

		me->use(2, *bob);
		std::cout << "------------------------------------------\n";

		me->use(3, *bob);
		std::cout << "------------------------------------------\n";

		me->use(4, *bob);
		std::cout << "------------------------------------------\n";

		std::cout << "------------------------------------------\n";
		delete bob;
		std::cout << "------------------------------------------\n";
		delete me;
		std::cout << "------------------------------------------\n";
		delete src;
		std::cout << "------------------------------------------\n";
	}
	return 0;
}
