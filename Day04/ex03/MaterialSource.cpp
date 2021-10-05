#include "MaterialSource.hpp"

MateriaSource::MateriaSource(void) {
	std::cout << "Def MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; ++i) {
		_source[i] = NULL;
		_fill[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	std::cout << "Type MateriaSource constructor called" << std::endl;
	*this = copy;
}

void	MateriaSource::learnMaterial(AMateria* m) {
	for (int i = 0; i < 4; ++i) {
		if (!_fill[i]) {
			_fill[i] = 1;
			_source[i] = m;
			std::cout << i+1 << " type of materia learned" << std::endl;
			return ;
		}
	}
	std::cout << "Source is full!" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const &type) {

	for (int i = 0; i < 4; ++i) {
		if (_fill[i] && type == _source[i]->GetType()){
			return (_source[i]->clone());
		}
	}
	std::cout << "Unknown type!" << std::endl;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &assign)	{

	if (this != &assign)
	{
		for (int i = 0; i < 4; ++i)	{
			_fill[i] = assign._fill[i];
			_source[i] = assign._source[i];
		}
	}
	return *this;
}
