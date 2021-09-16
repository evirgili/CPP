#include <iostream>
#include "Phonebook.hpp"

int main(){
	Phonebook	phonebook;
	std::string cmd;

	while (1)
	{
		std::cout << "Enter your comand: ";
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
		else
			std::cout << "Wrong input" << std::endl;
	}
	return (0);
}
