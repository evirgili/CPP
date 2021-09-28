#include "Karen.hpp"


int main(int ac, char **av)
{
	Karen _trytry;
	if (ac != 2)
	{
		std::cout << "Waiting for argument\n";
		return (1);
	}
	_trytry.complain(av[1]);
	return (0);
}
