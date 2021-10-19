#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {

	public:
		Ice();
		Ice(Ice const &copy);
		~Ice();
		void		use(ICharacter &target);
		AMateria*	clone(void) const;

};

#endif
