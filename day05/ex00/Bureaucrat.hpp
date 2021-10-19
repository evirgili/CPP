#pragma once
#include <iostream>
#include <exception>

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

		class GradeTooHighException: public std::exception {
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowException: public std::exception	{
			public:
				virtual const char * what() const throw();
		};

		Bureaucrat 			&operator=(Bureaucrat const &assign);
};

std::ostream & operator<<(std::ostream &stream, Bureaucrat const &printed);

