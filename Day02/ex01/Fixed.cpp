#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_fixed_point = 0;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator= (const Fixed &assign) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_point = assign.getRawBits();
	return (*this);
}

const int		&Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed_point);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixed_point = raw;
}

Fixed::Fixed(const int int_value) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point = int_value << _fractional_bits;
}

Fixed::Fixed(const float float_value) {
	int nearest_int = roundf(float_value * (1 << _fractional_bits));
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(nearest_int);
}

float	Fixed::toFloat(void) const {
	return ((double)this->_fixed_point / (1 << this->_fractional_bits));
}

int		Fixed::toInt(void) const {
	return (this->_fixed_point >> this->_fractional_bits);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<< (std::ostream& stream, const Fixed& fp)
{
	stream << fp.toFloat();
	return (stream);
}
