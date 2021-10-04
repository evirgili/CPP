#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "Frag Def constructer called" << std::endl;
	// ClapTrap::SetName("FragDefname ");
	ClapTrap::SetHP(100);
	ClapTrap::SetEP(100);
	ClapTrap::SetAD(30);
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100,100, 30) {
	std::cout << "Frag Name constructer called" << std::endl;
	// ClapTrap::SetName(name);
	// ClapTrap::SetHP(100);
	// ClapTrap::SetEP(100);
	// ClapTrap::SetAD(30);
}

FragTrap::FragTrap(std::string const name, uint32_t const hp, uint32_t const ep, uint32_t const ad):
	ClapTrap(name, hp, ep, ad) {
	std::cout << "Frag Full parametrs constructer called" << std::endl;
	// ClapTrap::SetName(name);
	// ClapTrap::SetHP(hp);
	// ClapTrap::SetEP(ep);
	// ClapTrap::SetAD(ad);
}

FragTrap::FragTrap(FragTrap const &copy) {
		std::cout << "Frag Copy constructer called" << std::endl;
		*this = copy;
}

FragTrap::~FragTrap() {
	std::cout << "Frag Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << this->GetName() << " gives high five to First guy" << std::endl;
	std::cout << this->GetName() << " gives high five to Second guy" << std::endl;
	std::cout << this->GetName() << " gives high five to Third guy" << std::endl;
	std::cout << this->GetName() << " gives high five to Fourth guy" << std::endl;
	std::cout << this->GetName() << " gives high five to Fifth guy" << std::endl;
}

void	FragTrap::attack(std::string const &target) {

	// ClapTrap::attack(target);

	std::cout << "FragTrap " << GetName() << " attack " << target << ", causing ";
	std::cout << GetAD() << " points of damage!" << std::endl;
}



