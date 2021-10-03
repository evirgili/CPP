#include "DiamondTrap.hpp"


int main(void)	{

	DiamondTrap	d_trap("Diamond-Shaped Dragon Clapper");


	std::cout << "\n\n========================================================\n\n";
	d_trap.attack("Keeper of the Dungeon");
	d_trap.ClapTrap::attack("stone");
	d_trap.FragTrap::attack("stick");
	d_trap.ScavTrap::attack("Lady Bug");
	std::cout << "\n\n========================================================\n\n";
	d_trap.whoAmI();
	d_trap.guardGate();
	d_trap.highFivesGuys();
	std::cout << "\n\n========================================================\n\n";
	d_trap.takeDamage(200);
	d_trap.beRepaired(200);
	std::cout << "\n\n========================================================\n\n";
}
