#include "Awesome.hpp"
#include "whatever.hpp"


int	main(void)	{
	int a = 2;
	int b = 3;
	int c = 4;

	std::cout << "=============================================================================\n";
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "--- swap ---\n";
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << "\n" << std::endl;
	std::cout << "a = " << a << ", c = " << c << std::endl;
	std::cout << "--- swap ---\n";
	::swap(a, c);
	std::cout << "a = " << a << ", c = " << c << std::endl;
	std::cout << "min( a, c ) = " << ::min(a, c) << std::endl;
	std::cout << "max( a, c ) = " << ::max(a, c) << std::endl;
	std::cout << "=============================================================================\n\n";

	std::string d = "chaine1";
	std::string e = "chaine2";
	std::cout << "d = " << d << ", e = " << e << std::endl;
	::swap(d, e);
	std::cout << "--- swap ---\n";
	std::cout << "d = " << d << ", e = " << e << std::endl;
	std::cout << "min( c, d ) = " << ::min(d, e) << std::endl;
	std::cout << "max( c, d ) = " << ::max(d, e) << "\n" << std::endl;
	{
		std::string	*a_str = new std::string("lol");
		std::string	*b_str = new std::string("pup");
		std::cout << "=======================	PTR STUFF	=====================================\n\n";
		std::cout << "a_str = " << *a_str << ", b_str = " << *b_str << std::endl;
		::swap(a_str, b_str);
		std::cout << "--- swap ---\n";
		std::cout << "a_str = " << *a_str << ", b_str = " << *b_str << std::endl;
		std::cout << "min_ptr( a_str, b_str ) = " << *(::min(a_str, b_str)) << std::endl;
		std::cout << "max_ptr( a_str, b_str ) = " << *(::max(a_str, b_str)) << "\n" << std::endl;
		std::cout << "=======================	UNREF STUFF	=====================================\n\n";
		std::cout << "a_str = " << *a_str << ", b_str = " << *b_str << std::endl;
		::swap(*a_str, *b_str);
		std::cout << "--- swap ---\n";
		std::cout << "a_str = " << *a_str << ", b_str = " << *b_str << std::endl;
		std::cout << "min( a_str, b_str ) = " << ::min(*a_str, *b_str) << std::endl;
		std::cout << "max( a_str, b_str ) = " << ::max(*a_str, *b_str) << "\n" << std::endl;


		std::cout << "=======================	NULL STUFF	=====================================\n\n";
		std::string	*c_str = NULL;
		std::cout << "a_str = " << a_str << ", c_str = " << c_str << std::endl;
		::swap(a_str, c_str); ////////////не рабоатает (c =  null)
		std::cout << "--- swap ---\n";
		std::cout << "a_str = " << a_str << ", c_str = " << c_str << std::endl;
		std::cout << "min_ptr( a_str, c_str ) = " << (::min(a_str, c_str)) << std::endl;
		std::cout << "max_ptr( a_str, c_str ) = " << (::max(a_str, c_str)) << "\n" << std::endl;
		std::cout << "=============================================================================\n\n";
		delete a_str;
		delete b_str;
	}
	{
		std::cout << "=======================	CONST STUFF	=====================================\n\n";
		//(const std::) - не сработает
			std::string	* const a_a = new std::string("Const ptr 1");
			std::string	* const b_b = new std::string("Const ptr 2");

		std::cout << "a = " << *a_a << ", b = " << *b_b << std::endl;
		std::cout << "min( a_str, b_str ) = " << ::min(*a_a, *b_b) << std::endl;
		std::cout << "max( a_str, b_str ) = " << ::max(*a_a, *b_b) << "\n" << std::endl;
		std::cout << "=======================	CONST PTR STUFF	=====================================\n\n";
		::swap(a_a, b_b);
		std::cout << "a = " << *a_a << ", b = " << *b_b << std::endl;
		std::cout << "min( a_str, b_str ) = " << *(::min(a_a, b_b)) << std::endl;
		std::cout << "max( a_str, b_str ) = " << *(::max(a_a, b_b))  << "\n" << std::endl;
		delete a_a;
		delete b_b;
	}
	{
		std::cout << "=======================	AWESOME		=====================================\n\n";
		Awesome	aw1(100);
		Awesome	aw2(99);
		std::cout << "aw1 = " << aw1 << ", b = " << aw2 << std::endl;
		std::cout << "min( aw1, aw2 ) = " << ::min(aw2, aw1) << std::endl;
		std::cout << "max( aw1, aw2 ) = " << ::max(aw2, aw1) << "\n" << std::endl;
		::swap(aw1, aw2);
		std::cout << "a = " << aw1 << ", b = " << aw2 << std::endl;
		std::cout << "min( aw1, aw2 ) = " << ::min(aw2,aw1) << std::endl;
		std::cout << "max( aw1, aw2 ) = " << ::max(aw2,aw1)  << "\n" << std::endl;

	}

	return 0;
}
