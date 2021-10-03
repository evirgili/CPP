#include "ScavTrap.hpp"

int main(void)	{

	ScavTrap scav = ScavTrap("Scaver");
	ScavTrap	cpy(scav);

	std::cout << cpy.GetName() << std::endl;
	std::cout << "------------------------------------------\n";
	scav.attack("Other clapper");
	std::cout << "------------------------------------------\n";
	scav.takeDamage(scav.GetAD());
	std::cout << "------------------------------------------\n";
	scav.beRepaired(scav.GetAD());
	std::cout << "------------------------------------------\n";
	scav.guardGate();
	std::cout << "------------------------------------------\n";
	return 0;
}
