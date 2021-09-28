#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	private:
		int					fixed_point;
		static const int	fractional_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy); //конструктор копирования
		Fixed		&operator = (const Fixed &assign); //оператор присваивания
		~Fixed();

};

#endif
