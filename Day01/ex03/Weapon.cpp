#include "Weapon.hpp"

Weapon::Weapon(const std::string type){

	if (type.empty())
		_type = "null_ptr";
	else
		_type = type;
}

void	Weapon::setType(const std::string type){
	_type = type;
}

const	std::string&	Weapon::getType(void){
	return(this->_type);
}

Weapon::~Weapon(){}
