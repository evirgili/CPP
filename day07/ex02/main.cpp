#include "Array.hpp"
#include <unistd.h>
#include <cmath>

static void	initRandomArray(Array<int> &arr, size_t range)	{

	for (size_t i = 0; i < arr.size(); ++i)	{
		arr[i] = std::rand() % range;
	}
}

static void	initRandomArray(Array<float> &arr, size_t range)	{

	for (size_t i = 0; i < arr.size(); ++i)	{
		arr[i] = std::rand() % range * M_PI;
	}
}


int main(void)	{

	std::srand(time(0) ^ getpid());
	{
		std::cout << "\n=========================	ARRAY<int>	===================================\n\n";
		Array<int> a = Array<int>(20);
		initRandomArray(a, 100);
		std::cout << a << std::endl;
		Array<int> const b = Array<int>(20);
	}
	{
		std::cout << "\n=========================	CONST ARRAY<int>	===========================\n\n";
		Array<int> const b = Array<int>(20);
		// initRandomArray(b, 100);
		std::cout << b << std::endl;
	}
	{
		std::cout << "\n=========================	ARRAY<float>	===========================\n\n";
		Array<float> f = Array<float>(20);
		initRandomArray(f, 100);
		std::cout << f << std::endl;
		try	{
			std::cout << "f[19] = " << f[19];
			std::cout << "\n";
		}	catch(const std::exception& e)	{
			std::cerr << e.what() << '\n';
		}
		try	{
			std::cout << "f[20] = " << f[20];
		}	catch(const std::exception& e)	{
			std::cerr << e.what() << '\n';
		}
		std::cout << "\n=========================	copy ARRAY<float>	============================\n\n";
		Array<float> f_copy(f);
		std::cout << f_copy << std::endl;
	}
	{
		std::cout << "\n======================	Assignment ARRAY<float>	===========================\n\n";
		Array<float> some_f(20);
		Array<float> another_f(10);

		initRandomArray(some_f, 10);
		initRandomArray(another_f, 100);
		std::cout << "some_f: size " << some_f.size() <<  "\n" << some_f << std::endl;
		std::cout << "another_f: size " << another_f.size() << "\n" << another_f << std::endl;
		some_f = another_f;
		std::cout << "some_f NEW COPYCAT: size " << some_f.size() <<  "\n" << some_f << std::endl;
	}

	return 0;
}
