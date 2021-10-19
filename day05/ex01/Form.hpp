#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		std::string const	_name;
		bool				_signed;
		int const			_grade_exec;
		int const			_grade_sign;
	public:
		Form();
		Form(std::string const &name);
		Form(std::string const &name, int const grade_sign);
		Form(std::string const &name, int const grade_sign, int const grade_exec);
		Form(const Form &copy);
		virtual ~Form();

		std::string	const	getName() const;
		int					getExecGrade() const;
		int					getSignGrade() const;
		bool				isSigned() const;
		void				setSigned();
		void				beSigned(Bureaucrat const &bur);

		Form &operator= (Form const &assign);

		class GradeTooHighException: public std::exception {
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowException: public std::exception	{
			public:
				virtual const char * what() const throw();
		};

		class NotSignedExecption: public std::exception	{
			public:
				virtual const char * what() const throw();
		};

		class AlreadySignedException: public std::exception	{
			public:
				virtual const char * what() const throw();
		};
};

std::ostream & operator<<(std::ostream &stream, Form const &printed);
