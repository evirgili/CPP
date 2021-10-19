#include "Dog.hpp"

Dog::Dog() {
	std::cout << YELLOW << "Dog construtor called" << RESET << std::endl;
	setType("Dog");
}

Dog::Dog(const std::string &type): Animal(type) {
	std::cout << YELLOW << "Dog type construtor called" << RESET << std::endl;
}

void	Dog::makeSound() const {
	std::cout << YELLOW << "Woof woof woof" << RESET << std::endl;
}

Dog::~Dog() {
	std::cout << YELLOW << "Dog destructer called" << RESET << std::endl;
}
