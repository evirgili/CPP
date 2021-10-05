#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &copy) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}

Ice::~Ice () {
	std::cout << "Ice destructor called" << std::endl;
}

AMateria*	Ice::clone(void) const {
	AMateria	*newMateria = new Ice();
	return (newMateria);
}
