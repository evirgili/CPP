#include "FragTrap.hpp"

int main(void)	{

	FragTrap frag = FragTrap("Fragger");

	std::cout << "------------------------------------------\n";
	frag.attack("Other clapper");
	std::cout << "------------------------------------------\n";
	frag.takeDamage(frag.GetAD());
	std::cout << "------------------------------------------\n";
	frag.beRepaired(frag.GetAD());
	std::cout << "------------------------------------------\n";
	frag.highFivesGuys();
	std::cout << "------------------------------------------\n";
	return 0;
}
