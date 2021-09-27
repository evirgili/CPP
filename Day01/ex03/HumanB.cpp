#include "HumanB.hpp"

HumanB::HumanB(const std::string name){
	_name = name;
}

void	HumanB::setWeapon(Weapon &weapon){
	_weapon = &weapon;
}

void	HumanB::attack(void){
	std::cout << "Slaaay! " << _name;
	std::cout << "started attack with";
	if (_weapon)
		std::cout << (*_weapon).getType() << std::endl;
	else
		std::cout << "hand fight" << std::endl;
}

HumanB::~HumanB(){}
