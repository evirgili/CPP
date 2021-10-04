#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main(void)  {

	//{
	//	std::cout << "\n";
	//	const Animal* meta = new Animal();
	//	meta->makeSound();
	//	delete meta;
	//	std::cout << "\n";

	//	const Animal* i = new Cat();
	//	std::cout << i->getType() << " " << std::endl;
	//	i->makeSound(); //will output the cat sound!
	//	delete i;
	//	std::cout << "\n";

	//	const Animal* j = new Dog();
	//	std::cout << j->getType() << " " << std::endl;
	//	j->makeSound();
	//	delete j;
	//	std::cout << "\n";
	//}

	{
		Brain	*_brain = new Brain();
		//Animal	*_meta= new Animal();
		Brain	*copied_brain = new Brain(*_brain);
		delete _brain;
		delete copied_brain;
	}

	{
		std::cout << "\n============================\n";
		Animal	*cat1 = new Cat();
		std::cout << "\n============================\n";
		Cat	*cat2 = new Cat(*static_cast<Cat *>(cat1));
		std::cout << "\n============================\n";
		delete cat1;
		cat2->thinking();
		delete cat2;
	}

	{
		Animal *pride[10];
		for (int i = 0; i < 10; ++i)	{

			if (i < 5)
				pride[i] = new Cat();
			else
				pride[i] = new Dog();
			pride[i]->makeSound();
		}
		for (int i = 0; i < 10; ++i)
			delete pride[i];
		//for(;;)	{
		//}
	}
	return 0;
}
