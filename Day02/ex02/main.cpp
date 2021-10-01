#include "Fixed.hpp"

void	make_some_tests(Fixed &a, Fixed &b)
{
	std::cout << "================================\n";
	std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
	std::cout << "a > b\t" << (a > b) << std::endl;
	std::cout << "a < b\t" << (a < b) << std::endl;
	std::cout << "a >= b\t" << (a >= b) << std::endl;
	std::cout << "a <= b\t" << (a <= b) << std::endl;
	std::cout << "a != b\t" << (a != b) << std::endl;
	std::cout << "a == b\t" << (a == b) << std::endl;
	std::cout << "a / b\t" << (a / b) << std::endl;
	std::cout << "a * b\t" << (a * b) << std::endl;
	std::cout << "a - b\t" << (a - b) << std::endl;
	std::cout << "a + b\t" << (a + b) << std::endl;
	std::cout << "MIN: " << Fixed::min(a, b) << std::endl;
	std::cout << "MAX: " << Fixed::max(a, b) << std::endl;
	std::cout << "================================\n";
}

int main( void ) {

	Fixed a;

	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	{
		Fixed a(23);
		Fixed b(5.55f);
		make_some_tests(a, b);
	}
	{
		Fixed a(-10);
		Fixed b(23.56f);
		make_some_tests(a, b);
	}
	{
		Fixed a(100);
		Fixed b(0);
		make_some_tests(a, b);
	}
	return 0;
}
