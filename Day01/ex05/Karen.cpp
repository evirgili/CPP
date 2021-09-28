#include "Karen.hpp"

Karen::Karen() {
	options_of_compaints[0] = "DEBUG";
	options_of_compaints[1] = "INFO";
	options_of_compaints[2] = "WARNING";
	options_of_compaints[3] = "ERROR";
	complaints[0] = &Karen::debug;
	complaints[1] = &Karen::info;
	complaints[2] = &Karen::warning;
	complaints[3] = &Karen::error;
}
Karen::~Karen() {}

void	Karen::debug(void) {
	std::cout << "[ DEBUG ]\n";
	std::cout << "With a taste of your lips, I'm on a ride\n";
	std::cout << "You're toxic, I'm slippin' under\n";
	std::cout << "With a taste of a poison paradise\n";
	std::cout << "I'm addicted to you\n" << "Don't you know that you're TOXIC?" << std::endl;
}

void	Karen::info(void) {
	std::cout << "[ INFO ]\n";
	std::cout << "But mama I'm in love with a criminal\n";
	std::cout << "And this type of love isn't rational, it's physical\n";
	std::cout << "Mama please don't cry, I will be alright\n";
	std::cout << "All reason aside I just can't deny, I love the guy" << std::endl;
}

void	Karen::warning(void) {
	std::cout << "[ WARNING ]\n";
	std::cout << "Oops, I did it again\n";
	std::cout << "I played with your heart, got lost in the game\n";
	std::cout << "Oh baby, baby\nOops, you think I'm in love\n";
	std::cout << "That I'm sent from above\nI'm not that innocent" << std::endl;
}

void	Karen::error(void) {
	std::cout << "[ ERROR ]\n";
	std::cout << "Womanizer, woman-womanizer, you're a womanizer\n";
	std::cout << "Oh, womanizer, oh, you're a womanizer, baby\n";
	std::cout << "You, you-you are, you, you-you are\n";
	std::cout << "Womanizer, womanizer, womanizer\n(Womanizer)" << std::endl;
}

void	Karen::complain(std::string	level){

	int	int_lvl;

	for(int_lvl = 0; int_lvl < 4; ++int_lvl)	{
		if (!level.compare(options_of_compaints[int_lvl]))
		{
			(this->*complaints[int_lvl])();
			return ;
		}
	}
	std::cout << "Don't even know!" << std::endl;
}
