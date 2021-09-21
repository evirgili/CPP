#include "Phonebook.hpp"

Phonebook::Phonebook() : count(0), full(0) {}

Phonebook::~Phonebook(){}

void Phonebook::AddContact()
{
	if (count >= 8){
		full = 1;
		count = 0;
	}
	if (full == 1) {
		std::cout << RED;
		std::cout << "Phonebook is full (you will lost the oldest contact)" << std::endl;
		std::cout << RESET;
	}
	std::cout << GREEN;
	std::cout << "Let's add a new contact" << std::endl;
	std::cout << RESET;
	contacts[count].Setindex(count);
	contacts[count].SetFirstname();
	contacts[count].SetLastname();
	contacts[count].SetNickname();
	contacts[count].SetPhonenumber();
	contacts[count].SetDarkestsecret();
	std::cout << GREEN;
	std::cout << "New contact added!" << std::endl;
	std::cout << std::endl;
	std::cout << RESET;
	if (count != 8)
		count++;
}

void	Phonebook::SearchContact()
{
	std::string str;
	int	req_index;

	std::cout << std::setw(10) << "index" << '|'
	<< std::setw(10) << "first name" << '|'
	<< std::setw(10) << "last name" << '|'
	<< std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < count || (full && i < 8); ++i)
		contacts[i].ShowInfo();
	std::cout << YELLOW;
	std::cout << "Select the required index" << std::endl;
	std::cout << RESET;
	std::cin >> req_index;
	std::cout << "COUNT = " << count << std::endl;
	if (req_index < 1 || (req_index - 1 >= count && full == false) //?
		|| (req_index - 1 > 8 && full == true))
	{
		std::cout <<  RED;
		std::cout << "Wrong input" << std::endl;
		std::cout << RESET;
	}
	else
		contacts[req_index - 1].ShowFullInfo();
}
