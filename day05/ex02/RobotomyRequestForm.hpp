#pragma once
#include "Form.hpp"
#include <fstream>

class RobotomyRequestForm: public Form {

	private:
		std::string		_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();

		std::string const		&getTarget() const;
		void					Action(void) const;
		void					execute(Bureaucrat const &executor) const;

		RobotomyRequestForm	&operator= (RobotomyRequestForm const &assign);
};

