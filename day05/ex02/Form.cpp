#include "Form.hpp"

Form::Form(void): _name("Sample"), _grade_exec(150), _grade_sign(150) {
	_signed = 0;
}

Form::Form(std::string const &name): _name(name), _grade_exec(150), _grade_sign(150) {
	_signed = 0;
}

Form::Form(std::string const &name, int const grade_sign): _name(name), _grade_exec(grade_sign), _grade_sign(grade_sign) {
	_signed = 0;
	if (grade_sign < 1) {
		throw GradeTooHighException();
	}
	if (grade_sign > 150) {
		throw GradeTooLowException();
	}
}

Form::Form(std::string const &name, int const grade_sign, int const grade_exec): _name(name), _grade_exec(grade_exec), _grade_sign(grade_sign){
	_signed = 0;
	if (grade_sign < 1 || grade_exec < 1) {
		throw GradeTooHighException();
	}
	if (grade_sign > 150 || grade_exec > 150) {
		throw GradeTooLowException();
	}
}

Form::Form(const Form &copy): _name(copy.getName()),  _grade_exec(copy.getSignGrade()), _grade_sign(copy.getExecGrade()) {
	*this = copy;
}

Form::~Form() {}

std::string const Form::getName() const {
	return this->_name;
}

int		Form::getExecGrade() const {
	return this->_grade_exec;
}

int		Form::getSignGrade() const {
	return this->_grade_sign;
}

bool	Form::isSigned() const {
	return this->_signed;
}

void	Form::setSigned() {
	_signed = 1;
}

void	Form::beSigned(const Bureaucrat &bur) {
	if (this->_signed) {
		throw AlreadySignedException();
		return ;
	}
	if (bur.getGrade() <= this->_grade_sign) {
		std::cout << "Form " << this->getName() << "(" << this->getSignGrade() << ") signed by" << bur << std::endl;
		this->_signed = 1;
	}
	else
		throw GradeTooLowException();
}

Form &Form::operator= (Form const &assign)	{

	this->_signed = assign.isSigned();
	return *this;
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("\033[32mGrade too high!\033[0m");
}

const char * Form::GradeTooLowException::what() const throw() {
	return ("\033[31mGrade too low!\033[0m");
}

const char *Form::NotSignedExecption::what() const throw() {
	return ("\033[31mForm is not signed yet!\033[0m");
}

const char *Form::AlreadySignedException::what() const throw() {
	return ("\033[31mForm is already signed!\033[0m");
}

std::ostream & operator<<(std::ostream &stream, Form const &printed)	{

	stream << "Form " << printed.getName();
	stream << ": sign=" << printed.getSignGrade() << ", exec=" << printed.getExecGrade();
	stream << ", signed=";
	if (printed.isSigned())
		stream << "yes";
	else
		stream << "no";
	return stream;
}

void	Form::Action() const {}

void	Form::execute(Bureaucrat const &) const {}
