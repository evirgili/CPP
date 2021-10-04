#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <unistd.h>

int main(void)  {

	{
		std::cout << "\n===========ANIMAL=================\n";
		std::cout << "\n";
		const Animal* meta = new Animal();
		meta->makeSound();
		delete meta;
		std::cout << "\n";

		std::cout << "\n===========CAT=================\n";
		std::cout << "\n";
		const Animal* i = new Cat();
		i->GetType();
		i->makeSound();
		delete i;
		std::cout << "\n";

		std::cout << "\n==========DOG==================\n";
		std::cout << "\n";
		const Animal* j = new Dog();
		j->GetType();
		j->makeSound();
		delete j;
		std::cout << "\n";
	}

	{
		std::cout << "\n============BRAIN================\n";
		std::cout << "\n";
		Brain	*_brain = new Brain();
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
		Cat	*cat3 = new Cat(*static_cast<Cat *>(cat1));
		delete cat1;
		std::cout << "\n============Thinking================\n";
		std::cout << "\n";
		cat2->thinking();
		std::cout << "\n";
		cat3->thinking();
		std::cout << "\n";
		delete cat2;
		delete cat3;
	}
	std::cout << "\n============================\n\n";
	{
		Animal *pride[10];
		for (int i = 0; i < 10; ++i)	{

			if (i % 2)
				pride[i] = new Dog();
			else
				pride[i] = new Cat();
			pride[i]->makeSound();
		}
		for (int i = 0; i < 10; ++i)
			delete pride[i];
	}
	std::cout << "\n\n============================\n\n";
	{
		Dog	*dog1 = new Dog();
		Dog	*dog2 = new Dog();
		std::cout << "\n===========================================\n";
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
		dog2 = new Dog(*dog1);
	}
	return 0;
}
