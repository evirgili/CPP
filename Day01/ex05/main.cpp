#include "Karen.hpp"

int main(void)
{
	Karen _try;
	std::string input;

	for(;;){
		std::cout << "Enter command: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (std::cin.fail()){
			std::cin.clear();
			std::cout << "Try again";
		}
		_try.complain(input);
	}
	return (0);
}
