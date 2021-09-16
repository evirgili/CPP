#include "Phonebook.hpp"
#include <iostream>

Phonebook::PhoneBook()
{
	count = 0;
}

PhoneBook::~PhoneBook(){}

void Phonebook::AddContact()
{
	if (count >= 8){
		std::cout << "Can't add more than 8 contacts" << std::endl;
	}
	contacts[count]
}
