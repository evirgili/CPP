#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

# define RESET   "\033[0m"
# define BLACK   "\033[30m"      /* Black */
# define RED     "\033[31m"      /* Red */
# define GREEN   "\033[32m"      /* Green */
# define YELLOW  "\033[33m"      /* Yellow */
# define BLUE    "\033[34m"      /* Blue */
# define MAGENTA "\033[35m"      /* Magenta */
# define CYAN    "\033[36m"      /* Cyan */
# define WHITE   "\033[37m"      /* White */

class Contact{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phonenumber;
		std::string darkest_secret;
		int			index;
	public:
		Contact();
		~Contact();

		void SetFirstname();
		void SetLastname();
		void SetNickname();
		void SetPhonenumber();
		void SetDarkestsecret();
		void Setindex(int count);
		void ShowInfo();
		void ShowFullInfo();
};

#endif
