#include "../includes/Ice.hpp"
#include "../includes/ICharacter.hpp"


Ice::Ice(): AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &copy) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}

void		Ice::use(ICharacter &target)	{
	std::cout << BLU << " strikes " << target.getName() << " with spikes" << RESET << std::endl;
}

Ice::~Ice () {
	std::cout << "Ice destructor called" << std::endl;
}

AMateria*	Ice::clone(void) const {
	AMateria	*newMateria = new Ice();
	return (newMateria);
}
