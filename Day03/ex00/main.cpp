#include "ClapTrap.hpp"


int main(void)	{

	ClapTrap clap2 = ClapTrap("first claper");

	std::cout << "------------------------------------------\n";
	clap2.attack("Other clapper");
	std::cout << "------------------------------------------\n";
	clap2.takeDamage(clap2.GetAD());
	std::cout << "------------------------------------------\n";
	clap2.beRepaired(clap2.GetAD());
	std::cout << "------------------------------------------\n";
	return 0;
}
