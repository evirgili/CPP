#include "Bureaucrat.hpp"
#include "Form.hpp"


int	main()
{

	Bureaucrat		dwight("Dwight Schrute", 33);
	Bureaucrat		jim("Michael Scott", 133);
	Form			*form1;

	std::cout << "\n------------------------------------- " << "1" << " -------------------------------------\n";
	try
	{
		form1 = new Form("List of year bonuses", 77, 177);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n------------------------------------- " << "2" << " -------------------------------------\n";
	try
	{
		form1 = new Form("List of year bonuses", 0, -123);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n------------------------------------- " << "3" << " -------------------------------------\n";
	form1 = new Form("List of year bonuses", 34, 134);
	std::cout << *form1;
	std::cout << "\n------------------------------------- " << "4" << " -------------------------------------\n";
	try
	{
		dwight.signForm(*form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n------------------------------------- " << "5" << " -------------------------------------\n";
	try
	{
		jim.signForm(*form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete form1;
	std::cout << "\n------------------------------------- " << "6" << " -------------------------------------\n";
	Form form2("TOPSY CRETS", 2, 2);
	std::cout << form2;
	std::cout << "\n------------------------------------- " << "7" << " -------------------------------------\n";
	try
	{
		dwight.signForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n------------------------------------- " << "8" << " -------------------------------------\n";
	try
	{
		jim.signForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n------------------------------------- " << "9" << " -------------------------------------\n";

	Bureaucrat pam = Bureaucrat("Pam Beasley", 1);
	Bureaucrat stan = Bureaucrat("Stanley Hudson", 2);
	std::cout << pam << std::endl;
	std::cout << stan << std::endl;
	std::cout << "\n------------------------------------- " << "10" << " -------------------------------------\n";
	pam.signForm(form2);
	std::cout << "\n------------------------------------- " << "11" << " -------------------------------------\n";
	stan.signForm(form2);
	std::cout << "\n------------------------------------- " << "12" << " -------------------------------------\n";
	Form form3 = Form("Assignment", 5, 5);
	std::cout << form3 << std::endl;
	std::cout << "\n------------------------------------- " << "13" << " -------------------------------------\n";
	try
	{
		form3.beSigned(jim);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err :" << form3.getName() << ": " << e.what() << '\n';
	}
	std::cout << "\n------------------------------------- " << "14" << " -------------------------------------\n";
	try
	{
		form3.beSigned(dwight);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err :" << form3.getName() << ": " << e.what() << '\n';
	}
	std::cout << "\n------------------------------------- " << "15" << " -------------------------------------\n";
	try
	{
		form3.beSigned(stan);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err :" << form3.getName() << ": " << e.what() << '\n';
	}
	std::cout << "\n------------------------------------- " << "16" << " -------------------------------------\n";
	try
	{
		form3.beSigned(pam);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err :" << form3.getName() << ": " << e.what() << '\n';
	}
	std::cout << "\n------------------------------------- " << "17" << " -------------------------------------\n";
	return 0;
}
