#include "../includes/AMateria.hpp"

AMateria::AMateria() {
	std::cout << "Def AMateria constructor called" << std::endl;
	setType("Nature");
}

AMateria::AMateria(const std::string &type) {
	std::cout << "Type AMateria constructor called" << std::endl;
	setType(type);
}

AMateria::AMateria(const AMateria &copy) {
	std::cout << "Copy AMateria constructor called" << std::endl;
	*this = copy;
}

void	AMateria::setType(const std::string &type) {
	this->_type = type;
}

std::string const	&AMateria::getType() const {
	return (this->_type);
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &assign) {
	if (this != &assign)
		this->setType(assign.getType());
	return *this;
}
