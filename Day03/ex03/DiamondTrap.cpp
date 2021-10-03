#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():	ClapTrap() {
	std::cout << "Diamond Def constructer called" << std::endl;
	SetName("DiamondDefname");
	ClapTrap::SetHP(FragTrap::GetHP());
	ClapTrap::SetEP(ScavTrap::GetEP());
	ClapTrap::SetAD(FragTrap::GetAD());
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap("clap_name"), _name(name) {
	std::cout << "Diamond Copy constructer called" << std::endl;
	SetHP(FragTrap::GetHP());
	SetEP(ScavTrap::GetEP());
	SetAD(FragTrap::GetAD());
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) {
	std::cout << "Diamond Copy constructer called" << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Diamond Destructor called" << std::endl;
}

void	DiamondTrap::attack(std::string const &target) {

	// ClapTrap::attack(target);

	std::cout << "DiamondTrap " << GetName() << " attack " << target << ", causing ";
	std::cout << GetAD() << " points of damage!" << std::endl;
}

void	DiamondTrap::whoAmI() {
	std::cout << GetName() << "who i am???" << std::endl;
}
