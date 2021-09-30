#include "Fixed.hpp"

Fixed::Fixed() {
	// std::cout << "Default constructor called" << std::endl;
	_fixed_point = 0;
}

Fixed::Fixed(const Fixed &copy) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator= (const Fixed &assign) {
	// std::cout << "Assignation operator called" << std::endl;
	this->_fixed_point = assign.getRawBits();
	return (*this);
}

const int		&Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (_fixed_point);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixed_point = raw;
}

Fixed::Fixed(const int int_value) {
	// std::cout << "Int constructor called" << std::endl;
	this->_fixed_point = int_value << _fractional_bits;
}

Fixed::Fixed(const float float_value) {
	int nearest_int = roundf(float_value * (1 << _fractional_bits));
	// std::cout << "Float constructor called" << std::endl;
	this->setRawBits(nearest_int);
}

float	Fixed::toFloat(void) const {
	return ((double)this->_fixed_point / (1 << this->_fractional_bits));
}

int		Fixed::toInt(void) const {
	return (this->_fixed_point >> this->_fractional_bits);
}

Fixed	&Fixed::max(Fixed &fp1, Fixed  &fp2)	{
	return (fp1 > fp2 ? fp1 : fp2);

}

Fixed	&Fixed::min(Fixed &fp1, Fixed &fp2)	{

	return (fp1 < fp2 ? fp1 : fp2);
}

const Fixed		&Fixed::max(Fixed const &fp1, Fixed const &fp2)	{
	return (fp1 > fp2 ? fp1 : fp2);

}

const Fixed		&Fixed::min(Fixed const &fp1, Fixed const &fp2)	{
	return (fp1 < fp2 ? fp1 : fp2);
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<< (std::ostream& stream, const Fixed& fp)
{
	stream << fp.toFloat();
	return (stream);
}

Fixed	Fixed::operator++(const int) {

	Fixed ret_val = Fixed(*this);
	this->setRawBits(ret_val.getRawBits() + 1);
	return (ret_val);
}

Fixed	&Fixed::operator++() {

	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator --(const int) {

	Fixed ret_val = Fixed(*this);
	this->setRawBits(ret_val.getRawBits() - 1);
	return (ret_val);
}

Fixed	&Fixed::operator --() {

	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	operator+(const Fixed &rvalue, const Fixed &lvalue) {

	Fixed ret_val;

	ret_val.setRawBits(rvalue.getRawBits() + lvalue.getRawBits());
	return (ret_val);
}

Fixed	operator-(const Fixed &rvalue, const Fixed &lvalue) {

	Fixed ret_val;

	ret_val.setRawBits(rvalue.getRawBits() - lvalue.getRawBits());
	return (ret_val);
}

Fixed	operator*(const Fixed &rvalue, const Fixed &lvalue) {

	Fixed ret_val;
	int		tmp_value;

	tmp_value = rvalue.getRawBits() * lvalue.getRawBits();
	ret_val.setRawBits(tmp_value / (1 << ret_val.getFraction())); //////////////////////get fractijn?????????
	return (ret_val);
}

Fixed	operator/(const Fixed &rvalue, const Fixed &lvalue) {
	Fixed ret_val;

	float res_tmp;
	int ret_value = 0;
	int sign = 0;

	if (lvalue.getRawBits() != 0)	{
		res_tmp = ((float)rvalue.getRawBits() / lvalue.getRawBits());
		ret_val = Fixed(res_tmp);
	} else	{
		sign = (rvalue.getRawBits() >> 31) ^ (lvalue.getRawBits() >> 31);
		for (int i = 0; i < 8; i++)	{
			ret_value |= (1 << (30 - i));
		}
		if (sign)
			ret_val.setRawBits(-ret_value);
		else
			ret_val.setRawBits(ret_value);
	}
	return (ret_val);
}

bool	operator>(Fixed const &lvalue, Fixed const &rvalue) {
	return (lvalue.getRawBits() > rvalue.getRawBits());
}

bool	operator>=(Fixed const &lvalue, Fixed const &rvalue) {
	return (lvalue.getRawBits() >= rvalue.getRawBits());
}

bool	operator<(Fixed const &lvalue, Fixed const &rvalue) {
	return (lvalue.getRawBits() < rvalue.getRawBits());
}

bool	operator<=(Fixed const &lvalue, Fixed const &rvalue) {
	return (lvalue.getRawBits() <= rvalue.getRawBits());
}

bool	operator!=(Fixed const &lvalue, Fixed const &rvalue) {
	return (lvalue.getRawBits() != rvalue.getRawBits());
}

bool	operator==(Fixed const &lvalue, Fixed const &rvalue) {
	return (lvalue.getRawBits() == rvalue.getRawBits());
}

int			Fixed::getFraction(void) const	{

	int frac;

	frac = this->_fractional_bits;
	return (frac);
}

