#include "Cat.hpp"

Cat::Cat() {
	std::cout << MAGENTA << "Cat construtor called" << RESET << std::endl;
	SetType("Cat");
	_brain = new Brain;
}

Cat::Cat(const std::string &type): Animal(type) {
	std::cout << MAGENTA << "Cat type construtor called" << RESET << std::endl;
}

Cat::Cat(const Cat &copy) {
	std::cout << MAGENTA << "Cat copy construtor called" << RESET << std::endl;
	this->_brain = nullptr;
	*this = copy;
}

void	Cat::makeSound() const {
	std::cout << MAGENTA << "MEOW MEOW MEOW" << RESET << std::endl;
}

void	Cat::thinking() {
	std::cout << MAGENTA << "meow *" << this->_brain->GetIdea(std::rand() % 150) << RESET << std::endl;
}

Cat::~Cat() {
	std::cout << MAGENTA << "Cat destructer called" << RESET << std::endl;
	delete _brain;
}

Cat &Cat::operator= (const Cat &assign)	{

	if (this != &assign)	{
		this->_type = assign._type;
		if (!(this->_brain == nullptr))
			delete this->_brain;
		this->_brain = new Brain(*assign._brain);
	}
	return (*this);
}
