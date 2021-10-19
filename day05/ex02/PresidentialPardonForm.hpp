#pragma once
#include "Form.hpp"
#include <fstream>

class PresidentialPardonForm: public Form {

	private:
		std::string		_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();

		std::string const		&getTarget() const;
		void					Action(void) const;
		void					execute(Bureaucrat const &executor) const;

		PresidentialPardonForm	&operator= (PresidentialPardonForm const &assign);
};
