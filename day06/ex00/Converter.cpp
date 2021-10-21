#include "Converter.hpp"

Converter::Converter() {
	this->_isNan = false;
	this->_isPlusInf = false;
	this->_isMinusInf = false;
	this->_isZero = false;
};

Converter::Converter(std::string const &value) {

	if (value.length() == 1 && isprint(*(value.c_str())) && !(isdigit(*(value.c_str()))))
		this->_value = static_cast<double>(*(value.c_str()));
	else
		this->_value = atof(value.c_str());
	this->_lenght = value.length();
	if (value == "nan" || value == "nanf")
		this->_isNan = true;
	if (value == "+inf" || value == "+inff")
		this->_isPlusInf = true;
	if (value == "-inf" || value == "-inff")
		this->_isMinusInf = true;
	if (this->_value - static_cast<int>(this->_value) == 0.0000)
		this->_isZero = true;
}

Converter::Converter(const Converter &copy) {
	*this = copy;
}

Converter::~Converter() {}

double	Converter::getValue() const {
	return this->_value;
}

int	Converter::getLenght() const {
	return this->_lenght;
}

bool	Converter::getIsNan() const {
	return this->_isNan;
}

bool	Converter::getIsPlusInf() const {
	return this->_isPlusInf;
}

bool	Converter::getIsMinusInf() const {
	return this->_isMinusInf;
}

bool	Converter::getIsZero() const {
	return this->_isZero;
}

void	Converter::ToInt() {
	std::cout << "int: ";
	if (this->_value > INT_MAX || this->_value < INT_MIN || this->_isMinusInf || this->_isNan || this->_isPlusInf)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(this->_value)  << std::endl;
}

void Converter::ToChar() {

	char	c = static_cast<char>(this->_value);

	std::cout << "char: ";
	if (this->_value < 0 || this->_value > 255 || this->_isPlusInf || this->_isMinusInf || this->_isNan)
		std::cout << "impossible" << std::endl;
	else if (isprint(c))
		std::cout << "'" << c << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;;
}

void	Converter::ToFloat() {
	std::cout << "float: ";
	if (this->_isNan)
		std::cout << "nan";
	else if (this->_isMinusInf)
		std::cout << "-inf";
	else if (this->_isPlusInf)
		std::cout << "+inf";
	else
		std::cout << static_cast<float>(this->_value);
	if (this->_isZero)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	Converter::ToDouble()
{
	std::cout << "double: ";
	if (this->_isNan)
		std::cout << "nan";
	else if (this->_isMinusInf)
		std::cout << "-inf";
	else if (this->_isPlusInf)
		std::cout << "+inf";
	else
		std::cout << static_cast<double>(this->_value);
	if (this->_isZero)
		std::cout << ".0";
	std::cout << std::endl;
}

void Converter::All() {
	ToChar();
	ToInt();
	ToFloat();
	ToDouble();
}

Converter & Converter::operator=(Converter const &p) {
	this->_value = p.getValue();
	this->_lenght = p.getLenght();
	this->_isNan = p.getIsNan();
	this->_isPlusInf = p.getIsPlusInf();
	this->_isMinusInf = p.getIsMinusInf();
	this->_isZero = p.getIsZero();
	return *this;
}
