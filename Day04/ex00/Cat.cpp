#include "Cat.hpp"

Cat::Cat() {
	std::cout << MAGENTA << "Cat construtor called" << RESET << std::endl;
	setType("Cat");
}

Cat::Cat(const std::string &type): Animal(type) {
	std::cout << MAGENTA << "Cat type construtor called" << RESET << std::endl;
}

void	Cat::makeSound() const {
	std::cout << MAGENTA << "MEOW MEOW MEOW" << RESET << std::endl;
}

Cat::~Cat() {
	std::cout << MAGENTA << "Cat destructer called" << RESET << std::endl;
}
