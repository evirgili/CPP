#pragma once
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form {

	private:
		std::string		_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();

		std::string const		&getTarget() const;
		void					Action(void) const;
		void					execute(Bureaucrat const & executor) const;

		ShrubberyCreationForm	&operator= (ShrubberyCreationForm const &assign);
};
