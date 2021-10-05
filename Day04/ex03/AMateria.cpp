#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "Def AMateria constructor called" << std::endl;
	SetType("Nature");
}

AMateria::AMateria(std::string &type) {
	std::cout << "Type AMateria constructor called" << std::endl;
	SetType(type);
}

AMateria::AMateria(const AMateria &copy) {
	std::cout << "Copy AMateria constructor called" << std::endl;
	*this = copy;
}

void	AMateria::SetType(const std::string &type) {
	this->_type = type;
}

std::string const	&AMateria::GetType() const {
	return (this->_type);
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &assign) {
	if (this != &assign)
		this->SetType(assign.GetType());
	return *this;
}
