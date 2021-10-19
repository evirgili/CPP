#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "unistd.h"

int	main(void)
{
	Bureaucrat		dwight("Dwight Schrute", 33);
	Bureaucrat		jim("Jim Helpert", 133);
	Bureaucrat		pam("Pam Beasley", 25);
	Bureaucrat		metaAlien("Michael Scott", 1);

	ShrubberyCreationForm shrub = ShrubberyCreationForm("garden");
	RobotomyRequestForm rob = RobotomyRequestForm("robotics");
	PresidentialPardonForm pardon = PresidentialPardonForm("Mr. Owl");
	std::srand(time(0) ^ getpid());
	std::cout << "\n------------------------------------- " << "1" << " -------------------------------------\n";
	jim.executeForm(shrub);
	std::cout << "\n------------------------------------- " << "2" << " -------------------------------------\n";
	try
	{
		shrub.execute(dwight);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err: " << shrub.getName() << ": " << e.what() << '\n';
	}
	std::cout << "\n------------------------------------- " << "3" << " -------------------------------------\n";
	jim.signForm(shrub);
	std::cout << "\n------------------------------------- " << "4" << " -------------------------------------\n";
	dwight.signForm(shrub);
	std::cout << "\n------------------------------------- " << "5" << " -------------------------------------\n";
	jim.executeForm(shrub);
	std::cout << "\n==========================================================================================\n";
	std::cout << "\n------------------------------------- " << "1" << " -------------------------------------\n";
	jim.executeForm(rob);
	std::cout << "\n------------------------------------- " << "2" << " -------------------------------------\n";
	try
	{
		rob.execute(dwight);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err :" << rob.getName() << ": " << e.what() << '\n';
	}
	std::cout << "\n------------------------------------- " << "3" << " -------------------------------------\n";
	try
	{
		jim.signForm(rob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n------------------------------------- " << "4" << " -------------------------------------\n";
	try
	{
		dwight.signForm(rob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n------------------------------------- " << "5" << " -------------------------------------\n";
	jim.executeForm(rob);
	std::cout << "\n------------------------------------- " << "6" << " -------------------------------------\n";
	for (int i = 0; i < 20; ++i)	{
		pam.executeForm(rob);
	}
	std::cout << "\n==========================================================================================\n";
	std::cout << "\n------------------------------------- " << "1" << " -------------------------------------\n";
	jim.executeForm(pardon);
	std::cout << "\n------------------------------------- " << "2" << " -------------------------------------\n";
	dwight.executeForm(pardon);
	std::cout << "\n------------------------------------- " << "3" << " -------------------------------------\n";
	pam.executeForm(pardon);
	std::cout << "\n------------------------------------- " << "4" << " -------------------------------------\n";
	jim.signForm(pardon);
	std::cout << "\n------------------------------------- " << "5" << " -------------------------------------\n";
	dwight.signForm(pardon);
	std::cout << "\n------------------------------------- " << "7" << " -------------------------------------\n";
	pam.signForm(pardon);
	std::cout << "\n------------------------------------- " << "8" << " -------------------------------------\n";
	metaAlien.executeForm(pardon);
	std::cout << "\n------------------------------------- " << "9" << " -------------------------------------\n";
	metaAlien.signForm(pardon);
	std::cout << "\n------------------------------------- " << "10" << " -------------------------------------\n";
	jim.signForm(pardon);
	std::cout << "\n------------------------------------- " << "11" << " -------------------------------------\n";
	dwight.signForm(pardon);
	std::cout << "\n------------------------------------- " << "12" << " -------------------------------------\n";
	pam.signForm(pardon);
	std::cout << "\n------------------------------------- " << "13" << " -------------------------------------\n";
	jim.executeForm(pardon);
	std::cout << "\n------------------------------------- " << "14" << " -------------------------------------\n";
	dwight.executeForm(pardon);
	std::cout << "\n------------------------------------- " << "15" << " -------------------------------------\n";
	try
	{
		pardon.execute(pam);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n------------------------------------- " << "16" << " -------------------------------------\n";
	try
	{
		pardon.execute(metaAlien);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n------------------------------------- " << "17" << " -------------------------------------\n";
	return 0;
}
