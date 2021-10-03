#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap {

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(std::string const name, uint32_t const hp, uint32_t const ep, uint32_t const ad);
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();

		void	guardGate();
		void	attack(std::string const &target);
};

#endif
