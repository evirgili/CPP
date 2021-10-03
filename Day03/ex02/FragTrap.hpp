#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(std::string const name, uint32_t const hp, uint32_t const ep, uint32_t const ad);
		FragTrap(FragTrap const &copy);
		~FragTrap();

		void	highFivesGuys(void);
		void	attack(std::string const &target);
};

#endif
