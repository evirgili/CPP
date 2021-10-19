#include "Bureaucrat.hpp"
#include <unistd.h>
int		main() {

	std::string names[] = {"Michael Scott", "Dwight Schrute", "Jim Halpert",
						"Pam Beasley", "Stanley Hudson", "Phyllis Lapin", "Angela Martin",
						"Oscar Gutierrez", "Kevin Malone", "Creed Bratton", "Andy Bernard"};
	std::srand(time(0) ^ getpid());
	Bureaucrat	*Office[11];
	for (int i = 0; i < 11; ++i)	{
		int local_grade = std::rand() % 199;
		if (local_grade > 100)
			local_grade += 45;
		std::cout << "Initting\t" << names[i] << " with " << local_grade << ".\n";
		try
		{
			Office[i] = new Bureaucrat(names[i], local_grade);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			if (i % 2)
				Office[i] = new Bureaucrat(names[i], 149);
			else
				Office[i] = new Bureaucrat(names[i], 1);

		}
	}
	std::cout << "========================================\n";

	for (int i = 0; i < 11; ++i)	{

		std::cout << "========================================\n";
		int local_maxima =  std::rand() % 20;
		for (int j = 0; j < local_maxima; ++j)	{
			int coin_flip = std::rand() % 2;
			try	{
				std::cout << *Office[i] << std::endl;
			}
			catch(const std::exception& e)	{
					std::cerr << "Segfaulted ;(" << '\n';
			}

			if (coin_flip)	{
				try
				{
					std::cout << "GradeUp method\n";
					Office[i]->gradeUp();
				}
				catch(const std::exception& e)
				{
					std::cerr << e.what() << '\n';
				}
			}
			else	{
				try
				{
					std::cout << "GradeDown method\n";
					Office[i]->gradeDown();
				}
				catch(const std::exception& e)
				{
					std::cerr << e.what() << '\n';
				}
			}
		}
	}
	for (int i = 0; i < 11; ++i)	{
		delete Office[i];
	}
	return 0;
}
