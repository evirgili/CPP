#pragma once

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
# define MAX_FORMS	3


class Intern {

	private:
		typedef Form	*(Intern::*FormFuncs)(std::string const target);  // Please do this!
		Form	*createPardon(std::string const target);
		Form	*createShrub(std::string const target);
		Form	*createRobo(std::string const target);
		FormFuncs	availible_forms[MAX_FORMS + 1];
		std::string	known_names[MAX_FORMS + 1];
	public:
		Intern();
		Intern(Intern const &copy);
		~Intern();
		Form	*makeForm(std::string const type, std::string const target);

		class UnknownFormExceptiion: public std::exception {
			public:
				virtual const char * what() const throw();
		};


		Intern	&operator= (Intern const &assign);
};

std::ostream & operator<<(std::ostream &stream, Intern const &printed);
