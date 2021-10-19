#pragma once
#include <iostream>
#include <exception>

# define RESET   "\033[0m"
# define BLACK   "\033[30m"      /* Black */
# define RED     "\033[31m"      /* Red */
# define GREEN   "\033[32m"      /* Green */
# define YELLOW  "\033[33m"      /* Yellow */
# define BLUE    "\033[34m"      /* Blue */
# define MAGENTA "\033[35m"      /* Magenta */
# define CYAN    "\033[36m"      /* Cyan */
# define WHITE   "\033[37m"      /* White */

#include "Form.hpp"

class Form;
class Bureaucrat {

	private:
		std::string const	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const name);
		Bureaucrat(int const grade);
		Bureaucrat(std::string const name, int const grade);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat();

		std::string	const	getName() const;
		int					getGrade() const;
		void				setGrade(int const grade);
		void				gradeUp();
		void				gradeDown();
		void				signForm(Form &form);
		void				executeForm(Form const & form) const;

		class GradeTooHighException: public std::exception {
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowException: public std::exception	{
			public:
				virtual const char * what() const throw();
		};

		class UnsignedFormException: public std::exception {
			public:
				virtual const char * what() const throw();
		};

		Bureaucrat		&operator=(Bureaucrat const &assign);
};

std::ostream & operator<<(std::ostream &stream, Bureaucrat const &printed);

