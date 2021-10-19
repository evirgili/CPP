#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("unsettgt", 25, 5) {
	this->_target = "Not a president";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): Form("unsettgt", 25, 5) {
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) {
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string const	&PresidentialPardonForm::getTarget() const {
	return this->_target;
}

void	PresidentialPardonForm::Action(void) const {
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}


void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	if (executor.getGrade() <= this->getExecGrade())	{
		if (!this->isSigned())	{
			throw NotSignedExecption();
		}
		else {
			std::cout << "Form " << this->getName() << "(" << this->getExecGrade() << ") executed  by " << executor;
			this->Action();
		}
	}
	else {
		throw GradeTooLowException();
	}
}

PresidentialPardonForm	&PresidentialPardonForm::operator= (PresidentialPardonForm const &assign)	{
	if (this != &assign)
		this->_target = assign._target;
	return *this;
}
