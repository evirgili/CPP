#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {

	public:
		Cure();
		Cure(const Cure &copy);
		~Cure();
		AMateria*	clone(void) const;
};

#endif
