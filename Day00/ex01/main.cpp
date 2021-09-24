#include "Phonebook.hpp"

int main()
{
	Phonebook	phonebook;
	std::string cmd;

	while (1)
	{
		std::cout << MAGENTA;
		std::cout << "Enter your command (ADD	SEARCH	EXIT): ";
		std::cout << RESET;
		std::cin >> cmd;
		if (std::cin.eof())
			break;
		if (cmd == "ADD"){
			phonebook.AddContact();
		}
		else if (cmd == "SEARCH"){
			phonebook.SearchContact();
		}
		else if (cmd == "EXIT")
			break;
		else if (!cmd.empty()){
			std::cout <<  RED;
			std::cout << "Wrong input " << std::endl;
			std::cout << RESET;
		}
	}
	return (0);
}
