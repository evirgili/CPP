#include "../includes/Character.hpp"
#include "../includes/AMateria.hpp"

Character::Character(void) {
	std::cout << "Def Character constructor called" << std::endl;
	this->_name = "Defname";
	for (int i = 0; i < 4; ++i) {
		_source[i] = NULL;
		_fill[i] = 0;
	}
}

Character::Character(const std::string &name) {
	std::cout << "Name Character constructor called" << std::endl;
	this->_name = name;
	for (int i = 0; i < 4; ++i) {
		_source[i] = NULL;
		_fill[i] = 0;
	}
}

Character::Character(const Character &copy) {
	std::cout << "Copy Character constructor called" << std::endl;
	*this = copy;
}

std::string const &Character::getName(void) const {
	return (this->_name);
}

void	Character::setName(std::string const &name) {
	this->_name = name;
}

void	Character::equip(AMateria* m) {
	if (m == NULL) {
		std::cerr << "Passed nullptr to Character::equip method" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; ++i) {
		if (_fill[i] == 0) {
			_fill[i] = 1;
			_source[i] = m->clone();
			std::cout << i + 1 << " equiped " << _source[i]->getType() << std::endl;
			return ;
		}
	}
	std::cerr << "MateriaInventory is full!" << std::endl;
}

void	Character::unequip(int idx) {

	idx -=1;
	if (idx < 0 || idx > 3)
		return ;
	if (_fill[idx]) {
		_fill[idx] = 0;
		std::cout << idx + 1 << " unequiped " << _source[idx]->getType() << std::endl;
		delete _source[idx];
		_source[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target) {

	idx -=1;
	if (idx < 0 || idx > 3)
		return ;
	std::cout << this->_name;
	if (_source[idx])
		_source[idx]->use(target);
	else
		std::cout << " does nothing" << std::endl;
}


Character::~Character(void){
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; ++i) {
		if (_fill[i])
			delete _source[i];
	}
}
