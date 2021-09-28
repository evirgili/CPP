#include "Replace.hpp"

int main(int ac, char **av)
{

	if (ac != 4)
	{
		std::cout << "Error: Wrong input" << std::endl;
		return (-1);
	}
	Replace _try = Replace(av[1]);
	_try.form_replacing(av[2], av[3]);
	return (0);
}
