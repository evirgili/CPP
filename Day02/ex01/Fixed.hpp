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
		float	toFloat(void) const;
		int		toInt(void) const;


};

std::ostream&	operator<<(std::ostream& out, const Fixed& fp);

#endif
