#include "Data.hpp"
#include <unistd.h>

# define RESET   "\033[0m"
# define BLACK   "\033[30m"      /* Black */
# define RED     "\033[31m"      /* Red */
# define GREEN   "\033[32m"      /* Green */
# define YELLOW  "\033[33m"      /* Yellow */
# define BLUE    "\033[34m"      /* Blue */
# define MAGENTA "\033[35m"      /* Magenta */
# define CYAN    "\033[36m"      /* Cyan */
# define WHITE   "\033[37m"      /* White */

uintptr_t	serialize(Data* ptr)	{
	return (reinterpret_cast<uintptr_t>(ptr));
}


Data*		deserialize(uintptr_t raw)	{
	return (reinterpret_cast<Data *>(raw));
}

Data		*generate_random()	{
	int		i = std::rand() % 300;
	float	f = static_cast<float>(std::rand() % 1000);
	f /= i * 1.5;

	return new Data(i, f);
}

int main(void) {

	Data		*ptr = NULL;
	uintptr_t	intptr;
	std::string	line;

	std::srand(time(0) ^ getpid());
	std::cout << YELLOW << "y" << RESET << " to generate ptr, other to exit\n";
	while (getline(std::cin, line))
	{
		if (std::cin.eof() || line.empty() || line != "y")
			return 0;
		std::cout << "------------------------------------------------------------\n";
		ptr = generate_random();
		std::cout << *ptr;
		intptr = serialize(ptr);
		// *****		This is UB		*****//
		//delete ptr;
		//memset((void*)ptr, 0, sizeof(Data));
		ptr = deserialize(intptr);
		std::cout << *ptr;
		delete ptr;
		std::cout << "------------------------------------------------------------\n";
		std::cout << YELLOW << "y" << RESET << " to generate ptr, other to exit\n";
	}
	return 0;
}
