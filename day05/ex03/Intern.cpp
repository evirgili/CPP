#include "Intern.hpp"

Intern::Intern() {
	availible_forms[1] = &Intern::createRobo;
	availible_forms[2] = &Intern::createShrub;
	availible_forms[3] = &Intern::createPardon;
	known_names[1] = "robotomy request";
	known_names[2] = "shrubbery creation";
	known_names[3] = "presidential rardon";
	std::cout << "Intern hired.\n";
}

Intern::Intern(Intern const &) {
	std::cout << "Huehuehue. They're all the same." << std::endl;

}

Intern::~Intern() {
	std::cout << "Intern fired." << std::endl;
}

Form	*Intern::makeForm(std::string const type, std::string const target)	{

	int	index = -1;
	std::cout << "Here\n";
	Form	*new_form = NULL;
	for (int i = 1; i < MAX_FORMS + 1; ++i)	{
		index += i * (type == known_names[i]);
	}
	++index;
	if (!index)
	{
		std::cerr << "Target " << type << ": ";
		throw UnknownFormExceptiion();
	}
	else	{
		new_form = (this->*availible_forms[index])(target);
		std::cout << "Intern creates " << *new_form;
	}
	return new_form;
}

const char	*Intern::UnknownFormExceptiion::what() const throw() {
	return ("\033[31mI don't know that one!\033[0m");
}

Form	*Intern::createPardon(std::string const target)	{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::createShrub(std::string const target)	{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::createRobo(std::string const target)	{
	return (new RobotomyRequestForm(target));
}

Intern	&Intern::operator= (Intern const &)	{
	return *this;
}

std::ostream &operator<<(std::ostream &stream, Intern const &)	{

	stream << "Just an intern." << std::endl;
	return stream;
}
