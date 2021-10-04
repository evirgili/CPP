#include "DiamondTrap.hpp"


int main(void)	{

	DiamondTrap	d_trap("Diamond maker");


	std::cout << "\n\n========================================================\n\n";
	d_trap.attack("diamond blaster");
	d_trap.ClapTrap::attack("clap blaster");
	d_trap.FragTrap::attack("frag blaster");
	d_trap.ScavTrap::attack("scav blaster");
	std::cout << "\n\n========================================================\n\n";
	d_trap.whoAmI();
	d_trap.guardGate();
	d_trap.highFivesGuys();
	std::cout << "\n\n========================================================\n\n";
	d_trap.takeDamage(200);
	d_trap.beRepaired(200);
	std::cout << "\n\n========================================================\n\n";
}
