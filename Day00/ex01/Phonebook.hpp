#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
	private:
		Contact contacts[8];
		int count;
		bool full;

	public:
		Phonebook();
		~Phonebook();

		void AddContact();
		void SearchContact();
};

#endif
