#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(){}
Contact::~Contact(){}

void	Contact::Setindex(int count)
{
	index = count + 1;
}

void	Contact::SetFirstname()
{
	std::cout << "Add Firstname" << std::endl;
	std::cin >> first_name;
}

void	Contact::SetLastname()
{
	std::cout << "Add Lastname" << std::endl;
	std::cin >> last_name;
}

void	Contact::SetNickname()
{
	std::cout << "Add Nickname" << std::endl;
	astd::cin >> nickname;
}

void	Contact::SetPhonenumber()
{
	std::cout << "Add Phonenumber" << std::endl;
	std::cin >> phonenumber;
}

void	Contact::SetDarkestsecret()
{
	std::cout << "Add Darkest secret" << std::endl;
	std::cin >> darkest_secret;
}

void	PrintInf(std::string &str, bool pipe)
{
	if (str.length() >= 10)
		std::cout << std::setw(9) << str.substr(0, 9)
		<< '.';
	else
		std::cout <<std::setw(10) << str;
	if (pipe)
		std::cout << '|';
}

void	Contact::ShowInfo()
{
	std::cout << std::setw(10) << index << '|';
	PrintInf(first_name, 1);
	PrintInf(last_name, 1);
	PrintInf(nickname, 0);
	std::cout << std::endl;
}


void	Contact::ShowFullInfo()
{
	std::cout << "Firs name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phonenumber: " << this->phonenumber << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}
