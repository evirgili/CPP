#include "Dog.hpp"

Dog::Dog() {
	std::cout << YELLOW << "Dog construtor called" << RESET << std::endl;
	SetType("Dog");
	_brain = new Brain;
}

Dog::Dog(const std::string &type): Animal(type) {
	std::cout << YELLOW << "Dog type construtor called" << RESET << std::endl;
}

Dog::Dog(const Dog &copy) {
	std::cout << YELLOW << "Dog copy construtor called" << RESET << std::endl;
	this->_brain = nullptr;
	*this = copy;
}

void	Dog::makeSound() const {
	std::cout << YELLOW << "Woof woof woof" << RESET << std::endl;
}

Dog::~Dog() {
	std::cout << YELLOW << "Dog destructer called" << RESET << std::endl;
	delete _brain;
}

Dog &Dog::operator= (const Dog &assign)	{

	if (this != &assign)	{
		this->_type = assign._type;
		if (!(this->_brain == nullptr))
			delete this->_brain;
		this->_brain = new Brain(*assign._brain);
	}
	return (*this);
}
