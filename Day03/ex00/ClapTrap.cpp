#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Def constructer called" << std::endl;
	SetName("Defname");
	SetHP(10);
	SetEP(10);
	SetAD(0);
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Name constructer called" << std::endl;
	SetName(name);
	SetHP(10);
	SetEP(10);
	SetAD(0);
}

ClapTrap::ClapTrap(std::string const name, uint32_t const hp, uint32_t const ep, uint32_t const ad) {
	std::cout << "Full parametrs constructer called" << std::endl;
	SetName(name);
	SetHP(hp);
	SetEP(ep);
	SetAD(ad);
}

ClapTrap::ClapTrap(ClapTrap const &copy) {
	std::cout << "Copy constructer called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(std::string const &target) {
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing ";
	std::cout << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(uint32_t amount) {
	std::cout << "ClapTrap " << this->_name << " take damage " << amount << " points" << std::endl;
}

void	ClapTrap::beRepaired(uint32_t amount) {
	std::cout << "ClapTrap " << this->_name << " be repaired " << amount << " points" << std::endl;
}

void	ClapTrap::SetName(std::string name) {
	this->_name = name;
}

void	ClapTrap::SetHP(uint32_t hp) {
	this->_hitPoints = hp;
}

void	ClapTrap::SetEP(uint32_t ep) {
	this->_energyPoints = ep;
}

void	ClapTrap::SetAD(uint32_t ad) {
	this->_attackDamage = ad;
}

std::string	ClapTrap::GetName() const {
	return (this->_name);
}

uint32_t	ClapTrap::GetHP() const {
	return this->_hitPoints;
}

uint32_t	ClapTrap::GetEP() const {
	return this->_energyPoints;
}

uint32_t	ClapTrap::GetAD() const {
	return this->_attackDamage;
}

ClapTrap	&ClapTrap::operator= (ClapTrap const &assign)	{
	this->_name = assign.GetName();
	this->_hitPoints = assign._hitPoints;
	this->_energyPoints = assign._energyPoints;
	this->_attackDamage = assign._attackDamage;
	return (*this);
}
