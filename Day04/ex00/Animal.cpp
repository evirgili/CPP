#include "Animal.hpp"

Animal::Animal() {
	std::cout << GREEN << "Def animal construtor called" << RESET << std::endl;
	SetType("Def animal");
}

Animal::Animal(const std::string type) {
	std::cout << GREEN << "Def type animal construtor called" << RESET << std::endl;
	SetType(type);
}

void	Animal::SetType(const std::string &type) {
	Animal::_type = type;
}

const std::string	&Animal::GetType() const {
	return (this->_type);
}

void	Animal::makeSound() const {
	// std::cout << GREEN << "Def Sound of nature" << RESET << std::endl;
}

Animal::~Animal() {
	std::cout << GREEN << "Def destructer called" << RESET << std::endl;
}
