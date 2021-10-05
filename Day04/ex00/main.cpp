#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main(void)
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	std::cout << j->GetType() << " " << std::endl;
	std::cout << i->GetType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	const WrongAnimal* wrong = new WrongCat();
	wrong->makeSound();

	delete wrong;
	return 0;
}
