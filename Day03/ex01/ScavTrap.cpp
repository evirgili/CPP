#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Scav Def constructer called" << std::endl;
	ClapTrap::SetName("ScavDefname");
	ClapTrap::SetHP(100);
	ClapTrap::SetEP(50);
	ClapTrap::SetAD(20);
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100,50, 20) {
	std::cout << "Scav Name constructer called" << std::endl;
	// ClapTrap::SetName(name);
	// ClapTrap::SetHP(100);
	// ClapTrap::SetEP(50);
	// ClapTrap::SetAD(20);
}

ScavTrap::ScavTrap(std::string const name, uint32_t const hp, uint32_t const ep, uint32_t const ad):
	ClapTrap(name, hp, ep, ad) {
	std::cout << "Scav Full parametrs constructer called" << std::endl;
	// ClapTrap::SetName(name);
	// ClapTrap::SetHP(hp);
	// ClapTrap::SetEP(ep);
	// ClapTrap::SetAD(ad);
}

ScavTrap::ScavTrap(ScavTrap const &copy) {
		std::cout << "Scav Copy constructer called" << std::endl;
		*this = copy;
}

ScavTrap::~ScavTrap() {
	std::cout << "Scav Destructor called" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const &target) {

	// ClapTrap::attack(target);

	std::cout << "ScavTrap " << GetName() << " attack " << target << ", causing ";
	std::cout << GetAD() << " points of damage!" << std::endl;
}


