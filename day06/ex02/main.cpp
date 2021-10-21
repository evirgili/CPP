#include "Base.hpp"

int main(void)	{
	Base		*ptr = NULL;
	std::string	line;

	std::srand(time(0) ^ getpid());
	std::cout << YELLOW << "y" << RESET << " to generate ptr, other to exit\n";
	while (getline(std::cin, line))	{
		if (ptr)
			delete ptr;
		if (std::cin.eof() || line.empty() || line != "y")
			return 0;
		ptr = generator();
		identify(ptr);
		identify(*ptr);
		std::cout << YELLOW << "y" << RESET << " to generate ptr, other to exit\n";
	}
	return 0;
}
