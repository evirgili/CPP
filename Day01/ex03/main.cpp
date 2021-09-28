#include "HumanA.hpp"
#include "HumanB.hpp"
#include <unistd.h>
#include <utility>


int main(void)
{
	{
		Weapon		club = Weapon("kitties");
		HumanA lana("Lana", club);
		lana.attack();
		club.setType("kisses");
		lana.attack();
	}
	{
		Weapon		club = Weapon("kitties");
		HumanB kim("Kim");
		kim.setWeapon(club);
		kim.attack();
		club.setType("kisses");
		kim.attack();
	}
	{
		Weapon		blaster = Weapon("puppies");
		HumanB kim("bby Kim");
		kim.attack();
		sleep(2);
		kim.setWeapon(blaster);
		kim.attack();
		sleep(2);
		blaster.setType("chicks");
		kim.attack();
	}
	{
		std::cout << "WARNING! THERE WILL BE SEG NOW ;)" << std::endl;
		Weapon			blub = Weapon(NULL);
		blub.getType();
		sleep(3);
		HumanB kim(NULL);
	}
}
