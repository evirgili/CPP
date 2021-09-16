#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class Phonebook
{
	private:
		Contact contacts[8];
		int count;

	public:
		Phonebook();
		~Phonebook();

		void AddContact();
		void SearchContact();
}

#endif
