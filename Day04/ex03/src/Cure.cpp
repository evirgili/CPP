#include "../includes/Cure.hpp"
#include "../includes/ICharacter.hpp"


Cure::Cure(): AMateria("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &copy) {
	std::cout << "Cure copy constructor called" <<  std::endl;
	*this = copy;
}


void		Cure::use(ICharacter &target)	{
	std::cout << GRN << " strikes " << target.getName() << " with cure" << RESET << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

AMateria*	Cure::clone(void) const {
	AMateria	*newMateria = new Cure();
	return (newMateria);
}
