#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << CYAN << "WrongCat construtor called" << RESET << std::endl;
	setType("Cat");
}

WrongCat::WrongCat(const std::string &type): WrongAnimal(type) {
	std::cout << CYAN << "WrongCat type construtor called" << RESET << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << CYAN << "WrongCat destructer called" << RESET << std::endl;
}

