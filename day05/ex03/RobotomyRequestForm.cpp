#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("unsettgt", 72, 45) {
	this->_target = "unset_target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): Form("unsettgt", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) {
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string const	&RobotomyRequestForm::getTarget() const {
	return this->_target;
}

void	RobotomyRequestForm::Action(void) const {

	bool rand = std::rand() % 2;

	if (rand)	{
		std::cout << GREEN <<  " Target " << getTarget() << " was robotized successfully!\n" << RESET;
	}	else	{
		std::cout << RED << " Failed to robotize " << getTarget() << ": not lucky enough.\n" << RESET;
	}
}


void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {

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

RobotomyRequestForm	&RobotomyRequestForm::operator= (RobotomyRequestForm const &assign)	{
	if (this != &assign)
		this->_target = assign._target;
	return *this;
}
