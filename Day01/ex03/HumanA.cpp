#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon& weapon): _weapon(weapon){
	_name = name;
	_weapon = weapon;
}

void	HumanA::attack(void){
	std::cout << "Hey! " << _name;
	std::cout << "started attack with ";
	std::cout << _weapon.getType() << std::endl;
}

HumanA::~HumanA(){}
