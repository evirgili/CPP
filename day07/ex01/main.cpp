#include <unistd.h>
#include <array>
#include <vector>

#include "iter.hpp"
#include "Awesome.hpp"

void	divisionbytwo(int &num)	{

	num = num / 2;
}

void	addExclamationMark(std::string &elem)	{
	elem.append("\033[33m!\033[0m");
}

int main(void)	{

	std::array<int, 30>	arr = {0};
	std::srand(time(0) ^ getpid());
	for (int i = 0; i < 30; ++i)	{
		arr[i] = std::rand() % 500;
	}
	std::cout << "Create arr:\n";
	std::cout << "[ ";
	for(int i = 0; i < 30; ++i)	{
		std::cout << arr[i] << " ";
	}
	std::cout << " ]\n" << "\n";
	std::cout << "Calling function:" << std::endl;
	std::cout << "[ ";
	for(int i = 0; i < 30; ++i)	{
		divisionbytwo(arr[i]);
		std::cout << arr[i] << " ";
	}
	std::cout << " ]\n" << "\n";

	std::cout << "Calling iter:" << std::endl;
	iterate(&arr[0], 30, divisionbytwo);
	std::cout << "[ ";
	for(int i = 0; i < 30; ++i)	{
		std::cout << arr[i] << " ";
	}
	std::cout << " ]\n" << "\n";
	std::cout << "\n===========================================================\n\n";
	{
		std::vector<std::string>	arrays;
		for (int i = 0; i < 10; ++i)	{
			size_t	chars  = std::rand() % 26;
			std::string str;
			for (size_t j = 0; j < chars; ++j)	{
				str += ('a' + std::rand() % 26);
			}
			arrays.push_back(str);
		}

		std::cout << "Words are:\n\n";
		for (int i = 0; i < 10; ++i)	{
			std::cout << arrays[i] << std::endl;
		}
		std::cout << "\n-----------------------------------\n";
		std::cout << "Calling iter:\n" << std::endl;
		iterate(&arrays[0], 10, addExclamationMark);
		for (int i = 0; i < 10; ++i)	{
			std::cout << arrays[i] << std::endl;
		}
		std::cout << std::endl;
	}
	{
		int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
		Awesome tab2[5];
		iterate(tab, 5, print);
		iterate(tab2, 5, print );
	}
	return 0;
}
