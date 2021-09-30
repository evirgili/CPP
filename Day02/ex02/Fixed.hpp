#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	private:
		int					_fixed_point;
		static const int	_fractional_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy); //конструктор копирования
		Fixed(const int int_value);
		Fixed(const float float_value);
		~Fixed();
		Fixed		&operator = (const Fixed &assign); //оператор присваивания
		const int	&getRawBits(void) const;
		void		setRawBits(int const raw);
		int			getFraction(void) const;
		float		toFloat(void) const;
		int			toInt(void) const;

		static Fixed		&max(Fixed &fp1, Fixed  &fp2);
		static Fixed		&min(Fixed &fp1, Fixed &fp2);
		static const Fixed	&max(Fixed const &fp1, Fixed const &fp2);
		static const Fixed	&min(Fixed const &fp1, Fixed const &fp2);

		Fixed	&operator++();						//	++Fixed
		Fixed	operator++(const int);				//	Fixed++
		Fixed	&operator--();						//	--Fixed
		Fixed	operator--(const int);				//	Fixed-
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fp);

Fixed			operator+(Fixed const &lvalue, Fixed const &rvalue);
Fixed			operator-(Fixed const &lvalue, Fixed const &rvalue);
Fixed			operator*(Fixed const &lvalue, Fixed const &rvalue);
Fixed			operator/(Fixed const &lvalue, Fixed const &rvalue);

bool			operator>(Fixed const &lvalue, Fixed const &rvalue);
bool			operator>=(Fixed const &lvalue, Fixed const &rvalue);
bool			operator<(Fixed const &lvalue, Fixed const &rvalue);
bool			operator<=(Fixed const &lvalue, Fixed const &rvalue);
bool			operator!=(Fixed const &lvalue, Fixed const &rvalue);
bool			operator==(Fixed const &lvalue, Fixed const &rvalue);

#endif
