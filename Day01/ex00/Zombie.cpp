#include "Zombie.hpp"

Zombie::Zombie() : _name("noName") {}

void	Zombie::announce(void){
	std::cout << MAGENTA << _name << RED << " BraiiiiiiinnnzzzZ... " << RESET << std::endl;
}

Zombie::Zombie(std::string name){
	_name = name;
}

Zombie::~Zombie(){
	std::cout << GREEN << "Wait! it's dead  " << RESET;
	std::cout << MAGENTA << _name << RED << " : Bye b*tches!" << RESET << std::endl;
}
