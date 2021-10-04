#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

# define RESET   "\033[0m"
# define BLACK   "\033[30m"      /* Black */
# define RED     "\033[31m"      /* Red */
# define GREEN   "\033[32m"      /* Green */
# define YELLOW  "\033[33m"      /* Yellow */
# define BLUE    "\033[34m"      /* Blue */
# define MAGENTA "\033[35m"      /* Magenta */
# define CYAN    "\033[36m"      /* Cyan */
# define WHITE   "\033[37m"      /* White */

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const std::string type);
		virtual ~Animal();

		void	SetType(const std::string &type);
		const std::string &GetType() const;
		virtual void makeSound() const;
};

#endif
