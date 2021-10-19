#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("tgt", 145, 137) {
	this->_target = "target_shrubbery";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): Form("tgt", 145, 137) {
	this->_target = target + "_shrubbery";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) {
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string const	&ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void	ShrubberyCreationForm::Action(void) const	{

	std::ifstream	input_tr;
	std::ofstream	out_file;
	std::string		line;

	input_tr.open("tree.txt");
	if (!input_tr.is_open())
	{
		perror("No file tree sample exists.\n");
		exit(0);
	}
	out_file.open(_target, std::ofstream::trunc | std::ofstream::in);
	if (!out_file.is_open())
	{
		perror("Cannot create new file.\n");
		exit(0);
	}
	std::cout << GREEN;
	while (getline(input_tr, line))	{
		out_file << line << std::endl;
	}
	std::cout << RESET;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	if (executor.getGrade() <= this->getExecGrade())	{
		if (!this->isSigned())	{
			throw NotSignedExecption();
		}
		else {
			this->Action();
			std::cout << "Form " << this->getName() << "(" << this->getExecGrade() << ") executed by " << executor;
		}
	}
	else {
		throw GradeTooLowException();
	}
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator= (ShrubberyCreationForm const &assign)	{
	if (this != &assign)
		this->_target = assign._target;
	return *this;
}
