#include "Zombie.hpp"
#include <unistd.h>

int	GetNumberOfZombiez()
{
	int	n = 0;
	while (1)
	{
		std::cout << "Enter a number of zombiez: ";
		std::cin >> n;
		if (!std::cin.good())
		{
			std::cin.clear();
    		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Y u do dis..?\n";
			continue;
		}
		if (n > 0)
			break;
		else
		{
			std::cout << "Nayeee. Postitive\n";
			continue ;
		}
	}
	return (n);
}

int main(void)	{

	int		n;
	n = GetNumberOfZombiez();
	Zombie	*horde = zombieHorde(n, "Horde Trooper");
	sleep(2);
	delete[] horde;
	sleep(2);
	return (0);
}
