#include "Data.hpp"

Data::Data(): i_value(12), f_value(12.12f) {};

Data::Data(int i, float f): i_value(i), f_value(f) {};

Data::Data(const Data &copy) {
	*this = copy;
}

Data::~Data() {
	std::cout << "Data Destructed" << std::endl;
}

int		Data::getIvalue() const {
	return this->i_value;
}

float	Data::getFvalue() const {
	return this->f_value;
}

Data	&Data::operator= (Data const &assign)	{

	if (this != &assign)	{
		this->i_value = assign.getIvalue();
		this->f_value = assign.getFvalue();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &stream, Data const &printed)	{
	stream << "i: " << printed.getIvalue() << std::endl;
	stream << "f: " << printed.getFvalue() << std::endl;
	return stream;
}
