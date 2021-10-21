#include "iter.hpp"
#include <unistd.h>
#include <array>
#include <vector>
#include <cmath>


void	multiplyByTwo(int *num)	{

	*num = *num * 2;
}

void	addExclamationMark(std::string *elem)	{
	elem->append("\033[33m!\033[0m");
}

int main(void)	{

	std::array<int, 8>	arr = {0};
	// std::srand(time(0) ^ getpid());
	// for (int i = 0; i < 30; ++i)	{
	// 	arr[i] = std::rand() % 500;
	// }
	// std::cout << "[ ";
	// for(int i = 0; i < 30; ++i)	{
	// 	std::cout << arr[i] << " ";
	// }
	for (int i = 8; i > 0; i--) {
		arr[i] = pow(2, i);
		std::cout << arr[i] << ' ';
	}

	std::cout << " ]\n";
	std::cout << " Just calling a function:\n" << std::endl;
	std::cout << "[ ";
	for(int i = 0; i < 30; ++i)	{
		sqrt(&arr[i]);
		std::cout << arr[i] << " ";
	}
	std::cout << " ]\n";

	std::cout << " Calling iter:\n" << std::endl;
	iterate(&arr[0], 30, multiplyByTwo);
	std::cout << "[ ";
	for(int i = 0; i < 30; ++i)	{
		std::cout << arr[i] << " ";
	}
	std::cout << " ]\n";

	{
		std::vector<std::string>	arrays;
		for (int i = 0; i < 20; ++i)	{
			size_t	chars  = std::rand() % 26;
			std::string str;
			for (size_t j = 0; j < chars; ++j)	{
				str += ('a' + std::rand() % 26);
			}
			arrays.push_back(str);
		}

		std::cout << "Words are:\n";
		for (int i = 0; i < 20; ++i)	{
			std::cout << arrays[i] << std::endl;
		}
		std::cout << "\n\n================================\n\n";
		std::cout << "Iterating call:\n";
		iterate(&arrays[0], 20, addExclamationMark);
		std::cout << "New words are:\n";
		for (int i = 0; i < 20; ++i)	{
			std::cout << arrays[i] << std::endl;
		}
	}
	return 0;
}
