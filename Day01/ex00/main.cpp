#include "Zombie.hpp"

int main()
{
	Zombie zombie_1 = Zombie("CHANEL №1");
	Zombie* zombie_2 = newZombie("CHANEL №2");
	Zombie* zombie_3 = newZombie("CHANEL №3");
	Zombie* zombie_4 = newZombie("CHANEL №4");

	zombie_3->announce();
	delete zombie_3;
	zombie_2->announce();
	zombie_4->announce();
	zombie_1.announce();
	std::cout << BLUE << "WHERE'S CHANEL №5??????????????" << RESET << std::endl;
	randomChump("CHANEL №5");

	delete zombie_2;
	delete zombie_4;
	return (0);
}
