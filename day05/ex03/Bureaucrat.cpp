#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Kitty") {
	_grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name): _name(name) {
	_grade = 150;
}

Bureaucrat::Bureaucrat(int const grade): _name("Kitty") {
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(std::string const name, int const grade): _name(name) {
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) {
	*this = copy;
}

Bureaucrat::~Bureaucrat() {}

std::string const Bureaucrat::getName() const {
	return (_name);
}

int		Bureaucrat::getGrade() const {
	return (_grade);
}

void	Bureaucrat::setGrade(int const grade) {
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		_grade = grade;
}

void	Bureaucrat::gradeUp() {
	if (this->_grade <= 1)
		throw GradeTooHighException();
	else
		--_grade;
}

void	Bureaucrat::gradeDown() {
	if (this->_grade >= 150)
		throw GradeTooLowException();
	else
		++_grade;
}

void	Bureaucrat::signForm(Form &form) {
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << *this << " cannot sign ";
		std::cout << form.getName() << "(" << form.getSignGrade() << "). ";
		std::cerr << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(Form const &form) const	{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << *this << " cannot execute " << form.getName() << ": " << e.what() << '\n';
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("\033[32mGrade too high!\033[0m");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("\033[31mGrade too low!\033[0m");
}

const char *Bureaucrat::UnsignedFormException::what() const throw() {
	return ("\033[32mForm is unsigned!\033[0m");
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &assign)	{

	if (this != &assign) {
		this->_grade = assign.getGrade();
	}
	return *this;
}

std::ostream & operator<<(std::ostream &stream, Bureaucrat const &printme)	{
		stream << "Bureaucrat " << printme.getName();
		stream << " with grade " << printme.getGrade() << ".\n";
	return stream;
}
