#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phonenumber;
		std::string darkest_secret;
	public:
		Contact();
		~Contact();

		void GetFirstname();
		void SetFirstname();
		void GetLastname();
		void SetLastname();
		void GetNickname();
		void SetNickname();
		void GetPhonenumber();
		void SetPhonenumber();
		void GetDarkestsecret();
		void SetDarkestsecret();
}

#endif
