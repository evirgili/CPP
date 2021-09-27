#include "HumanA.hpp"
#include "HumanB.hpp"
#include <unistd.h>
#include <utility>

# ifndef _COLORS_
# define _COLORS_
# define RESET   "\033[0m"
# define BLACK   "\033[30m"      /* Black */
# define RED     "\033[31m"      /* Red */
# define GREEN   "\033[32m"      /* Green */
# define YELLOW  "\033[33m"      /* Yellow */
# define BLUE    "\033[34m"      /* Blue */
# define MAGENTA "\033[35m"      /* Magenta */
# define CYAN    "\033[36m"      /* Cyan */
# define WHITE   "\033[37m"      /* White */
# endif

void	aaa(std::string	aha)	{
	std::cout << "Never seen any " << aha << std::endl;
}


int main(void)
{
	const std::string a = "I'm const";
	{
		Weapon        club = Weapon("crude spiked club");
		HumanA bob(a, club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon        club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		Weapon		blaster = Weapon("The Plasma Blaster");
		HumanB jim("Earthworm Jim");
		jim.attack();
		sleep(2);
		jim.setWeapon(blaster);
		jim.attack();
		sleep(2);
		blaster.setType("Even cooler Plasma Blaster");
		jim.attack();
	}
	{
		Weapon			blub = Weapon(NULL);
		blub.getType();
		std::cout << RED << "WARNING! THERE WILL BE SEG NOW ;)\n" << RESET;
		sleep(3);
		HumanB jim(NULL);
	}
	{
		aaa("ahahah\n");
		aaa(NULL);
	}
}
